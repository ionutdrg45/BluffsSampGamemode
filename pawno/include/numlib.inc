/*
 *
 * Numlib library for dealing with integers greater than 32 bits.
 * This functions provided by this library are not as effective as default
 * operators (e.g. +, -, *, /), but allows calculations on integers larger
 * than 32 bits (i.e. > 2 147 483 647 (2^31 - 1))
 *
 */
 
#if defined _numlib_included
    #endinput
#endif
#define _numlib_included
 
#define NUMBER_MAX_LENGTH 256 //The maximum length of the numbers
#define NUMBER_MAX_FACTORIAL 20 //The maximum factorial count
 
#define ushort%0; new %0[6]; //Usage: ushort var;
#define uint%0; new %0[11]; //Usage: uint var;
#define ulong%0; new %0[21]; //Usage: ulong var;
#define uocta%0; new %0[40]; //Usage: uocta var;
 
/* Natives (for tricking Pawno)
 
native add(integer1[], integer2[]);
native subtract(integer1[], integer2[]);
native multiply(integer1[], integer2[]);
native num_power(integer[], power);
native divide(dividend[], divisor);
native get_remainder(dividend[], divisor);
native is_greater(integer1[], integer2[]);
native is_less(integer1[], integer2[]);
native is_num(num[]);
native set_num(integer[], val[]);
native factorial(integer[]);
*/
 
/*
    add:
        Add two integers
 
    Parameters:
        number1[]   An integer represented as an array
        number2[]   An integer represented as an array
 
    Returns:
        The sum of number1 and number2 as an array
*/
 
stock add(n1[], n2[])
{
    new temp, sum[NUMBER_MAX_LENGTH];
 
    // Support for negative integers
    if(n1[0] == '-' && n2[0] != '-')
    {
        n1[0] = '0';
 
        set_num(sum, subtract(n2, n1));
        return sum;
    }
 
    if(n1[0] != '-' && n2[0] == '-')
    {
        n2[0] = '0';
 
        set_num(sum, subtract(n1, n2));
        return sum;
    }
 
    if(n1[0] == '-' && n2[0] == '-')
    {
        n1[0] = '0';
        n2[0] = '0';
    }
 
    new number1[NUMBER_MAX_LENGTH],
        number2[NUMBER_MAX_LENGTH];
 
    set_num(number1, n1);
    set_num(number2, n2);
 
    // Make both number strings contain as many characters (i.e. zero padding)
    new len1 = strlen(number1), len2 = strlen(number2);
    if(len1 > len2)
    {
        for(new i = 0; i < len1-len2; i ++)
        {
            strins(number2, "0", 0, NUMBER_MAX_LENGTH);
        }
    }
    else if(len1 < len2)
    {
        for(new i = 0; i < len2-len1; i ++)
        {
            strins(number1, "0", 0, NUMBER_MAX_LENGTH);
        }
    }
 
    // Loop through numbers one by one, starting from the end
    for(new i = strlen(number1)-1; i >= 0; i--)
    {
        // Get the number to a string, then convert to an integer
        new int1_str[2], int2_str[2], int1, int2, temp_sum;
        strmid(int1_str, number1, i, i+1, sizeof(int1_str));
        strmid(int2_str, number2, i, i+1, sizeof(int2_str));
 
        int1 = strval(int1_str);
        int2 = strval(int2_str);
 
        // Sum the numbers, add the possible number from 'hold'
        temp_sum = int1 + int2 + temp;
 
        // Check if the sum is greater than 9, if it is, subtract 10 and add 1 to 'hold'
        if(temp_sum > 9)
        {
            temp = 1;
            temp_sum -= 10;
        }
        else
        {
            temp = 0;
        }
 
        // Convert the sum calculated in the loop to a string
        new temp_sum_str[3];
        format(temp_sum_str, sizeof(temp_sum_str), "%d", temp_sum);
 
        // Add the sum calculated in the loop to the total sum
        strins(sum, temp_sum_str, 0, sizeof(sum));
    }
 
    // Check for any number on 'hold'
    if(temp != 0)
    {
        // Add the number from 'hold' if any
        format(sum, sizeof(sum), "%d%s", temp, sum);
    }
 
    // Remove insignificant zeroes
    for(new i = 0; i < strlen(sum); i++)
    {
        if(sum[i] != 48 || i == strlen(sum)-1)
        {
            strdel(sum, 0, i);
            break;
        }
    }
 
    return sum;
}
 
