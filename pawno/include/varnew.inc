// blackjack
new BDeal[MAX_PLAYERS],BDealerScore[MAX_PLAYERS],BlackJackPlayerScore[MAX_PLAYERS],
	BDealerCards[MAX_PLAYERS],BlackJackPlayerCards[MAX_PLAYERS],BlackJackStand[MAX_PLAYERS],
	BDealerCard[MAX_PLAYERS][5],BlackJackPlayerCard[MAX_PLAYERS][5],CloseBMatch[MAX_PLAYERS],
	BJMatch[MAX_PLAYERS],BlackJackActions[MAX_PLAYERS];

new PlayerText:BJusebox1[MAX_PLAYERS],PlayerText:BJusebox2[MAX_PLAYERS],PlayerText:BJusebox3[MAX_PLAYERS],
	PlayerText:BJDealerText[MAX_PLAYERS],PlayerText:BJPlayerText[MAX_PLAYERS],PlayerText:BJBlackJackText[MAX_PLAYERS],
	PlayerText:BJScoreText[MAX_PLAYERS],PlayerText:BJDealText[MAX_PLAYERS],PlayerText:BJDealAmountText[MAX_PLAYERS],
	PlayerText:BJBalanceText[MAX_PLAYERS],PlayerText:BJBalanceAmountText[MAX_PLAYERS],PlayerText:BJDealButtonText[MAX_PLAYERS],
	PlayerText:BJEnterBetText[MAX_PLAYERS],PlayerText:BJDealerScoreText[MAX_PLAYERS],PlayerText:BJPlayerScoreText[MAX_PLAYERS],
	PlayerText:BJOpenActionText[MAX_PLAYERS],PlayerText:BJreset[MAX_PLAYERS],PlayerText:BJDealerCard1[MAX_PLAYERS],
	PlayerText:BJDealerCard2[MAX_PLAYERS],PlayerText:BJDealerCard3[MAX_PLAYERS],PlayerText:BJDealerCard4[MAX_PLAYERS],
	PlayerText:BJDealerCard5[MAX_PLAYERS],PlayerText:BJPlayerCard1[MAX_PLAYERS],PlayerText:BJPlayerCard2[MAX_PLAYERS],
	PlayerText:BJPlayerCard3[MAX_PLAYERS],PlayerText:BJPlayerCard4[MAX_PLAYERS],PlayerText:BJPlayerCard5[MAX_PLAYERS],
	PlayerText:BJWinText[MAX_PLAYERS];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

//another var 
new IsBot[MAX_PLAYERS], housestring[200][256],barstring[100][256],
  	wantedvar[MAX_PLAYERS],Asteapta[MAX_PLAYERS];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// players var