/*
    subtract:
        Subtract two integers
 
    Parameters:
        number1[]   An integer represented as an array
        number2[]   An integer represented as an array
 
    Returns:
        The remainder of number1 and number2 as an array
*/
 
stock subtract(n1[], n2[])
{
    new temp, remainder[NUMBER_MAX_LENGTH];
 
    // Support for negative integers
    if(n1[0] == '-' && n2[0] != '-')
    {
        n1[0] = '0';
 
        format(remainder, NUMBER_MAX_LENGTH, "-%s", add(n1, n2));
        return remainder;
    }
 
    if(n1[0] != '-' && n2[0] == '-')
    {
        n2[0] = '0';
 
        set_num(remainder, add(n1, n2));
        return remainder;
    }
 
    if(n1[0] == '-' && n2[0] == '-')
    {
        n2[0] = '0';
    }
 
    new number1[NUMBER_MAX_LENGTH],
        number2[NUMBER_MAX_LENGTH];
 
    set_num(number1, n1);
    set_num(number2, n2);
 
    // Make both number strings contain as many characters (i.e. zero padding)
    new len1 = strlen(number1), len2 = strlen(number2);
    if(len1 > len2)
    {
        for(new i = 0; i < len1-len2; i ++)
        {
            strins(number2, "0", 0, NUMBER_MAX_LENGTH);
        }
    }
    else if(len1 < len2)
    {
        for(new i = 0; i < len2-len1; i ++)
        {
            strins(number1, "0", 0, NUMBER_MAX_LENGTH);
        }
    }
 
    for(new i = strlen(number1)-1; i >= 0; i--)
    {
        // Get the number to a string, then convert to an integer
        new int1_str[2], int2_str[2], int1, int2, temp_remainder;
        strmid(int1_str, number1, i, i+1, sizeof(int1_str));
        strmid(int2_str, number2, i, i+1, sizeof(int2_str));
 
        int1 = strval(int1_str);
        int2 = strval(int2_str);
 
        // Subtract the numbers, subtract the possible number from 'hold'
        temp_remainder = int1 - int2 - temp;
 
        // Check if the remainder is less than 0, if it is, add 10 to the remainder and add 1 to 'hold'
        if(temp_remainder < 0)
        {
            temp = 1;
            temp_remainder += 10;
        }
        else
        {
            temp = 0;
        }
 
        // Convert the remainder calculated in the loop to a string
        new temp_remainder_str[3];
        format(temp_remainder_str, sizeof(temp_remainder_str), "%d", temp_remainder);
 
        // Add the remainder calculated in the loop to the total remainder
        strins(remainder, temp_remainder_str, 0, sizeof(remainder));
    }
 
    // Check if something is in 'hold'
    if(temp != 0)
    {
        // Calculate the smallest multiple of 10 higher than our result (remainder)
        new len = strlen(remainder);
 
        new from[NUMBER_MAX_LENGTH];
        format(from, sizeof(from), "1");
 
        while(len > 0)
        {
            strcat(from, "0", NUMBER_MAX_LENGTH);
            len --;
        }
 
        // Subtract our remainder from the smallest multiple of 10 higher than the remainder
        // This isn't a sophisticated solution, but works.
        format(remainder, sizeof(remainder), "%s", subtract(from, remainder));
 
        // Remove insignificant zeroes
        for(new i = 0; i < strlen(remainder); i++)
        {
            if(remainder[i] != 48 || i == strlen(remainder)-1)
            {
                strdel(remainder, 0, i);
                break;
            }
        }
 
        // Add minus sign
        strins(remainder, "-", 0, NUMBER_MAX_LENGTH);
    }
    else
    {
        // Remove insignificant zeroes
        for(new i = 0; i < strlen(remainder); i++)
        {
            if(remainder[i] != 48 || i == strlen(remainder)-1)
            {
                strdel(remainder, 0, i);
                break;
            }
        }
    }
 
    return remainder;
}
 
/*
    is_greater:
        Compares two numbers, determines whether the first one is greater than the second or not
 
    Parameters:
        number1[]   An integer represented as an array
        number2[]   An integer represented as an array
 
    Returns:
        boolean: true or false
*/
 