new SQL = -1;
new cCarOwner[MAX_CLANS][MAX_CLAN_VEHICLES][50],cCarPlate[MAX_CLANS][MAX_CLAN_VEHICLES][30],GiftBoxActiv = 1,destroytimer[MAX_CLANS][MAX_CLAN_VEHICLES],
	Float:DMInfo[MAX_PLAYERS][3],Float:GiftPosX,Float:GiftPosY,Float:GiftPosZ,giftboxobject,Text3D:giftbox3DText,
	TogVIP[MAX_PLAYERS],QuestWait[MAX_PLAYERS],TogBid[MAX_PLAYERS],HealTimer[MAX_PLAYERS],Listening[MAX_PLAYERS],TaxiCall[MAX_PLAYERS],
	TaxiAccepted[MAX_PLAYERS],TaxiFare[MAX_PLAYERS],TaxiTimer[MAX_PLAYERS],TaxiMoneySpent[MAX_PLAYERS],TaxiMoneyEarned[MAX_PLAYERS],
	TaxiDriver[MAX_PLAYERS],CanSpectate[MAX_PLAYERS],BreachID[MAX_PLAYERS],SellHouseID[MAX_PLAYERS],ShowDMG[MAX_PLAYERS],vObject[MAX_VEHICLES],
	BlockVehUse[MAX_PLAYERS],FireworkTimer[MAX_PLAYERS],LiveQuestion[MAX_PLAYERS][128],TimerQuestion[MAX_PLAYERS],ChangeClothes[MAX_PLAYERS],
	SkinSelect[MAX_PLAYERS],HaveNewbie[MAX_PLAYERS],HelperTimer[MAX_PLAYERS],timernewbie[MAX_PLAYERS],WantedFarmer[MAX_PLAYERS],
	FactionSpec[MAX_PLAYERS],HOwnerID[MAX_PLAYERS],HOwnerName[MAX_PLAYERS][30],RestartTimer,WantName[MAX_PLAYERS][30],TypeName[MAX_PLAYERS],
	JobCar[MAX_PLAYERS],LastMove[MAX_PLAYERS],OnlineTime[MAX_PLAYERS],adutytime[MAX_PLAYERS],OnlineTimeToday[MAX_PLAYERS],DrugTimer[MAX_PLAYERS],
	GarbageInCar[MAX_VEHICLES],GarbageCollected[MAX_PLAYERS],CarCollisions[MAX_PLAYERS],DeathP[MAX_PLAYERS],LastText[MAX_PLAYERS][128],
	LastTextTime[MAX_PLAYERS],TextCount[MAX_PLAYERS],examcar[MAX_PLAYERS],LastBiz[MAX_PLAYERS],LastBizTime[MAX_PLAYERS],countdown,
	LastPlayer[MAX_PLAYERS],Selectat[1000][MAX_PLAYERS],XCheckpoints[MAX_PLAYERS],LastCheckpoint[MAX_PLAYERS],Selected[MAX_PLAYERS][101],
	Selected2[MAX_PLAYERS],AdvMSG[MAX_PLAYERS][256],AdvPlayer[MAX_PLAYERS],AdvTimer[MAX_PLAYERS],CarPlate[MAX_PLAYERS][MAX_PERSONAL_VEHICLES][30],
	CarVipName[MAX_PLAYERS][MAX_PERSONAL_VEHICLES][20],CarMod[MAX_PLAYERS][MAX_PERSONAL_VEHICLES][17],CarOwner[MAX_PLAYERS][MAX_PERSONAL_VEHICLES][50],
	SelectedCar[MAX_PLAYERS],SellTradeID[MAX_PLAYERS],SellTradePrice[MAX_PLAYERS],SellTradeTimer[MAX_PLAYERS],SellHiddenID[MAX_PLAYERS],
	SellHiddenPrice[MAX_PLAYERS],Float:old_veh_pos[MAX_VEHICLES + 1][3],Float:LastPos[MAX_PLAYERS][3],restruck[MAX_PLAYERS],viddd[MAX_PLAYERS],
	Trucker[MAX_PLAYERS],Trucker2[MAX_PLAYERS],Trucker3[MAX_PLAYERS],Trucker4[MAX_PLAYERS],TruckID[MAX_PLAYERS],RepairTime[MAX_PLAYERS],
	pnsmoney[MAX_PLAYERS],AreFaina[MAX_PLAYERS],CarJacker[MAX_PLAYERS],BuyCar[MAX_PLAYERS],IsPlayerAFK[MAX_PLAYERS],object,
	iGMXTick,iGMXTimer,IsABid = 0,TopBidder = -1,BidAmount = 1000000,BidAmount2 = 1,IsAtBid = 0,BidTime = 0,WantToBid[MAX_PLAYERS],
	WantToBid2[MAX_PLAYERS],RentCar[MAX_PLAYERS],RentTime[MAX_PLAYERS],RentMoneySpent[MAX_PLAYERS],waitwar[15],SelFac[MAX_PLAYERS],
	EnterInModShop[MAX_PLAYERS],PlayerEnterTime[MAX_PLAYERS],Undercover[MAX_PLAYERS],shotTime[MAX_PLAYERS],shot[MAX_PLAYERS],
	WantedName[MAX_PLAYERS][256],WantedReason[MAX_PLAYERS],WantedTimer[MAX_PLAYERS],Float:QuestCarKM[MAX_PLAYERS],EmailId[MAX_PLAYERS][11],
	taxim[MAX_PLAYERS],Float:evex,Float:evey,Float:evez,eventenabled,pickup_event,virtuallevent,interiorevent,fight2[MAX_PLAYERS],
	reporttext[MAX_PLAYERS][128],reportcheater[MAX_PLAYERS] = -1,reportreason[MAX_PLAYERS] = 0,playerreported[MAX_PLAYERS] = -1,dmvp,
	dsp,gslsenter1,gslsenter2,gslsenter3,gslsenter4,eventobjects=0,objectevent[11],eventprizeobj[11],toglc[MAX_PLAYERS],togsurf[MAX_PLAYERS],
	togarrests[MAX_PLAYERS],toge[MAX_PLAYERS],raceoff[MAX_PLAYERS],Carspawn[MAX_VEHICLES],Destroycar = 0,masini = 0,stockss = 0,svarss = 0,
	clanss = 0,factionss = 0,questobjectss = 0,Diceid[MAX_PLAYERS],Dicem[MAX_PLAYERS],wantedlost[MAX_PLAYERS],CheckBus[MAX_PLAYERS],
	BusCheckk[MAX_PLAYERS],JobStep[MAX_PLAYERS],CreateVEH[MAX_PLAYERS],CreateVEHID[MAX_PLAYERS],timerbus[MAX_PLAYERS],busc[MAX_PLAYERS],
	Float:Health[MAX_PLAYERS],Float:Armour[MAX_PLAYERS],SpamCheck[MAX_PLAYERS],antirem[MAX_PLAYERS],login[MAX_PLAYERS],Clanidoff[MAX_PLAYERS],
	kickafk = 0,QuestionsOn = 0,tazer[MAX_PLAYERS],PlayerHandsup[MAX_PLAYERS],curatj[MAX_PLAYERS],XDeaths[MAX_PLAYERS],LastDeath[MAX_PLAYERS],
	playerdeath[MAX_PLAYERS],drug[MAX_PLAYERS],bizid[MAX_PLAYERS],bizprice[MAX_PLAYERS],bizoffer[MAX_PLAYERS],bool:WeaponData[MAX_PLAYERS][13],
	TimerAtuPlayer[MAX_PLAYERS],Cash[MAX_PLAYERS],bussines = 0,housess = 0,turfsss = 0,Vehicless = 0,togfind[MAX_PLAYERS],TowAcc[MAX_PLAYERS],
	JackAcc[MAX_PLAYERS],HaveHelmet[MAX_PLAYERS],vendi[MAX_PLAYERS],vendi2[MAX_PLAYERS],Vending[MAX_PLAYERS],
	FactionOffer[MAX_PLAYERS],hudactivated[MAX_PLAYERS],ReportTime[MAX_PLAYERS],timerreport[MAX_PLAYERS],Fishing[MAX_PLAYERS],FishTimer[MAX_PLAYERS],
	FishTimerr[MAX_PLAYERS],TipPeste[MAX_PLAYERS],farmerc[MAX_PLAYERS],farmertime[MAX_PLAYERS],timerfarmm[MAX_PLAYERS],timersoo[MAX_PLAYERS],
	soexpire[MAX_PLAYERS],BusinessRob[MAX_PLAYERS],RobTime[MAX_PLAYERS],RobTimer[MAX_PLAYERS],somatee[MAX_PLAYERS],somated[MAX_PLAYERS],
	somatename[MAX_PLAYERS][30],pizzaj[MAX_PLAYERS],pizzatime[MAX_PLAYERS],pizzaprize[MAX_PLAYERS],failpizza[MAX_PLAYERS],PizzaCP[MAX_PLAYERS],
	TrashID[MAX_PLAYERS],GarbageTimer[MAX_PLAYERS],deathdeletetime[MAX_PLAYERS],targetfind[MAX_PLAYERS],InHouse[MAX_PLAYERS],InBussines[MAX_PLAYERS],
	InHQ[MAX_PLAYERS],cased[MAX_PLAYERS],caser[MAX_PLAYERS],adminacceptedhelp[MAX_PLAYERS] = -1,WTChannel[MAX_PLAYERS],arrestcop[MAX_PLAYERS] = -1,
	eventorganizer[MAX_PLAYERS],requestingevent[MAX_PLAYERS],requestingtitle[MAX_PLAYERS][50],requestinglocation[MAX_PLAYERS][50],
	requestingdescription[MAX_PLAYERS][100],requestingprize[MAX_PLAYERS],requestingtime[MAX_PLAYERS][50],payala[MAX_PLAYERS],activeevent,
	eventtitle[50],eventlocation[50],eventdescription[100],eventprize,eventtime[50],gatelspd,gatelvpd,gatelvpd2,gateng,lspdbar,lvpdbar,
	UsingDrugs[MAX_PLAYERS],Float:PlayerPos[MAX_PLAYERS][6],Float:PlayerPosii[MAX_PLAYERS][6],vehEngine[MAX_VEHICLES],HelperDuty[MAX_PLAYERS],
	AdminDuty[MAX_PLAYERS],vehRadio[MAX_VEHICLES],customRadio[MAX_VEHICLES][128],gPlayerUsingLoopingAnim[MAX_PLAYERS],
	gPlayerAnimLibsPreloaded[MAX_PLAYERS],FreeOffer[MAX_PLAYERS],FreePlayer[MAX_PLAYERS],FreePrice[MAX_PLAYERS],FreeExpire[MAX_PLAYERS],
	MatsOffer[MAX_PLAYERS],MatsPrice[MAX_PLAYERS],MatsAmmo[MAX_PLAYERS],SellgunOffer[MAX_PLAYERS],SellgunPrice[MAX_PLAYERS],
	SellgunMats[MAX_PLAYERS],SellgunAmmo[MAX_PLAYERS],SellgunID[MAX_PLAYERS],HouseID[MAX_PLAYERS],HouseOffer[MAX_PLAYERS],HousePrice[MAX_PLAYERS],
	ofercar[MAX_PLAYERS],hiddenoffer[MAX_PLAYERS],hiddenprice[MAX_PLAYERS],carprice[MAX_PLAYERS],primesccar[MAX_PLAYERS],cartype[MAX_PLAYERS],
	CarID[MAX_PLAYERS],tradeofferer[MAX_PLAYERS],tradediff[MAX_PLAYERS],tradecars[MAX_PLAYERS],tradecars2[MAX_PLAYERS],tradetype[MAX_PLAYERS],
	tradetype2[MAX_PLAYERS],flymode[MAX_PLAYERS],EnableBoast[MAX_PLAYERS],Text3D:areap,areape = 0,Text3D:DeadScris[MAX_PLAYERS],
	Text3D:dynamicevent3DText,Float:posxxx[MAX_PLAYERS],Float:posyyy[MAX_PLAYERS],Float:poszzz[MAX_PLAYERS],RegistrationStep[MAX_PLAYERS],
	TakingLesson[MAX_PLAYERS],UsedFind[MAX_PLAYERS],NoFuel[MAX_PLAYERS],MatsHolding[MAX_PLAYERS],GotoMats[MAX_PLAYERS],PlayerStoned[MAX_PLAYERS],
	ConsumingMoney[MAX_PLAYERS],TutTime[MAX_PLAYERS],PlayerDrunk[MAX_PLAYERS],PlayerDrunkTime[MAX_PLAYERS],LiveOffer[MAX_PLAYERS],
	TalkingLive[MAX_PLAYERS],PlacedNews[MAX_PLAYERS],SelectChar[MAX_PLAYERS],SelectCharID[MAX_PLAYERS],SelectCharPlace[MAX_PLAYERS],
	ChosenSkin[MAX_PLAYERS],CurrentMoney[MAX_PLAYERS],CP[MAX_PLAYERS],RaceCP[MAX_PLAYERS],RacePos[MAX_PLAYERS],
	MoneyMessage[MAX_PLAYERS],Tax,TaxValue,PaintBallWinnerKills[5],PaintWinner[5],MedicCall[MAX_PLAYERS],MedicAccepted[MAX_PLAYERS],
	Slapped[MAX_PLAYERS],MedicTime[MAX_PLAYERS],NeedMedicTime[MAX_PLAYERS],TicketOffer[MAX_PLAYERS],TicketMoney[MAX_PLAYERS],GotHit[MAX_PLAYERS],  
	GoChase[MAX_PLAYERS],GetChased[MAX_PLAYERS],PlayerTied[MAX_PLAYERS], PlayerCuffed[MAX_PLAYERS],PlayerCuffed2[MAX_PLAYERS],
	PlayerCuffedTime[MAX_PLAYERS],PlayerTazeTime[MAX_PLAYERS],RepairOffer[MAX_PLAYERS], RepairPrice[MAX_PLAYERS],RefillOffer[MAX_PLAYERS],
	RefillPrice[MAX_PLAYERS],RepairCar[MAX_PLAYERS],TransferOffer[MAX_PLAYERS], TransferMoney[MAX_PLAYERS],DrugOffer[MAX_PLAYERS], 
	DrugPrice[MAX_PLAYERS],DrugGram[MAX_PLAYERS],WantedPoints[MAX_PLAYERS], OnDuty[MAX_PLAYERS],gPlayerCheckpointStatus[MAX_PLAYERS], 
	gPlayerLogged[MAX_PLAYERS],gPlayerLogTries[MAX_PLAYERS],gPlayerSpawned[MAX_PLAYERS],gLastCar[MAX_PLAYERS],gNews[MAX_PLAYERS],
	gFam[MAX_PLAYERS],BigEar[MAX_PLAYERS],Spectate[MAX_PLAYERS],SpectateState[MAX_PLAYERS],CellTime[MAX_PLAYERS],HireCar[MAX_PLAYERS],
	SafeTime[MAX_PLAYERS],HidePM[MAX_PLAYERS],PhoneOnline[MAX_PLAYERS],PhoneOnlineCalls[MAX_PLAYERS],TurfsDisp[MAX_PLAYERS],FirstSpawn[MAX_PLAYERS],
	Mobile[MAX_PLAYERS],CallCost[MAX_PLAYERS],gPlayerAccount[MAX_PLAYERS],gLastDriver[600],racep, racem,racec, racecol, 
	racet, racers, racevotem[5], racevotec[20],racevotecol[2],carvoted, rmapvoted,rcarid[20],paintp[5],paintm[5], 
	paintg[3], paintt[5], paintrs[5],paintvoteg[3][3],paintvotem[5][5],mapvoted[5], gunvoted[3], gCarLock[600];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// textdraw
new PlayerText:TimeLeftWar1[MAX_PLAYERS],PlayerText:TextJos[MAX_PLAYERS],PlayerText:logo[MAX_PLAYERS],
	PlayerText:PaintBallText[MAX_PLAYERS],PlayerText:FindTXD[MAX_PLAYERS][2],Text:Time,Text:Date,
	PlayerText:Bus1[MAX_PLAYERS],PlayerText:Bus2[MAX_PLAYERS],PlayerText:TextDrawSpec[MAX_PLAYERS][6],
	PlayerText:Fuell[MAX_PLAYERS],PlayerText:Speedd[MAX_PLAYERS],PlayerText:Odom[MAX_PLAYERS],
	PlayerText:carlocked[MAX_PLAYERS],PlayerText:farmbox[MAX_PLAYERS],PlayerText:farmjob[MAX_PLAYERS],
	PlayerText:farmspeed[MAX_PLAYERS],PlayerText:farmwanted[MAX_PLAYERS],PlayerText:farmtime[MAX_PLAYERS],
	PlayerText:Jailtime[MAX_PLAYERS],PlayerText:Tutorial[MAX_PLAYERS],PlayerText:Step[MAX_PLAYERS],
	PlayerText:BusJob[MAX_PLAYERS],PlayerText:BusCheck[MAX_PLAYERS],PlayerText:DMVexam[MAX_PLAYERS],
	PlayerText:DMVcheck[MAX_PLAYERS],PlayerText:WantedText[MAX_PLAYERS],PlayerText:UndercoverText[MAX_PLAYERS],
	PlayerText:Reportss[MAX_PLAYERS],PlayerText:RaceTD[MAX_PLAYERS][5],PlayerText:HUD[5][MAX_PLAYERS],
	PlayerText:TextLogo[MAX_PLAYERS],Text:AdminHUD,
	PlayerText:RentCarText[MAX_PLAYERS];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// global variables
new Float:rx,Float:ry,Float:rz,objstore[128],cbjstore[128],ghour = 0,gminute = 0,gsecond = 0,dollah = 100000,realtime = 1,
	wotime = 15,levelcost = 28000,realchat = 1,timeshift = -1,shifthour,synctimer,unjailtimer,preparerace1,preparerace2,preparepaint1,
	preparepaint2,preparepaint3,preparepaint4,paintrun1,paintrun2,paintrun3,paintrun4,racerun1,racerun2,wantedicatimer,
	twosecondstimer,productiontimer,twominutestimer,savedatatimer,weathertimer,checkgastimer,checkvehinfotimer,cartimer,
	levelexp = 4,pickups,Float:TeleportDest[MAX_PLAYERS][3],Float:TelePos[MAX_PLAYERS][6];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// pizza checkpoints
new Float:gRandomPizza[30][3] = {
{1886.8344,-1116.9644,25.2734},{2435.8706,-1303.3206,24.7403},{2330.0266,-1681.6777,14.4268},
{2807.9863,-1179.1047,25.3741},{2192.8167,-1003.7396,62.6182},{2015.1249,-1703.4521,13.6904},
{256.2383,-1365.6805,53.1094},{1496.9115,-690.0555,94.7500},{1181.7395,-1074.4592,31.6719},
{206.7339,-1771.1189,4.2873},{298.8037,-1155.8375,80.9099},{1033.7893,-809.8940,101.8516},
{2483.3259,-1997.9877,13.8343},{1873.7358,-2020.6090,13.5469},{650.3296,-1619.5085,15.0000},
{2257.5620,733.0655,11.4609},{1935.6852,739.5255,10.8203},{2787.9856,2223.3850,14.6615},
{2625.0615,2016.8232,10.8203},{1599.3604,2147.3357,11.4609},{1025.9944,1975.8160,11.3449},
{1703.6294,2694.0879,10.8203},{1972.5380,927.4847,10.8203},{1938.6154,2184.8523,10.8203},
{1682.1293,1913.6169,10.8203},{988.3104,1879.0475,11.3594},{1458.3400,2523.8979,10.8203},
{2484.4036,1528.7244,10.9017},{2225.0576,2520.0786,10.8203},{1531.1907,2357.5469,10.8203}
};
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// garbage checkpoints
new Float:CHKGarbage[25][3] = {
{2399.3333,-1721.3162,14.1116},{2159.6494,-1612.4806,14.8997},{1102.0321,-1876.0066,13.5469},
{1611.9386,-994.9053,24.0781},{1425.5986,-1080.5208,17.5583},{811.0487,-1098.3597,25.9063},
{414.3998,-1511.9857,33.0968},{433.4746,-1747.7964,9.2082},{945.7682,-1742.5713,14.3200},
{857.0139,-1381.7810,13.7297},{1492.3641,-687.2353,94.7500},{789.0624,-863.2424,60.6406},
{642.9407,-511.0573,17.0787},{1105.6340,-293.6084,73.9851},{1571.8179,26.1781,24.1641},
{2849.5703,1293.6212,11.3906},{2319.4424,1801.6254,11.6260},{2181.5298,1419.7175,10.8203},
{2656.4788,1081.9113,10.8203},{2638.0356,1835.3378,11.0234},{1977.2443,2495.1428,10.8665},
{1532.2018,2725.5518,10.8203},{959.2382,1805.0083,8.8516},{1479.1313,967.0140,10.8203},
{1579.1681,667.6521,10.8203}
};
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// race cars model
new RaceCar[22][1] = {
{402},{411},{415},{429},{451},{468},{471},{477},{480},{494},{495},{496},{506},
{522},{541},{556},{557},{560},{568},{571},{572},{589}
};