stock is_greater(number1[], number2[])
{
    // Number1 is negative and number2 is positive
    if(number1[0] == 45 && number2[0] != 45) return false;
 
    // Vice versa
    if(number1[0] != 45 && number2[0] == 45) return true;
 
    // The sign of both number is the same, we could try the lengths of the numbers now
 
    // Get rid of preceding zeroes
    for(new i, l = strlen(number1); i != l; i++)
    {
        if(number1[i] == '0')
            strdel(number1, 0, i);
        else break;
    }
 
    for(new i, l = strlen(number2); i != l; i++)
    {
        if(number1[i] == '0')
            strdel(number1, 0, i);
        else break;
    }
 
    new len1, len2;
    len1 = strlen(number1);
    len2 = strlen(number2);
 
    if(len1 > len2) return true;
    if(len1 < len2) return false;
 
    // Reaching this point means that the numbers have the same sign and the same length
    // Now we have to start comparing the numbers digit by digit
 
    for(new i = 0; i < len1; i++)
    {
        // Get the number to a string, then convert to an integer
        new int1_str[2], int2_str[2], int1, int2;
        strmid(int1_str, number1, i, i+1, sizeof(int1_str));
        strmid(int2_str, number2, i, i+1, sizeof(int2_str));
 
        int1 = strval(int1_str);
        int2 = strval(int2_str);
 
        if(int1 > int2) return true;
        if(int1 < int2) return false;
    }
 
    // If we can reach all the way here, the numbers are equal
    return false;
}
 
/*
    is_less:
        Compares two numbers, determines whether the first one is smaller than the second or not
 
    Parameters:
        number1[]   An integer represented as an array
        number2[]   An integer represented as an array
 
    Returns:
        boolean: true or false
*/
 
stock is_less(number1[], number2[])
{
    // Number1 is negative and number2 is positive
    if(number1[0] == 45 && number2[0] != 45) return true;
 
    // Vice versa
    if(number1[0] != 45 && number2[0] == 45) return false;
 
    // The sign of both number is the same, we could try the lengths of the numbers now
 
    // Get rid of preceding zeroes
    for(new i, l = strlen(number1); i != l; i++)
    {
        if(number1[i] == '0')
            strdel(number1, 0, i);
        else break;
    }
 
    for(new i, l = strlen(number2); i != l; i++)
    {
        if(number1[i] == '0')
            strdel(number1, 0, i);
        else break;
    }
 
    new len1, len2;
    len1 = strlen(number1);
    len2 = strlen(number2);
 
    if(len1 > len2) return false;
    if(len1 < len2) return true;
 
    // Reaching this point means that the numbers have the same sign and the same length
    // Now we have to start comparing the numbers digit by digit
 
    for(new i = 0; i < len1; i++)
    {
        // Get the number to a string, then convert to an integer
        new int1_str[2], int2_str[2], int1, int2;
        strmid(int1_str, number1, i, i+1, sizeof(int1_str));
        strmid(int2_str, number2, i, i+1, sizeof(int2_str));
 
        int1 = strval(int1_str);
        int2 = strval(int2_str);
 
        if(int1 > int2) return false;
        if(int1 < int2) return true;
    }
 
    // If we can reach all the way here, the numbers are equal
    return false;
}
 
/*
    multiply:
        Multiplies two numbers (represented as char arrays) and returns the result in the form of a char array
 
    Parameters:
        number1[]   An integer represented as an array
        number2[]   An integer represented as an array
 
    Returns:
        The result of the multiplication as a char array (string)
*/
 
stock multiply(_number1[], _number2[])
{
    new finalval[NUMBER_MAX_LENGTH], c[NUMBER_MAX_LENGTH], temp[NUMBER_MAX_LENGTH], number1[NUMBER_MAX_LENGTH], number2[NUMBER_MAX_LENGTH], lengtha, lengthb, j, k, x, y, r, sum;
 
    lengtha = strlen(_number1)-1;
    lengthb = strlen(_number2)-1;
 
    strmid(number1, _number1, 0, NUMBER_MAX_LENGTH);
    strmid(number2, _number2, 0, NUMBER_MAX_LENGTH);
 
    for(new i = 0; i <= lengtha; i ++)
    {
            number1[i] = number1[i] - 48;
    }
 
    for(new i = 0; i <= lengthb; i ++)
    {
            number2[i] = number2[i] - 48;
    }
 
    for(new i = lengthb; i >= 0; i --)
    {
        r = 0;
        for(j = lengtha; j >= 0; j --)
        {
            temp[k++] = (number2[i] * number1[j] + r) % 10;
            r = (number2[i] * number1[j] + r) / 10;
        }
        temp[k++] = r;
        x++;
        for(y = 0;y<x;y++)
        {
            temp[k++] = 0;
        }
    }
 
    k = r = 0;
    for(new i = 0; i < lengtha + lengthb + 2; i ++)
    {
         sum = y = 0;
         for(j = 1; j <= lengthb+1; j ++)
         {
             if(i <= lengtha + j)
             {
                 sum = sum + temp[y + i];
             }
             y += j + lengtha + 1;
         }
         c[k++] = (sum + r) % 10;
         r = (sum + r) / 10;
    }
 
    c[k] = r;
    j = 0;
    for(new i = k - 1; i >= 0; i --)
    {
         finalval[j++] = c[i] + 48;
    }
    finalval[j] = '\0';
 
    // Remove insignificant zeroes
    for(new i = 0; i < strlen(finalval); i++)
    {
        if(finalval[i] != 48)
        {
            strdel(finalval, 0, i);
            break;
        }
    }
 
    return finalval;
}
 