// race positions(1)
new Float:RaceCPos1[20][4] = {
	{1664.8215,-1952.9338,23.5388,17.8781},{1651.0105,-1957.0048,23.5426,12.6880},{1661.5887,-1943.2240,23.6287,15.3161},
	{1650.4756,-1946.2118,23.6329,15.0291},{1646.9115,-1935.5114,23.8815,14.0427},{1658.0850,-1932.3418,23.8765,15.8355},
	{1655.7063,-1920.8724,24.1644,18.9371},{1644.0537,-1924.3422,24.1628,15.1860},{1641.3341,-1913.5647,24.4346,13.6180},
	{1652.5720,-1910.4500,24.4346,16.6797},{1647.5660,-1898.9185,24.6154,17.7002},{1638.0862,-1901.8688,24.6104,14.5660},
	{1634.2096,-1891.8969,24.7167,14.7279},{1644.1671,-1889.2178,24.7190,16.8311},{1641.0809,-1878.0859,24.8309,18.4938},
	{1630.6755,-1880.6888,24.8313,13.7463},{1637.4492,-1865.6379,25.1025,14.6930},{1626.5314,-1867.9270,25.1121,14.2808},
	{1623.5702,-1856.3097,25.4080,14.2762},{1634.2532,-1853.7094,25.4028,15.0607}
};

// race checkpoints (1)
new Float:RaceCCPos1[24][3] = {
	{1606.7430,-1627.0051,28.5859},{1608.6531,-1416.5537,28.5859},{1631.7269,-1217.7533,51.6463},{1653.7821,-1066.3461,60.9307},
	{1680.7343,-898.5240,61.3034},{1700.6436,-763.1754,52.6851},{1714.1312,-615.1121,39.3733},{1701.7422,-459.2735,33.3373},
	{1676.5778,-242.3406,42.7356},{1663.2672,-93.2728,35.4748},{1607.3998,61.6162,37.4506},{1654.0922,264.7711,30.0483},
	{1702.7062,400.2924,30.4659},{1760.1658,564.4227,25.0367},{1799.0160,765.1021,12.1282},{1804.6685,981.3500,6.8006},
	{1804.7825,1168.8334,6.7344},{1804.8198,1350.4043,6.7420},{1804.8362,1606.7394,6.7344},{1804.8529,1822.0753,6.7344},
	{1804.8529,1975.0753,5.0893},{1806.3547,2087.9102,3.9063},{1806.3972,2232.4299,4.7782},{1806.5177,2352.0327,6.7613}
};

// race positions (2)
new Float:RaceCPos2[20][4] = {
	{-2782.2056,-1729.1956,141.3940,348.3545},{-2786.2693,-1728.6627,141.4626,350.6985},{-2784.9417,-1720.3645,141.4154,350.6236},
	{-2780.5410,-1721.1072,141.4168,347.1776},{-2783.3452,-1713.3201,141.3922,350.3702},{-2778.9021,-1714.4030,141.4010,347.5752},
	{-2782.2080,-1706.5625,141.3737,350.5704},{-2777.4211,-1707.5137,141.3996,347.7630},{-2780.9370,-1699.0852,141.3533,350.0144},
	{-2775.7886,-1699.9452,141.4039,347.6471},{-2779.3596,-1690.7311,141.3320,347.8316},{-2773.4766,-1692.1511,141.5199,345.2198},
	{-2777.7402,-1683.1970,141.3103,347.9884},{-2771.9341,-1684.6481,141.5195,343.0033},{-2775.7651,-1673.8101,141.2850,348.4796},
	{-2769.9460,-1674.6434,141.5010,350.4145},{-2774.3894,-1665.9292,141.2635,353.1205},{-2769.3784,-1666.3802,141.3198,350.2652},
	{-2772.9714,-1656.4193,141.2386,350.2765},{-2768.2588,-1656.9392,141.2353,352.0675}
};

// race checkpoints (2)
new Float:RaceCCPos2[22][3] = {
	{-2763.6570,-1540.6292,140.3021},{-2735.1819,-1337.1201,147.6727},{-2609.8960,-1156.1077,170.7550},{-2531.7278,-1113.6655,176.6869},
	{-2613.8115,-1194.2880,198.7064},{-2659.8167,-1331.5876,243.6851},{-2552.7744,-1327.3273,267.5554},{-2404.8711,-1278.8977,296.9921},
	{-2414.6677,-1350.5143,336.2686},{-2564.4937,-1454.7810,356.9287},{-2399.8770,-1391.4828,359.1385},{-2215.8020,-1505.4290,359.2662},
	{-2214.0144,-1684.1577,377.5201},{-2229.4924,-1562.7354,379.0385},{-2358.2944,-1447.9075,383.4210},{-2521.5945,-1600.5491,397.8123},
	{-2505.6191,-1764.3940,402.1362},{-2442.2500,-1780.0552,415.3171},{-2433.2964,-1726.7140,433.6148},{-2302.4834,-1792.4752,444.3116},
	{-2287.0095,-1705.3296,477.3173},{-2320.7354,-1619.1311,483.4444}
};

// race positions (3)
new Float:RaceCPos3[20][4] = {
	{-312.4946,-1912.2476,12.8110,91.2134},{-312.7263,-1907.5328,12.4271,90.4969},{-319.4455,-1907.5010,12.0213,89.2331},
	{-319.5836,-1912.4535,12.4430,92.3464},{-326.0461,-1908.1326,11.6520,95.1078},{-325.8822,-1912.7118,12.1222,92.4220},
	{-332.5753,-1908.6427,11.2628,93.3712},{-332.5471,-1912.9854,11.7927,92.1575},{-339.7218,-1908.7074,10.6430,88.7288},
	{-339.9342,-1912.9471,11.6197,89.7244},{-346.8582,-1908.6205,10.2382,90.9769},{-346.8570,-1912.9503,11.4538,90.3600},
	{-355.4246,-1909.8541,10.2838,95.7476},{-355.0123,-1913.7578,11.4055,97.7317},{-362.3782,-1911.3519,10.4857,103.8645},
	{-361.2711,-1915.3796,11.8299,103.9565},{-369.0455,-1912.9365,10.9361,101.2732},{-367.8647,-1917.0819,12.3502,104.3768},
	{-376.2256,-1913.9048,10.7586,97.4436},{-374.8159,-1918.6959,12.6140,103.6338}
};

// race checkpoints (3)
new Float:RaceCCPos3[24][3] = {
	{-446.0038,-1980.6345,27.2827},{-560.0427,-2028.8717,50.1934},{-667.8534,-2044.7177,25.0980},{-773.7825,-2128.8652,25.2220},
	{-836.3202,-2185.4963,23.1133},{-937.3137,-2181.0674,34.6764},{-956.5271,-2313.4153,58.0039},{-1022.7851,-2375.8484,58.4726},
	{-1210.2120,-2347.3665,17.2871},{-1268.2340,-2254.2036,22.1183},{-1364.0348,-2175.1973,21.7806},{-1487.6610,-2157.6660,2.1014},
	{-1628.1329,-2154.7593,26.9979},{-1706.6035,-2095.3848,38.9558},{-1948.7546,-2047.5782,70.2670},{-1889.7488,-1933.2793,82.2486},
	{-1744.8981,-1917.8726,98.3029},{-1545.7839,-1896.4569,79.7016},{-1493.3903,-1791.4915,53.0705},{-1444.5317,-1820.0983,44.4001},
	{-1415.2518,-2002.1530,7.2238},{-1318.3213,-2057.0828,16.7988},{-1307.5045,-2176.3328,21.6446},{-1219.6254,-2343.9712,17.0815}
};

/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// trucker pickup
new Float:CHKTruck[18][3] = {
	{-99.2558,-1168.3788,2.5964}, //GAS LS ---- CHECKS LS
	{1315.7880,-867.2107,39.5781}, //24/7 Store LS
	{2116.6514,-1771.4202,13.3937}, //Pizza Boy LS
	{2816.3660,-1698.8490,9.9504}, //8 Track LS
	{2651.2346,-2390.4055,13.6328}, //Chop Shop LS
	{2115.3047,-1723.7944,13.5502}, //Crack House LS
	{2165.3979,2746.7004,10.8203}, //GAS LV ---- CHECKS LV
	{2046.1804,2244.4304,10.8203}, //Clothing Soter LV
	{2447.6467,1999.7650,10.8203}, //Burger Shot LV
	{2503.0703,1531.9418,10.6749}, //Pool LV
	{2032.2845,1516.1019,10.8203}, //Pirate Ship LV
	{1483.8053,1046.6919,10.8203}, //Chuckup LV
	{-1728.6168,-119.5973,3.5547}, //Ship SF ---- CHECKS SF
	{-1694.2990,399.9545,7.1797}, //GAS SF
	{-1672.8090,1322.6425,7.1853}, //Pier 69 SF
	{-2110.9172,816.9711,69.5625}, //Supa Save SF
	{-2533.0513,1227.8401,37.4219}, //Restaurant SF
	{-2142.6599,-442.6247,35.3359} //Homies SF
};

// trucker pickup (2)
new Float:CHKTruck2[18][3] = {
	{-119.2522,-1218.2719,2.9902}, //LANGA GAS LS ---- CHECKS LS
	{1361.1011,-906.6476,35.3157}, //LANGA 24/7 Store LS
	{2078.8257,-1706.9739,13.3906}, //LANGA Pizza Boy LS
	{2683.8926,-1683.9061,9.4250}, //LANGA 8 Track LS
	{2609.1416,-2393.7742,13.6271}, //LANGA Chop Shop LS
	{2158.9236,-1725.8071,13.5389}, //LANGA Crack House LS
	{2101.4238,2803.3069,10.8203}, //LANGA GAS LV ---- CHECKS LV
	{2116.0403,2189.2769,10.8203}, //LANGA Clothing Soter LV
	{2426.0283,2005.2286,10.8203}, //LANGA Burger Shot LV
	{2589.9490,1704.1989,10.8203}, //LANGA Pool LV
	{2029.4589,1418.5114,10.8203}, //LANGA Pirate Ship LV
	{1441.4424,1005.0969,10.8203}, //LANGA Chuckup LV
	{-1731.8619,-71.2586,3.5489}, //LANGA Ship SF ---- CHECKS SF
	{-1714.7142,352.0824,7.1875}, //LANGA GAS SF
	{-1647.4458,1291.6462,7.0391}, //LANGA Pier 69 SF
	{-2132.7087,769.0834,69.5625}, //LANGA Supa Save SF
	{-2468.7771,1231.8475,35.2001}, //LANGA Restaurant SF
	{-2184.9126,-409.3924,35.3359} //LANGA Homies SF
};
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// jail spawn
new Float:gRandomJailSpawns[3][3] = {
	{263.7989,85.8850,1001.0391},{264.0302,81.2118,1001.0391},{263.8704,77.0021,1001.0391}
};

// admin jail spawn
new Float:gRandomAJailSpawns[4][3] = {
	{215.5260,110.5124,1000.0156},{219.3602,109.9994,1000.0156},{223.3645,109.9972,1000.0156},{227.1875,110.2887,1000.0156}
};
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// rob checkpoints
new Float:gRandomRob[11][3] = {
	{2308.8533,-1715.0500,14.6496},{1921.6538,-1115.0759,27.0883},{351.7325,-1197.2733,76.5156},
	{1182.0050,-1068.1383,29.1936},{2435.2007,-1289.3853,25.3479},{2248.9714,961.5317,10.8130},
	{2787.9294,2222.7788,14.6615},{1597.7314,2093.5139,11.3125},{1029.9531,2028.0458,11.4683},
	{1609.4539,2789.3052,10.8203},{2594.5935,748.7582,11.0234}
};