/*
    num_power:
        Returns the integer (represented as a string) to the power of x (represented as an integer)
 
    Parameters:
        integer[]   An integer represented as a string
        power   A 32-bit integer
 
    Returns:
        X (represented as a string) raised to the power of  Y (represented as an integer) as a char array (string)
*/
 
stock num_power(integer[], power)
{
    new finalstr[NUMBER_MAX_LENGTH];
 
    if(!power)
    {
        strmid(finalstr, "1", 0, NUMBER_MAX_LENGTH);
        return finalstr;
    }
 
    strmid(finalstr, multiply(integer,"1"), 0, NUMBER_MAX_LENGTH);
 
    for(new i=0;i<power-1;i++) strmid(finalstr, multiply(integer,finalstr), 0, NUMBER_MAX_LENGTH);
    return finalstr;
}
 
 
stock divide(const dividend[], divisor){
    new q[NUMBER_MAX_LENGTH];
    new temp=0;
    new j=0;
    for(new i=0;i<strlen(dividend);++i)
    {
         temp = temp*10 + (dividend[i] -48);
         if(temp<divisor) q[j++] = 48;
         else{
             q[j++] = (temp / divisor) + 48;
             temp = temp % divisor;
         }
    }
    q[j] = '\0';
    for(new i = 0;i<strlen(q);++i)
    {
        if(q[i] != 48)
        {
            strdel(q, 0, i);
            break;
        }
    }
    return q;
}
 
/*
    get_remainder:
        Returns the remainder of the division of two numbers (the dividend represented as a string, the divisor represented as a 32-bit integer)
 
    Parameters:
        dividend[]  An integer represented as a string
        divisor A 32-bit integer
 
    Returns:
        The remainder of the division as a 32-bit integer
*/
 
stock get_remainder(const dividend[], divisor){
    new temp;
    for(new i=0;i<strlen(dividend);++i)
    {
         temp = temp*10 + (dividend[i] -48);
         if(temp>=divisor) temp = temp % divisor;
    }
    return temp;
}
 
/*
    is_num:
        Checks whether a char array (string) is an actual integer
 
    Parameters:
        num[]   A char array (string)
 
    Returns:
        1 if the string is an integer, 0 if it isn't
*/
 
 
stock is_num(num[])
{
    for(new i=0;i<strlen(num);++i) {
        if(num[i] < 48 || num[i] > 57) return false;
    }
    return true;
}
 
/*
    set_num:
        Sets the value of an integer
 
    Parameters:
        integer[]   The integer, represented as a string, whose value should be set
        val[]   The value represented as a string
 
    Returns:
        The characters written
*/
 
stock set_num(integer[], const val[]) { format(integer, strlen(val)+1, "%s", val); return strlen(val); }
 
/*
    factorial:
        Get the factorial of an integer
 
    Parameters:
        number1[]   An integer represented as a string
 
    Returns:
        The factorial of the specified integer as an array
*/
 
stock factorial(integer[])
{
    new sum[NUMBER_MAX_LENGTH], integer1[NUMBER_MAX_LENGTH];
    format(sum, NUMBER_MAX_LENGTH, "%s", integer);
    format(integer1, NUMBER_MAX_LENGTH, "%s", integer);
    for(new i=0;i<NUMBER_MAX_FACTORIAL;i++)
    {
        if(is_greater(integer1, "1"))
        {
            set_num(sum, multiply(sum, subtract(integer1,"1")));
            set_num(integer1, subtract(integer1,"1"));
        }
        else break;
    }
    return sum;
}