// rob checkpoints (2)
new Float:gRandomRob2[10][3] = {
	{1695.5579,-2125.8223,13.8101},{2522.6125,-2018.8566,14.0744},{2751.7439,-1962.8811,13.5469},
	{2553.0874,-958.2475,82.6460},{166.8161,-1758.7646,6.7969},{2042.4943,732.5795,11.4609},
	{2581.5403,1060.6929,11.7309},{1435.2942,2548.9001,10.8203},{1029.7107,1847.9226,11.4683},
	{1706.7246,950.2996,10.8203}
};
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// rc map spawn (paintball)
new Float:gRandomSpawnRC[7][3] = {
	{-969.7932,1094.1221,1345.0070},{-976.3990,1022.5371,1345.0310},{-973.6447,1041.8181,1352.6875},
	{-1014.5994,1027.9786,1342.6187},{-1133.7423,1021.9453,1345.7335},{-1115.6410,1095.8212,1341.8438},
	{-1133.1267,1079.1073,1353.4480}
};
// tennis map spawn (paintball)
new Float:gRandomSpawnTennis[7][3] = {
	{-2754.8149,-245.1009,7.1875},{-2779.4072,-248.5145,7.1875},{-2779.9651,-265.2720,7.1875},
	{-2744.6108,-270.1563,7.1875},{-2718.3101,-252.3627,7.1875},{-2726.9282,-240.9186,7.1875},
	{-2716.3669,-269.9250,7.1875}
};
// farm map spawn (paintball)
new Float:gRandomSpawnFarm[7][3] = {
	{15.3401,2.1944,3.1172},{-59.7064,-32.2439,3.1172},{-102.5952,-29.0223,3.1172},
	{-111.9006,27.3635,3.1172},{-152.7778,49.3966,3.1172},{-205.3790,8.9561,3.1172},
	{-75.0158,9.1256,3.1172}
};
// lspd map spawn (paintball)
new Float:gRandomSpawnLSPD[7][3] = {
	{1499.7970,-1671.6659,14.0469},{1459.4235,-1699.1788,14.5469},{1491.1667,-1724.2849,13.5469},{1519.1375,-1741.3630,13.5469},
	{1501.7247,-1609.9181,14.0469},{1457.3564,-1623.7700,14.7891},{1483.3802,-1631.9480,14.1484}
};
// beach map spawn (paintball)
new Float:gRandomSpawnBeach[4][3] = {
	{-2324.0566,-1519.2183,1287.8210},{-2302.4229,-1537.2805,1287.8210},{-2280.4771,-1554.6760,1287.8210},{-2303.7014,-1572.7168,1289.4739}
};
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// job tow car deliver checkpoints
new Float:TowCarCk[14][3] = {
	{1209.6587,-1102.2660,25.1793},{1013.2002,-1022.8221,32.1016},{928.3862,-1081.9692,24.2891},
	{856.1053,-1364.4233,13.5469},{968.3508,-1710.0663,13.5546},{1017.6634,-917.3149,42.1797},
	{1268.3655,-1613.0262,13.5469},{1433.0844,-1843.8458,13.5469},{2051.3674,-2046.2601,13.5469},
	{2137.6187,-2173.9358,13.5544},{2215.5930,-2202.2126,13.5469},{2468.5393,-2078.4360,13.5469},
	{2699.9041,-1951.2253,13.5540},{2662.4050,-1593.9717,13.3006}
};
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// fuel var
new Gas[MAX_VEHICLES];
new Refueling[MAX_PLAYERS];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// vehicle name
new aVehicleNames[212][] =
{
	{"Landstalker"},{"Bravura"},{"Buffalo"},{"Linerunner"},{"Perrenial"},{"Sentinel"},{"Dumper"},{"Firetruck"},{"Trashmaster"},
	{"Stretch"},{"Manana"},{"Infernus"},{"Voodoo"},{"Pony"},{"Mule"},{"Cheetah"},{"Ambulance"},{"Leviathan"},{"Moonbeam"},{"Esperanto"},
	{"Taxi"},{"Washington"},{"Bobcat"},{"Mr Whoopee"},{"BF Injection"},{"Hunter"},{"Premier"},{"Enforcer"},{"Securicar"},{"Banshee"},
	{"Predator"},{"Bus"},{"Rhino"},{"Barracks"},{"Hotknife"},{"Trailer"},{"Previon"},{"Coach"},{"Cabbie"},{"Stallion"},{"Rumpo"},
	{"RC Bandit"},{"Romero"},{"Packer"},{"Monster"},{"Admiral"},{"Squalo"},{"Seasparrow"},{"Pizzaboy"},{"Tram"},{"Trailer"},{"Turismo"},{"Speeder"},
	{"Reefer"},{"Tropic"},{"Flatbed"},{"Yankee"},{"Caddy"},{"Solair"},{"Berkley's RC Van"},{"Skimmer"},{"PCJ-600"},{"Faggio"},{"Freeway"},
	{"RC Baron"},{"RC Raider"},{"Glendale"},{"Oceanic"},{"Sanchez"},{"Sparrow"},{"Patriot"},{"Quad"},{"Coastguard"},{"Dinghy"},{"Hermes"},
	{"Sabre"},{"Rustler"},{"ZR-350"},{"Walton"},{"Regina"},{"Comet"},{"BMX"},{"Burrito"},{"Camper"},{"Marquis"},{"Baggage"},{"Dozer"},{"Maverick"},
	{"News Chopper"},{"Rancher"},{"FBI Rancher"},{"Virgo"},{"Greenwood"},{"Jetmax"},{"Hotring"},{"Sandking"},{"Blista Compact"},{"Police Maverick"},
	{"Boxville"},{"Benson"},{"Mesa"},{"RC Goblin"},{"Hotring Racer A"},{"Hotring Racer B"},{"Bloodring Banger"},{"Rancher"},{"Super GT"},
	{"Elegant"},{"Journey"},{"Bike"},{"Mountain Bike"},{"Beagle"},{"Cropduster"},{"Stuntplane"},{"Tanker"},{"Road Train"},{"Nebula"},{"Majestic"},
	{"Buccaneer"},{"Shamal"},{"Hydra"},{"FCR-900"},{"NRG-500"},{"HPV-1000"},{"Cement Truck"},{"Tow Truck"},{"Fortune"},{"Cadrona"},{"FBI Truck"},
	{"Willard"},{"Forklift"},{"Tractor"},{"Combine"},{"Feltzer"},{"Remington"},{"Slamvan"},{"Blade"},{"Freight"},{"Streak"},{"Vortex"},{"Vincent"},
	{"Bullet"},{"Clover"},{"Sadler"},{"Firetruck"},{"Hustler"},{"Intruder"},{"Primo"},{"Cargobob"},{"Tampa"},{"Sunrise"},{"Merit"},{"Utility"},
	{"Nevada"},{"Yosemite"},{"Windsor"},{"Monster A"},{"Monster B"},{"Uranus"},{"Jester"},{"Sultan"},{"Stratum"},{"Elegy"},{"Raindance"},{"RC Tiger"},
	{"Flash"},{"Tahoma"},{"Savanna"},{"Bandito"},{"Freight"},{"Trailer"},{"Kart"},{"Mower"},{"Duneride"},{"Sweeper"},{"Broadway"},{"Tornado"},
	{"AT-400"},{"DFT-30"},{"Huntley"},{"Stafford"},{"BF-400"},{"Newsvan"},{"Tug"},{"Trailer"},{"Emperor"},{"Wayfarer"},{"Euros"},{"Hotdog"},
	{"Club"},{"Trailer"},{"Trailer"},{"Andromada"},{"Dodo"},{"RCCam"},{"Launch"},{"Police Car (LSPD)"},{"Police Car (SFPD)"},{"Police Car (LVPD)"},
	{"Police Ranger"},{"Picador"},{"S.W.A.T. Van"},{"Alpha"},{"Phoenix"},{"Glendale"},{"Sadler"},{"Luggage Trailer A"},{"Luggage Trailer B"},
	{"Stair Trailer"},{"Boxville"},{"Farm Plow"},{"Utility Trailer"}
};
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// server anno
new 	RandomMSG[][] = {
	"Forumul serverului Bluffs este in lucru.",
	"Puteti pune intrebari despre server pe /n.",
	"Foloseste /locations pentru a afla locatiile de pe server.",
	"Foloseste /jobs pentru a vedea job-urile disponibile.",
	"Pentru a afla detalii despre contul premium foloseste /premium.",
	"Daca ai probleme sau nelamuriri foloseste /report.",
	"Foloseste /carradio pentru a asculta radio in masina.",
	"Daca ai 10/10 Rob Points poti jefui banca(/rob).",
	"Afacerile cu bani reali sunt interzise. Cei ce-s prinsi ca incearca sa faca afaceri cu bani reali vor primi ban permanent.",
	"Pentru a vedea teritoriile mafiilor foloseste /turfs."
};

new 	RandomMSGENG[][] = {
	"Our forum is in working.",
	"If you have any questions, use /n.",
	"Use /locations to find locations on the server.",
	"Use /jobs to see available jobs.",
	"To learn more about using premium account use /premium.",
	"If you have any problems, use /report.",
	"Use /carradio to listen to radio in the car.",
	"If you have 10/10 Rob Points you can rob the bank(/rob).",
	"Businesses with real money are prohibited. Those who were caught trying to do business with real money will get permanent ban.",
	"Use /turfs to view the gang zones."
};
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

enum beforeSpectateInfo
{
 	Float: pOldPos[3],pWorld,pInt,pState,pInVehicle,bool: pSpectating
};
new BeforeSpectate[MAX_PLAYERS][beforeSpectateInfo];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// gang turfs (war)
enum zInfo
{
    zID,
    zOwned,
    Float:zMinX,
    Float:zMinY,
    Float:zMaxX,
    Float:zMaxY
};
new TurfInfo[50][zInfo],
	Turfs[50];
enum wInfo
{
    wFaction,
	wAttacker,
	wTime,
};
new WarInfo[sizeof(TurfInfo)][wInfo],
	WarScoreF[16][sizeof(TurfInfo)],
	ucideri[MAX_PLAYERS][sizeof(TurfInfo)],
	decese[MAX_PLAYERS][sizeof(TurfInfo)],
	worstscoreat[sizeof(TurfInfo)],
	worstmemberat[sizeof(TurfInfo)],
	worstscoredf[sizeof(TurfInfo)],
	worstmemberdf[sizeof(TurfInfo)],
	bestscoreat[sizeof(TurfInfo)],
	bestmemberat[sizeof(TurfInfo)],
	bestscoredf[sizeof(TurfInfo)],
	bestmemberdf[sizeof(TurfInfo)],
	DeelayWar[16],
	InWar[16];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// spectate
enum pSpec
{
	Float:Coords[3],
	Float:sPx,
	Float:sPy,
	Float:sPz,
	sPint,
	sLocal,
	sCam,
};
new Unspec[MAX_PLAYERS][pSpec];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// clans
enum clanE
{
    cClanName[64],cClanMOTD[128],cClanRankName1[32],cClanRankName2[32],cClanRankName3[32],cClanRankName4[32],cClanRankName5[32],cClanSeif,
	cClanRankName6[32],cClanRankName7[32],cClanTag[32],cClanTagType,cClanID,cClanExpire,cClanActive,cClanSlots,cClanColor[10],cCar[MAX_CLAN_VEHICLES],cCarID[MAX_CLAN_VEHICLES],cCarModel[MAX_CLAN_VEHICLES],Float:cCarLocX[MAX_CLAN_VEHICLES],
	Float:cCarLocY[MAX_CLAN_VEHICLES],Float:cCarLocZ[MAX_CLAN_VEHICLES],Float:cCarAngle[MAX_CLAN_VEHICLES],
	cCarColor1[MAX_CLAN_VEHICLES],cCarColor2[MAX_CLAN_VEHICLES],cCarLock[MAX_CLAN_VEHICLES],
};
new ClanInfo[MAX_CLANS][clanE];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// accounts
enum pInfo
{
	pKey[129],pColors,pNormalName[30],pLevel,pAdmin,pHelper,pSupport,pPremiumAccount,pPremiumPoints,pPhoneBlocked[MAX_PLAYERS],
	pBlockedAcc,pFoundObject[MAX_EVOBJECTS],pObject[MAX_EVOBJECTS],pMapIcon[MAX_EVOBJECTS],Float:pConnectTime,pReg,pSex,pAge,pOrigin,
	pMuted,pMuteTime,pGasCan,pExp,pCash,pAccount,pCrimes,pKills,pDeaths,pArrested,pWantedDeaths,pPhoneBook,pReportMuted,pPhone,pWantedLevel,
 	pSelected[MAX_PLAYER_NAME],pFishes,pJob,pPayCheck,pHeadValue,pJailed,pJailTime,pMats,pDrugs,pLeader,pMember,pRank,pGlasses,pHats,pFACWarns,
	pFpunish,pFishSkill,pFlyMode,pSpawnChange,pFishPrice,pInt,pLocal,pTeam,pModel,pPnumber,pPhousekey,pPbiskey,Float:pPos_x,Float:pPos_y,
	Float:pPos_z,pCarLicSuspend,pGunLicSuspend,pCarLicT,pCarLic,pFlyLicT,pFlyLic,pBoatLicT,pBoatLic,pGunLicT,pGunLic,pPayDay,pRobSkill,
 	pRobTimes,pRobRem,pTruckSkill,pTruckTimes,pTruckRem,pFarmSkill,pFarmTimes,pFarmRem,pPizzaSkill,pPizzaTimes,pPizzaRem,pArmsSkill,pArmsTimes,
	pArmsRem,pBusSkill,pBusTimes,pBusRem,pFishTimes,pFishRem,pGarbageSkill,pGarbageTimes,pGarbageRem,pRob,pTut,pWarns,pLanguage,pFuel,
    pSleeping, pRented,pSpeaker,pWTalkie,pEmail[200],pClanTag,pClan,pHitT,pCRank,pCWarns,pSQLID,pVictim[64],pAccused[64],pCrime1[184],
	pCrime2[184],pCrime3[184],pSerial[128],pNewbieEnabled,pFirstAnswer,pNewbieQuestion[256],pNMuted,pNewbieTimeout,pStatus,pFWorks,pVirtualPD,
	pFactionJoin,pFactionTime,pCredits,pHost[25],pOneHost,pHiddenColor,pHelpedplayers,pGiftTime,pFightStyle,pAsteapta,pHUD1,pHUD2,pHUD3,pFPS,pDrunkLevelLast,pClanDep,pJobVehicle,
	pRaceG,pPaintBallG,pPaintBallKills,pPaintBallVoted,pPaintBallVoted2,pRaceVoted,pNextNotification,pPaydayON,pSession,pCarSlots,
	pCar[MAX_PERSONAL_VEHICLES],pCarID[MAX_PERSONAL_VEHICLES],pCarModel[MAX_PERSONAL_VEHICLES],Float:pCarLocX[MAX_PERSONAL_VEHICLES],
	Float:pCarLocY[MAX_PERSONAL_VEHICLES],Float:pCarLocZ[MAX_PERSONAL_VEHICLES],Float:pCarAngle[MAX_PERSONAL_VEHICLES],
	Float:pCarLLocX[MAX_PERSONAL_VEHICLES],Float:pCarLLocY[MAX_PERSONAL_VEHICLES],Float:pCarLLocZ[MAX_PERSONAL_VEHICLES],
	Float:pCarAngle2[MAX_PERSONAL_VEHICLES],pCarBuyTime[MAX_PERSONAL_VEHICLES],pCarColor1[MAX_PERSONAL_VEHICLES],pCarColor2[MAX_PERSONAL_VEHICLES],
	pCarLock[MAX_PERSONAL_VEHICLES],pCarInsPrice[MAX_PERSONAL_VEHICLES],pCarIns[MAX_PERSONAL_VEHICLES],Float:pCarKM[MAX_PERSONAL_VEHICLES],
	pCarKMLast[MAX_PERSONAL_VEHICLES],Float:pCarHP[MAX_PERSONAL_VEHICLES],pCarVIP[MAX_PERSONAL_VEHICLES],pCarVipColors[MAX_PERSONAL_VEHICLES],
	pCarDamage1[MAX_PERSONAL_VEHICLES],pCarDamage2[MAX_PERSONAL_VEHICLES],pCarDamage3[MAX_PERSONAL_VEHICLES],pCarDamage4[MAX_PERSONAL_VEHICLES],
	pCarGas[MAX_PERSONAL_VEHICLES],pCarPaintJ[MAX_PERSONAL_VEHICLES],pCarBlock[MAX_PERSONAL_VEHICLES],pQuest1,pQuest2,pQuestProgress1,
	pQuestProgress2,pQuestNeed1,pQuestNeed2,pQuestCar,Raport1,Raport2,Raport3,Raport4,Raport5,Raport6
};
new PlayerInfo[MAX_PLAYERS][pInfo];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// houses
enum hInfo
{
	hID,Float:hEntrancex,Float:hEntrancey,Float:hEntrancez,Float:hExitx,Float:hExity,Float:hExitz,hOwner[25],
	hDiscription[64],hValue,hPrice,hHel,hMusic,hInterior,hInteriorType,hLock,hOwned,hRent,hRentabil,hTakings,hLevel,hVirtual
};
new HouseInfo[120][hInfo],
	Text3D:HouseLabel[sizeof(HouseInfo)],
	HousePickup[200];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// vehicles (jobs, server, factions)
enum vehInfo
{
	vehModel,vehColor1,vehColor2,vehGroup,vehRank,vehJob,vehCarID,vehCarIDD,Float:vehPosX,Float:vehPosY,Float:vehPosZ,Float:vehRotation
};
new VehicleInfo[1000][vehInfo];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// atms
enum atmInfo
{
	Float: fATMPos[3],Float: fATMPosRot[3],rObjectId
};
new AtmInfo[MAX_ATMS][atmInfo];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// svar
enum svarInfo
{
	svName[32],svValue
};
new SvarInfo[MAX_SVARS][svarInfo];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// quest objects
enum objInfo
{
	objID,objModel,Float:objPosX,Float:objPosY,Float:objPosZ
};
new ObjectInfo[MAX_EVOBJECTS][objInfo];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// bussines
enum bInfo
{
	bID,bOwned,bOwner[25],bMessage[50],Float:bEntranceX,Float:bEntranceY,Float:bEntranceZ,Float:bExitX,Float:bExitY,Float:bExitZ,
	bLevelNeeded,bBuyPrice,bPrice,bEntranceCost,bTill,bLocked,bInterior,bVirtual,bSbiz,bType
};
new BizzInfo[100][bInfo],
	Text3D:BizzLabel[sizeof(BizzInfo)];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// tunning
new spoiler[20][0] = {
	{1000},{1001},{1002},{1003},{1014},{1015},{1016},{1023},{1058},{1060},{1049},
	{1050},{1138},{1139},{1146},{1147},{1158},{1162},{1163},{1164}
};

new nitro[3][0] = {
	{1008},{1009},{1010}
};

new fbumper[23][0] = {
	{1117},{1152},{1153},{1155},{1157},{1160},{1165},{1167},{1169},{1170},
	{1171},{1172},{1173},{1174},{1175},{1179},{1181},{1182},{1185},{1188},
	{1189},{1192},{1193}
};

new rbumper[22][0] = {
	{1140},{1141},{1148},{1149},{1150},{1151},{1154},{1156},{1159},{1161},{1166},{1168},
	{1176},{1177},{1178},{1180},{1183},{1184},{1186},{1187},{1190},{1191}
};

new exhaust[28][0] = {
	{1018},{1019},{1020},{1021},{1022},{1028},{1029},{1037},{1043},{1044},{1045},{1046},
	{1059},{1064},{1065},{1066},{1089},{1092},{1104},{1105},{1113},{1114},{1126},{1127},
	{1129},{1132},{1135},{1136}
};

new bventr[2][0] = {
	{1142},{1144}
};

new bventl[2][0] = {
	{1143},{1145}
};

new bscoop[4][0] = {
	{1004},{1005},{1011},{1012}
};

new rscoop[17][0] = {
	{1006},{1032},{1033},{1035},{1038},{1053},{1054},{1055},{1061},{1067},{1068},{1088},
	{1091},{1103},{1128},{1130},{1131}
};

new lskirt[21][0] = {
	{1007},{1026},{1031},{1036},{1039},{1042},{1047},{1048},{1056},{1057},
	{1069},{1070},{1090},{1093},{1106},{1108},{1118},{1119},{1133},{1122},{1134}
};

new rskirt[21][0] = {
	{1017},{1027},{1030},{1040},{1041},{1051},{1052},{1062},{1063},{1071},{1072},
	{1094},{1095},{1099},{1101},{1102},{1107},{1120},{1121},{1124},{1137}
};

new hydraulics[1][0] = {
	{1087}
};

new vbase[1][0] = {
	{1086}
};

new rbbars[4][0] = {
	{1109},{1110},{1123},{1125}
};

new fbbars[2][0] = {
	{1115},{1116}
};

new wheels[17][0] = {
	{1025},{1073},{1074},{1075},{1076},{1077},{1078},{1079},{1080},{1081},{1082},
	{1083},{1084},{1085},{1096},{1097},{1098}
};

new vlights[2][0] = {
	{1013},{1024}
};
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// dealership
enum vInfo
{
	vID,vStock,vPrice,vModel,vSpeed,vName[255]
};
new Stock[106][vInfo];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// factions
enum Factions
{
	fID,fName[128],Float:fcX,Float:fcY,Float:fcZ,Float:fceX,Float:fceY,Float:fceZ,Float:fSafePos[3],fSafePickupID,
	Text3D:fSafeLabelID,fMats,fDrugs,fBank,fAnn[128],fWin,fLost,fMembers,fMaxMembers,fMinLevel,fApplication,
	fInterior,fVirtual,fMapIcon,fLocked,fPickupID,fPickupIDD,Text3D:fLabelID,fRankName1[64],fRankName2[64],
	fRankName3[64],fRankName4[64],fRankName5[64],fRankName6[64],fRankName7[64]
};
new DynamicFactions[15][Factions],
	FactionSkin[15][11];
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// gun names
new GunNames[55][] =
{
	"Punch","Brass Knuckles","Golf Club","Nitestick","Knife","Baseball Bat","Showel","Pool Cue","Katana","Chainsaw",
	"Purple Dildo","Small White Dildo","Long White Dildo","Vibrator","Flowers","Cane","Grenade","Tear Gas Grenade",
	"Molotov","Vehicle Missile","Hydra Flare","Jetpack","Colt .45","Silenced Colt .45","Desert Eagle","Shotgun",
	"Sawn-off","Combat Shotgun","Micro UZI","MP5","AK-47","M4A1","Tec-9","Rifle","Sniper Rifle","Rocket Launcher",
	"HS Rocket Launcher","Flamethrower","Minigun","Satchel Charge","Detonator","Spraycan","Fire Extinguisher","Camera",
	"Nightvision Goggles","Thermal Goggles","Parachute","Fake Pistol","","Vehicle","Helicopter","Explosion","","Drowned","Splat"
};
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

new Peds[153][1] = {
{1},{2},{6},{8},{9},{10},{12},{13},{14},{15},{16},{18},{19},{20},{21},{22},{23},{24},{25},{27},{28},{29},{30},{31},{32},{33},{34},{35},{36},{37},{38},{39},{40},{41},{42},{43},{44},{45},{47},{48},{49},{50},{51},{52},{53},{54},{56},{57},{58},{60},
{62},{63},{64},{65},{66},{67},{68},{69},{75},{77},{78},{79},{80},{81},{85},{87},{88},{89},{91},{92},{94},{95},{96},{97},{99},{101},{129},{130},{131},{132},{133},{134},{135},{136},{137},{138},{139},{140},{142},{143},{145},{146},{151},{152},{154},
{156},{157},{158},{159},{160},{161},{162},{168},{170},{178},{179},{180},{182},{183},{192},{193},{196},{197},{198},{199},{200},{201},{202},{205},{207},{209},{210},{212},{213},{214},{215},{216},{229},{230},{231},{232},{233},{234},{235},{236},{237},
{238},{239},{243},{244},{245},{246},{249},{250},{251},{252},{256},{257},{260},{262},{263},{268},{298}
};




enum objects_attach_Info {
	objID,
	objModel,
	objType,	
	objMoney,
	objPremium,
	objBone,
	Float: objfOffsetX, 
	Float: objfOffsetY, 
	Float: objfOffsetZ, 
	Float: objfRotX, 
	Float: objfRotY, 
	Float: objfRotZ
};

enum attached_object_data
{
    ao_model,
    ao_bone,
    Float:ao_x,
    Float:ao_y,
    Float:ao_z,
    Float:ao_rx,
    Float:ao_ry,
    Float:ao_rz,
    Float:ao_sx,
    Float:ao_sy,
    Float:ao_sz
}
new ao[MAX_PLAYERS][MAX_PLAYER_ATTACHED_OBJECTS][attached_object_data];

enum player_object_Info {
	aID[MAX_PLAYER_ATTACHED_OBJECTS],
	aModel[MAX_PLAYER_ATTACHED_OBJECTS],
	aBone[MAX_PLAYER_ATTACHED_OBJECTS],
	aStatus[MAX_PLAYER_ATTACHED_OBJECTS],
	Float: aIndex0[6],
	Float: aIndex1[6],
	Float: aIndex2[6],
	Float: aIndex3[6],
	Float: aIndex4[6],
	Float: aIndex5[6],
	Float: aIndex6[6],
	Float: aIndex7[6],
	Float: aIndex8[6],
	Float: aIndex9[6]
};

new
	total_objects,
	objectInfo[MAX_AOBJECTS][objects_attach_Info],
	attachInfo[MAX_PLAYERS][player_object_Info],
	ObjectSlot[MAX_PLAYERS][100],
	ObjectID[MAX_PLAYERS],
	ObjectType[MAX_PLAYERS],
	Text: AccsTD[13],
	PlayerText: AccsPTD[3];