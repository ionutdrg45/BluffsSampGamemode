// player update in database
public Update(playerid, type)
{
	if(IsPlayerConnected(playerid))
	{
		new var[356];
		{
			switch(type)
			{
				case pCashx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Money`='%d' WHERE `name`='%s'",GetPlayerCash(playerid), PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pExpx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Respect`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pExp], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pBank:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Bank`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pAccount], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pCarLicTx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `CarLicT`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pCarLicT], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pCarLicSuspendx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `CarLicSuspend`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pCarLicSuspend], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pGunLicSuspendx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `GunLicSuspend`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pGunLicSuspend], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pFlyLicTx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `FlyLicT`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pFlyLicT], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pBoatLicTx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `BoatLicT`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pBoatLicT], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pGunLicTx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `GunLicT`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pGunLicT], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pRobx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Rob`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pRob], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pFpunishx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `FPunish`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pFpunish], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pConnectTimex:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `ConnectedTime`='%f' WHERE `name`='%s'",PlayerInfo[playerid][pConnectTime], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pPayDayx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `PayDay`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pPayDay], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pPayCheckx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Paycheck`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pPayCheck], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pPhousekeyx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `House`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pPhousekey], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pJailedx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Jailed`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pJailed], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pJailTimex:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `JailTime`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pJailTime], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pWantedLevelx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `WantedLevel`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pWantedLevel], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pPhonex:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Phone`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pPhone], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pMatsx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Materials`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pMats], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pFishesx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Fishes`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pFishes], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pFishSkillx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `FishSkill`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pFishSkill], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pGarbageSkillx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `GarbageSkill`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pGarbageSkill], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pGarbageTimesx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `GarbageTimes`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pGarbageTimes], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pGarbageRemx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `GarbageRem`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pGarbageRem], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pSpawnChangex:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `SpawnChange`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pSpawnChange], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pRobSkillx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `RobSkill`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pRobSkill], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pTruckSkillx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `TruckSkill`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pTruckSkill], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pTruckTimesx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `TruckTimes`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pTruckTimes], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pTruckRemx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `TruckRem`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pTruckRem], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pPizzaSkillx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `PizzaSkill`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pPizzaSkill], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pPizzaTimesx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `PizzaTimes`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pPizzaTimes], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pPizzaRemx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `PizzaRem`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pPizzaRem], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pArmsSkillx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `ArmsSkill`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pArmsSkill], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pArmsTimesx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `ArmsTimes`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pArmsTimes], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pArmsRemx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `ArmsRem`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pArmsRem], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pBusSkillx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `BusSkill`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pBusSkill], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pBusTimesx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `BusTimes`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pBusTimes], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pBusRemx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `BusRem`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pBusRem], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pFarmSkillx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `FarmSkill`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pFarmSkill], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pFarmTimesx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `FarmTimes`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pFarmTimes], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pFarmRemx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `FarmRem`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pFarmRem], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pFishTimesx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `FishTimes`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pFishTimes], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pFishRemx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `FishRem`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pFishRem], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pRobRemx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `RobRem`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pRobRem], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pRobTimesx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `RobTimes`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pRobTimes], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pLevelx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Level`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pLevel], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pPremiumAccountx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Premium`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pPremiumAccount], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pOnlineTimeTodayx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `OnlineTimeToday`='%d'  WHERE `name`='%s'", OnlineTimeToday[playerid], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pQuest1x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Quest1`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pQuest1], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pQuest2x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Quest2`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pQuest2], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pQuestProgress1x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `QuestProgress1`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pQuestProgress1], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pQuestProgress2x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `QuestProgress2`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pQuestProgress2], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pQuestNeed1x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `QuestNeed1`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pQuestNeed1], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pQuestNeed2x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `QuestNeed2`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pQuestNeed2], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pQuestCarx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `QuestCar`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pQuestCar], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pPaydayONx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `PaydayON`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pPaydayON], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pGasCanx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `GasCan`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pGasCan], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pPremiumPointsx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `PremiumPoints`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pPremiumPoints], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}	
				case pReportMutedx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `ReportMuted`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pReportMuted], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pPbiskeyx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Bizz`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pPbiskey], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pPnumberx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `PhoneNr`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pPnumber], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pRegx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Registered`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pReg], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pColorsx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Color`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pColors], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pRentedx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Rented`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pRented], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pCrimesx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Crimes`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pCrimes], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pCrime1x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Crime1`='%s' WHERE `name`='%s'",PlayerInfo[playerid][pCrime1], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pCrime2x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Crime2`='%s' WHERE `name`='%s'",PlayerInfo[playerid][pCrime2], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pCrime3x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Crime3`='%s' WHERE `name`='%s'",PlayerInfo[playerid][pCrime3], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pVictimx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Victim`='%s' WHERE `name`='%s'",PlayerInfo[playerid][pVictim], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pAccusedx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Accused`='%s' WHERE `name`='%s'",PlayerInfo[playerid][pAccused], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pFWorksx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `FWorks`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pFWorks], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pEmailx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Email`='%s' WHERE `name`='%s'",PlayerInfo[playerid][pEmail], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pWarnsx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Warnings`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pWarns], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pLanguagex:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Language`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pLanguage], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pVirtualPDx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `VirtualPD`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pVirtualPD], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pGlassesx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Glasses`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pGlasses], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pHatsx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Hats`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pHats], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pFactionJoinx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `FactionJoin`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pFactionJoin], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pCreditsx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `CreditsF`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pCredits], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pNMutedx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `NMuted`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pNMuted], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pHiddenColorx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `HiddenColor`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pHiddenColor], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pGiftTimex:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `GiftTime`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pGiftTime], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pFightStylex:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `FightStyle`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pFightStyle], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pHUD1x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `HUD1`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pHUD1], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pHUD2x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `HUD2`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pHUD2], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pHUD3x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `HUD3`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pHUD3], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pSessionx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Session`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pSession], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pHelpedplayersx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `HelpedPlayers`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pHelpedplayers], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case Raport1x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Raport1`='%d' WHERE `name`='%s'",PlayerInfo[playerid][Raport1], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case Raport2x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Raport2`='%d' WHERE `name`='%s'",PlayerInfo[playerid][Raport2], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case Raport3x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Raport3`='%d' WHERE `name`='%s'",PlayerInfo[playerid][Raport3], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case Raport4x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Raport4`='%d' WHERE `name`='%s'",PlayerInfo[playerid][Raport4], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case Raport5x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Raport5`='%d' WHERE `name`='%s'",PlayerInfo[playerid][Raport5], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case Raport6x:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `Raport6`='%d' WHERE `name`='%s'",PlayerInfo[playerid][Raport6], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
				case pClanDepx:
				{
					mysql_format(SQL, var, sizeof(var), "UPDATE `users` SET `ClanDep`='%d' WHERE `name`='%s'",PlayerInfo[playerid][pClanDep], PlayerInfo[playerid][pNormalName]);
					mysql_tquery(SQL,var,"","");
				}
			}
		}
	}
	return 1;
}
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/
public ClanUpdate(clanid, type)
{
	new var[356];
	switch(type)
	{
		case ClanSafex:
		{
			mysql_format(SQL, var, sizeof(var), "UPDATE `clans` SET `clanSeif`='%d' WHERE `clanID`='%d'",ClanInfo[clanid][cClanSeif], clanid);
			mysql_tquery(SQL,var,"","");
		}
	}
	return 1;
}

// daily quests
public FinishQuest1(playerid, questid)
{
	new quest1[128],quest[256],money,giftpoint;
	if(PlayerInfo[playerid][pLanguage] == 1)
	{
		if(questid == 1)  format(quest1,sizeof(quest1),"Go to the baseball stadium located in Las Venturas");
		else if(questid == 2)  format(quest1,sizeof(quest1),"Climb mount Chiliad");
		else if(questid == 3)  format(quest1,sizeof(quest1),"Travel %d KM with vehicle %s",PlayerInfo[playerid][pQuestNeed1],aVehicleNames[PlayerInfo[playerid][pQuestCar] - 400]);
		else if(questid == 4)  format(quest1,sizeof(quest1),"Rob a business");
		else if(questid == 5)  format(quest1,sizeof(quest1),"Collect %d materials",PlayerInfo[playerid][pQuestNeed1]);
		else if(questid == 6)  format(quest1,sizeof(quest1),"Catch and sell %d fish",PlayerInfo[playerid][pQuestNeed1]);
		format(quest, sizeof(quest),"Quest [%s] completed!",quest1);
		SendClientMessage(playerid, COLOR_YELLOW, quest);
		money = PlayerInfo[playerid][pLevel] * (5000 + random(3000));
		GivePlayerCash(playerid, money);
		PlayerInfo[playerid][pExp]++;
		PlayerInfo[playerid][pPremiumPoints]+=2;
		giftpoint = 20 + random(5);
		PlayerInfo[playerid][pGiftTime] += giftpoint;
		Update(playerid, pGiftTimex);
		Update(playerid, pPremiumPointsx);
		Update(playerid, pCashx);
		Update(playerid, pExpx);
		format(quest, sizeof(quest),"You received a respect point, 2 premium points, %d gift points and $%s.",giftpoint,FormatNumber(money));
		SendClientMessage(playerid, COLOR_YELLOW, quest);
	}
	else
	{
		if(questid == 1)  format(quest1,sizeof(quest1),"Mergi pe stadionul de baseball din Las Venturas");
		else if(questid == 2)  format(quest1,sizeof(quest1),"Urca pe muntele Chiliad");
		else if(questid == 3)  format(quest1,sizeof(quest1),"Parcurge distanta de %d KM cu un vehicul de tipul %s",PlayerInfo[playerid][pQuestNeed1],aVehicleNames[PlayerInfo[playerid][pQuestCar] - 400]);
		else if(questid == 4)  format(quest1,sizeof(quest1),"Jefuieste o afacere");
		else if(questid == 5)  format(quest1,sizeof(quest1),"Colecteaza %d materiale",PlayerInfo[playerid][pQuestNeed1]);
		else if(questid == 6)  format(quest1,sizeof(quest1),"Vinde %d pesti",PlayerInfo[playerid][pQuestNeed1]);
		format(quest, sizeof(quest),"Misiunea [%s] a fost terminata!",quest1);
		SendClientMessage(playerid, COLOR_YELLOW, quest);
		money = PlayerInfo[playerid][pLevel] * (5000 + random(3000));
		GivePlayerCash(playerid, money);
		PlayerInfo[playerid][pExp]++;
		PlayerInfo[playerid][pPremiumPoints]+=2;
		giftpoint = 20 + random(5);
		PlayerInfo[playerid][pGiftTime] += giftpoint;
		Update(playerid, pGiftTimex);
		Update(playerid, pPremiumPointsx);
		Update(playerid, pCashx);
		Update(playerid, pExpx);
		format(quest, sizeof(quest),"You received a respect point, 2 premium points, %d gift points and $%s.",giftpoint,FormatNumber(money));
		SendClientMessage(playerid, COLOR_YELLOW, quest);
	}
	return 1;
}

public FinishQuest2(playerid, questid)
{
	new quest2[128],quest[256],money,giftpoint;
	if(PlayerInfo[playerid][pLanguage] == 1)
	{
		if(questid == 1)  format(quest2,sizeof(quest2),"Deliver %d pizza",PlayerInfo[playerid][pQuestNeed2]);
		else if(questid == 2)
		{
			if(!IsACop(playerid))
			{
				format(quest2,sizeof(quest2),"Kill %d cops",PlayerInfo[playerid][pQuestNeed2]);
			}
			else
			{
				format(quest2,sizeof(quest2),"Arrest %d suspects",PlayerInfo[playerid][pQuestNeed2]);
			}
		}
		else if(questid == 3)  format(quest2,sizeof(quest2),"Kill %d players at paintball",PlayerInfo[playerid][pQuestNeed2]);
		else if(questid == 4)  format(quest2,sizeof(quest2),"Collect and unload %d KG of garbage",PlayerInfo[playerid][pQuestNeed2]);
		else if(questid == 5)  format(quest2,sizeof(quest2),"Sell %d KG of flour",PlayerInfo[playerid][pQuestNeed2]);
		else if(questid == 6)  format(quest2,sizeof(quest2),"Buy drugs and use them");
		else if(questid == 7)  format(quest2,sizeof(quest2),"Go in a bar and get drunk");
		format(quest, sizeof(quest),"Quest [%s] completed!",quest2);
		SendClientMessage(playerid, COLOR_YELLOW, quest);
		money = PlayerInfo[playerid][pLevel] * (5000 + random(3000));
		GivePlayerCash(playerid, money);
		PlayerInfo[playerid][pExp]++;
		PlayerInfo[playerid][pPremiumPoints]+=2;
		giftpoint = 20 + random(5);
		PlayerInfo[playerid][pGiftTime] += giftpoint;
		Update(playerid, pGiftTimex);
		Update(playerid, pPremiumPointsx);
		Update(playerid, pCashx);
		Update(playerid, pExpx);
		format(quest, sizeof(quest),"You received a respect point, 2 premium points, %d gift points and $%s.",giftpoint,FormatNumber(money));
		SendClientMessage(playerid, COLOR_YELLOW, quest);
	}
	else
	{
		if(questid == 1)  format(quest2,sizeof(quest2),"Livreaza %d pizza",PlayerInfo[playerid][pQuestNeed2]);
		else if(questid == 2)
		{
			if(!IsACop(playerid))
			{
				format(quest2,sizeof(quest2),"Omoara %d politisti",PlayerInfo[playerid][pQuestNeed2]);
			}
			else
			{
				format(quest2,sizeof(quest2),"Aresteaza %d suspecti",PlayerInfo[playerid][pQuestNeed2]);
			}
		}
		else if(questid == 3)  format(quest2,sizeof(quest2),"Omoara %d playeri la Paintball",PlayerInfo[playerid][pQuestNeed2]);
		else if(questid == 4)  format(quest2,sizeof(quest2),"Colecteaza si descarca %d KG de gunoi",PlayerInfo[playerid][pQuestNeed2]);
		else if(questid == 5)  format(quest2,sizeof(quest2),"Vinde %d KG de faina",PlayerInfo[playerid][pQuestNeed2]);
		else if(questid == 6)  format(quest2,sizeof(quest2),"Cumpara droguri si foloseste-le");
		else if(questid == 7)  format(quest2,sizeof(quest2),"Du-te intr-un bar si imbata-te");
		format(quest, sizeof(quest),"Misiunea [%s] a fost terminata!",quest2);
		SendClientMessage(playerid, COLOR_YELLOW, quest);
		money = PlayerInfo[playerid][pLevel] * (5000 + random(3000));
		GivePlayerCash(playerid, money);
		PlayerInfo[playerid][pExp]++;
		PlayerInfo[playerid][pPremiumPoints]+=2;
		giftpoint = 20 + random(5);
		PlayerInfo[playerid][pGiftTime] += giftpoint;
		Update(playerid, pGiftTimex);
		Update(playerid, pPremiumPointsx);
		Update(playerid, pCashx);
		Update(playerid, pExpx);
		format(quest, sizeof(quest),"You received a respect point, 2 premium points, %d gift points and $%s.",giftpoint,FormatNumber(money));
		SendClientMessage(playerid, COLOR_YELLOW, quest);
	}
	return 1;
}
/*----------------------------------------------------------------------------------------------------------------------------------------------------*/

// blackjack
public BlackJackFunction(playerid, card)
{
	if(BlackJackPlayerCards[playerid] + 1 > 5) return SS(playerid, COLOR_WHITE, "Nu poti pune mai mult de 5 carti la masa!", "You can't have more than 5 cards on table!");
	for(new c; c < card; c++)
	{
		if(BlackJackStand[playerid]==0) {
			new rand = random(85), numb;
			if(rand >= 0 && rand <= 5) numb = 1;
			else if(rand >= 6 && rand <= 12) numb = 2;
			else if(rand >= 13 && rand <= 20) numb = 3;
			else if(rand >= 21 && rand <= 30) numb = 4;
			else if(rand >= 31 && rand <= 38) numb = 5;
			else if(rand >= 39 && rand <= 45) numb = 6;
			else if(rand >= 46 && rand <= 55) numb = 7;
			else if(rand >= 56 && rand <= 59) numb = 8;
			else if(rand >= 60 && rand <= 66) numb = 9;
			else if(rand >= 67 && rand <= 72) numb = 10;
			else if(rand >= 73 && rand <= 75) numb = 12;
			else if(rand >= 76 && rand <= 79) numb = 13;
			else if(rand >= 80) numb = 14;

			BlackJackPlayerCard[playerid][BlackJackPlayerCards[playerid]] = numb;
			BlackJackPlayerScore[playerid] += numb;

			BlackJackPlayerCards[playerid]++;
		}
	}
	for(new c; c < card; c++)
	{
		if(BDealerScore[playerid]<16) {
			new rand = random(85), numb;
			if(rand >= 0 && rand <= 5) numb = 1;
			else if(rand >= 6 && rand <= 12) numb = 2;
			else if(rand >= 13 && rand <= 20) numb = 3;
			else if(rand >= 21 && rand <= 30) numb = 4;
			else if(rand >= 31 && rand <= 38) numb = 5;
			else if(rand >= 39 && rand <= 45) numb = 6;
			else if(rand >= 46 && rand <= 55) numb = 7;
			else if(rand >= 56 && rand <= 59) numb = 8;
			else if(rand >= 60 && rand <= 66) numb = 9;
			else if(rand >= 67 && rand <= 72) numb = 10;
			else if(rand >= 73 && rand <= 75) numb = 12;
			else if(rand >= 76 && rand <= 79) numb = 13;
			else if(rand >= 80) numb = 14;

			BDealerCard[playerid][BDealerCards[playerid]] = numb;
			BDealerScore[playerid] += numb;
			BDealerCards[playerid]++;
		}
	}
	new text[256],var100[256],string2[256];
	if(BlackJackPlayerScore[playerid] > 21)
	{
		format(text, sizeof(text), "** %s lost $%s at Black Jack (scored more than 21) **.", GetName(playerid), FormatNumber(BDeal[playerid]));
		ProxDetector(40.0, playerid, text, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE);
		CloseBMatch[playerid] = 1;
		PlayerTextDrawShow(playerid, BJreset[playerid]);
		mysql_real_escape_string(text, string2);
		mysql_format(SQL, var100, sizeof(var100), "INSERT INTO playerlogs (`playerid`,`giverid`,`action`) VALUES ('%d','0','%s')", PlayerInfo[playerid][pSQLID],string2);
		mysql_tquery(SQL,var100,"","");
	}
	else if(BDealerScore[playerid] > 21)
	{
		GivePlayerCash(playerid, BDeal[playerid]*2);
		Update(playerid, pCashx);
		format(text, sizeof(text), "** %s win $%s at Black Jack (dealer scored more than 21) **.", GetName(playerid), FormatNumber(BDeal[playerid]*2));
		ProxDetector(40.0, playerid, text, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE);
		PlayerPlaySound(playerid, 4201, 0.0, 0.0, 0.0);
		CloseBMatch[playerid] = 1;
		PlayerTextDrawShow(playerid, BJreset[playerid]);
		mysql_real_escape_string(text, string2);
		mysql_format(SQL, var100, sizeof(var100), "INSERT INTO playerlogs (`playerid`,`giverid`,`action`) VALUES ('%d','0','%s')", PlayerInfo[playerid][pSQLID],string2);
		mysql_tquery(SQL,var100,"","");
	}
	else if(BlackJackPlayerScore[playerid] == BDealerScore[playerid]  && BlackJackActions[playerid]>=2)
	{
		GivePlayerCash(playerid, BDeal[playerid]);
		Update(playerid, pCashx);
		format(text, sizeof(text), "** %s scored egal at Black Jack (player  %d - dealer %d) **.", GetName(playerid),BlackJackPlayerScore[playerid],BDealerScore[playerid]);
		ProxDetector(40.0, playerid, text, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE);
		PlayerPlaySound(playerid, 4201, 0.0, 0.0, 0.0);
		CloseBMatch[playerid] = 1;
		PlayerTextDrawShow(playerid, BJreset[playerid]);
		mysql_real_escape_string(text, string2);
		mysql_format(SQL, var100, sizeof(var100), "INSERT INTO playerlogs (`playerid`,`giverid`,`action`) VALUES ('%d','0','%s')", PlayerInfo[playerid][pSQLID],string2);
		mysql_tquery(SQL,var100,"","");
	}
	else if(BDealerScore[playerid] == 21)
	{
		format(text, sizeof(text), "** %s lost $%s at Black Jack (dealer scored 21) **.", GetName(playerid), FormatNumber(BDeal[playerid]));
		ProxDetector(40.0, playerid, text, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE);
		CloseBMatch[playerid] = 1;
		PlayerTextDrawShow(playerid, BJreset[playerid]);
		mysql_real_escape_string(text, string2);
		mysql_format(SQL, var100, sizeof(var100), "INSERT INTO playerlogs (`playerid`,`giverid`,`action`) VALUES ('%d','0','%s')", PlayerInfo[playerid][pSQLID],string2);
		mysql_tquery(SQL,var100,"","");
	}
	else if(BlackJackPlayerScore[playerid] == 21)
	{
		GivePlayerCash(playerid, BDeal[playerid]*2);
		Update(playerid, pCashx);
		format(text, sizeof(text), "** %s win $%s at Black Jack (scored 21) **.", GetName(playerid), FormatNumber(BDeal[playerid]*2));
		ProxDetector(40.0, playerid, text, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE);
		PlayerPlaySound(playerid, 4201, 0.0, 0.0, 0.0);
		CloseBMatch[playerid] = 1;
		PlayerTextDrawShow(playerid, BJreset[playerid]);
		mysql_real_escape_string(text, string2);
		mysql_format(SQL, var100, sizeof(var100), "INSERT INTO playerlogs (`playerid`,`giverid`,`action`) VALUES ('%d','0','%s')", PlayerInfo[playerid][pSQLID],string2);
		mysql_tquery(SQL,var100,"","");
	}
	else if(BlackJackPlayerScore[playerid] < BDealerScore[playerid] && BlackJackActions[playerid]>=2)
	{
		format(text, sizeof(text), "** %s lost $%s at Black Jack (player %d - dealer %d) **.", GetName(playerid), FormatNumber(BDeal[playerid]),BlackJackPlayerScore[playerid],BDealerScore[playerid]);
		ProxDetector(40.0, playerid, text, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE);
		CloseBMatch[playerid] = 1;
		PlayerTextDrawShow(playerid, BJreset[playerid]);
		mysql_real_escape_string(text, string2);
		mysql_format(SQL, var100, sizeof(var100), "INSERT INTO playerlogs (`playerid`,`giverid`,`action`) VALUES ('%d','0','%s')", PlayerInfo[playerid][pSQLID],string2);
		mysql_tquery(SQL,var100,"","");
	}
	else if(BlackJackPlayerScore[playerid] > BDealerScore[playerid] && BlackJackActions[playerid]>=2)
	{
		GivePlayerCash(playerid, BDeal[playerid]*2);
		Update(playerid, pCashx);
		format(text, sizeof(text), "** %s win $%s at Black Jack (player %d - dealer %d) **.", GetName(playerid), FormatNumber(BDeal[playerid]*2),BlackJackPlayerScore[playerid],BDealerScore[playerid]);
		ProxDetector(40.0, playerid, text, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE, COLOR_PURPLE);
		PlayerPlaySound(playerid, 4201, 0.0, 0.0, 0.0);
		CloseBMatch[playerid] = 1;
		PlayerTextDrawShow(playerid, BJreset[playerid]);
		mysql_real_escape_string(text, string2);
		mysql_format(SQL, var100, sizeof(var100), "INSERT INTO playerlogs (`playerid`,`giverid`,`action`) VALUES ('%d','0','%s')", PlayerInfo[playerid][pSQLID],string2);
		mysql_tquery(SQL,var100,"","");
	}
	BlackJackUpdateTable(playerid);
	return 1;
}

public BlackJackUpdateTable(playerid)
{
	for(new p; p < BlackJackPlayerCards[playerid]; p++)
	{
		if(BlackJackStand[playerid]==0) {
			new type[30];
			switch(BlackJackPlayerCard[playerid][p])
			{
			    case 1:format(type, sizeof(type), "LD_CARD:cd1s");
			    case 2:format(type, sizeof(type), "LD_CARD:cd2h");
			    case 3:format(type, sizeof(type), "LD_CARD:cd3d");
			    case 4:format(type, sizeof(type), "LD_CARD:cd4c");
			    case 5:format(type, sizeof(type), "LD_CARD:cd5h");
			    case 6:format(type, sizeof(type), "LD_CARD:cd6c");
			    case 7:format(type, sizeof(type), "LD_CARD:cd7d");
			    case 8:format(type, sizeof(type), "LD_CARD:cd8c");
			    case 9:format(type, sizeof(type), "LD_CARD:cd9h");
			    case 10:format(type, sizeof(type), "LD_CARD:cd10s");
			    case 12:format(type, sizeof(type), "LD_CARD:cd11d");
			    case 13:format(type, sizeof(type), "LD_CARD:cd12h");
			    case 14:format(type, sizeof(type), "LD_CARD:cd13h");
			}
			switch(p)
			{
			    case 0:PlayerTextDrawSetString(playerid, BJPlayerCard1[playerid], type);
			    case 1:PlayerTextDrawSetString(playerid, BJPlayerCard2[playerid], type);
			    case 2:PlayerTextDrawSetString(playerid, BJPlayerCard3[playerid], type);
			    case 3:PlayerTextDrawSetString(playerid, BJPlayerCard4[playerid], type);
			    case 4:PlayerTextDrawSetString(playerid, BJPlayerCard5[playerid], type);
			}
		}	
	}
	for(new p; p < BDealerCards[playerid]; p++)
	{
		if(BDealerScore[playerid]>=16 && BDealerCards[playerid]!=2)	{ }
		else {
			new type[30];
			switch(BDealerCard[playerid][p])
			{
			    case 1:format(type, sizeof(type), "LD_CARD:cd1s");
			    case 2:format(type, sizeof(type), "LD_CARD:cd2h");
			    case 3:format(type, sizeof(type), "LD_CARD:cd3d");
			    case 4:format(type, sizeof(type), "LD_CARD:cd4c");
			    case 5:format(type, sizeof(type), "LD_CARD:cd5h");
			    case 6:format(type, sizeof(type), "LD_CARD:cd6c");
			    case 7:format(type, sizeof(type), "LD_CARD:cd7d");
			    case 8:format(type, sizeof(type), "LD_CARD:cd8c");
			    case 9:format(type, sizeof(type), "LD_CARD:cd9h");
			    case 10:format(type, sizeof(type), "LD_CARD:cd10s");
			    case 12:format(type, sizeof(type), "LD_CARD:cd11d");
			    case 13:format(type, sizeof(type), "LD_CARD:cd12h");
			    case 14:format(type, sizeof(type), "LD_CARD:cd13h");
			}
			switch(p)
			{
			    case 0:PlayerTextDrawSetString(playerid, BJDealerCard1[playerid], type);
			    case 1:PlayerTextDrawSetString(playerid, BJDealerCard2[playerid], type);
			    case 2:PlayerTextDrawSetString(playerid, BJDealerCard3[playerid], type);
			    case 3:PlayerTextDrawSetString(playerid, BJDealerCard4[playerid], type);
			    case 4:PlayerTextDrawSetString(playerid, BJDealerCard5[playerid], type);
			}
		}	
	}
	if(BlackJackStand[playerid]==1) BlackJackStand[playerid]=0;
	new str[100];
	format(str, sizeof(str), "DEALER: %s", FormatNumber(BDealerScore[playerid]));
	PlayerTextDrawSetString(playerid, BJDealerScoreText[playerid], str);
	format(str, sizeof(str), "PLAYER: %s", FormatNumber(BlackJackPlayerScore[playerid]));
	PlayerTextDrawSetString(playerid, BJPlayerScoreText[playerid], str);
	return 1;
}
/*---------------------------------------------------------------------------------------------------------------------------------------------------*/

// vehicle component save
public SaveComponent(vehicleid,componentid)
{
	new vid,pid;
	foreach(new i : Player)
	{
		for(new v; v < MAX_PERSONAL_VEHICLES; v++)
		{
			if(PlayerInfo[i][pCarID][v] == vehicleid)
			{
				vid = v;
				pid = i;
			}
		}
	}
	for(new s=0; s<20; s++)
	{
		if(componentid == spoiler[s][0])
		{
			CarMod[pid][vid][0] = componentid;
		}
	}
	for(new s=0; s<3; s++)
	{
		if(componentid == nitro[s][0])
		{
			CarMod[pid][vid][1] = componentid;
		}
	}
	for(new s=0; s<23; s++)
	{
		if(componentid == fbumper[s][0])
		{
			CarMod[pid][vid][2] = componentid;
		}
	}
	for(new s=0; s<22; s++)
	{
		if(componentid == rbumper[s][0])
		{
			CarMod[pid][vid][3] = componentid;
		}
	}
	for(new s=0; s<28; s++)
	{
		if(componentid == exhaust[s][0])
		{
			CarMod[pid][vid][4] = componentid;
		}
	}
	for(new s=0; s<2; s++)
	{
		if(componentid == bventr[s][0])
		{
			CarMod[pid][vid][5] = componentid;
		}
	}
	for(new s=0; s<2; s++)
	{
		if(componentid == bventl[s][0]) {
			CarMod[pid][vid][6] = componentid;
		}
	}
	for(new s=0; s<4; s++)
	{
		if(componentid == bscoop[s][0])
		{
			CarMod[pid][vid][7] = componentid;
		}
	}
	for(new s=0; s<17; s++)
	{
		if(componentid == rscoop[s][0])
		{
			CarMod[pid][vid][8] = componentid;
		}
	}
	for(new s=0; s<21; s++)
	{
		if(componentid == lskirt[s][0])
		{
			CarMod[pid][vid][9] = componentid;
		}
	}
	for(new s=0; s<21; s++)
	{
		if(componentid == rskirt[s][0])
		{
			CarMod[pid][vid][10] = componentid;
		}
	}
	for(new s=0; s<1; s++)
	{
		if(componentid == hydraulics[s][0])
		{
			CarMod[pid][vid][11] = componentid;
		}
	}
	for(new s=0; s<1; s++)
	{
		if(componentid == vbase[s][0])
		{
			CarMod[pid][vid][12] = componentid;
		}
	}
	for(new s=0; s<4; s++)
	{
		if(componentid == rbbars[s][0])
		{
			CarMod[pid][vid][13] = componentid;
		}
	}
	for(new s=0; s<2; s++)
	{
		if(componentid == fbbars[s][0])
		{
			CarMod[pid][vid][14] = componentid;
		}
	}
	for(new s=0; s<17; s++)
	{
		if(componentid == wheels[s][0])
		{
			CarMod[pid][vid][15] = componentid;
		}
	}
	for(new s=0; s<2; s++)
	{
		if(componentid == vlights[s][0])
		{
			CarMod[pid][vid][16] = componentid;
		}
	}
	cUpdate(pid, vid, cModsx);
	return 1;
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------*/

SetPlayerAttachedObjectEx(playerid, index, modelid, bone, Float:fOffsetX = 0.0, Float:fOffsetY = 0.0, Float:fOffsetZ = 0.0, Float:fRotX = 0.0, Float:fRotY = 0.0, Float:fRotZ = 0.0, Float:fScaleX = 1.0, Float:fScaleY = 1.0, Float:fScaleZ = 1.0, materialcolor1 = 0, materialcolor2 = 0)
{
    ao[playerid][index][ao_x] = fOffsetX;
    ao[playerid][index][ao_y] = fOffsetY;
    ao[playerid][index][ao_z] = fOffsetZ;
    ao[playerid][index][ao_rx] = fRotX;
    ao[playerid][index][ao_ry] = fRotY;
    ao[playerid][index][ao_rz] = fRotZ;
    ao[playerid][index][ao_sx] = fScaleX;
    ao[playerid][index][ao_sy] = fScaleY;
    ao[playerid][index][ao_sz] = fScaleZ;
    SetPlayerAttachedObject(playerid, index, modelid, bone, fOffsetX, fOffsetY, fOffsetZ, fRotX, fRotY, fRotZ, fScaleX, fScaleY, fScaleZ, materialcolor1, materialcolor2);
    return 1;
}

public OnPlayerEditAttachedObject(playerid, response, index, modelid, boneid, Float:fOffsetX, Float:fOffsetY, Float:fOffsetZ, Float:fRotX, Float:fRotY, Float:fRotZ, Float:fScaleX, Float:fScaleY, Float:fScaleZ)
{
    if(response)
    {
    	SetPVarInt(playerid, "Edited", 1);
    	new type = ObjectType[playerid];
		switch(type) {
			case 0: {
				attachInfo[playerid][aIndex0][0] = fOffsetX; attachInfo[playerid][aIndex0][1] = fOffsetY; attachInfo[playerid][aIndex0][2] = fOffsetZ;
				attachInfo[playerid][aIndex0][3] = fRotX; attachInfo[playerid][aIndex0][4] = fRotY; attachInfo[playerid][aIndex0][5] = fRotZ;
				save_player_accs(playerid, SAVE_INDEX_0);
			}
			case 1: {
				attachInfo[playerid][aIndex1][0] = fOffsetX; attachInfo[playerid][aIndex1][1] = fOffsetY; attachInfo[playerid][aIndex1][2] = fOffsetZ;
				attachInfo[playerid][aIndex1][3] = fRotX; attachInfo[playerid][aIndex1][4] = fRotY; attachInfo[playerid][aIndex1][5] = fRotZ;
				save_player_accs(playerid, SAVE_INDEX_1);
			}
			case 2: {
				attachInfo[playerid][aIndex2][0] = fOffsetX; attachInfo[playerid][aIndex2][1] = fOffsetY; attachInfo[playerid][aIndex2][2] = fOffsetZ;
				attachInfo[playerid][aIndex2][3] = fRotX; attachInfo[playerid][aIndex2][4] = fRotY; attachInfo[playerid][aIndex2][5] = fRotZ;
				save_player_accs(playerid, SAVE_INDEX_2);
			}
			case 3: {
				attachInfo[playerid][aIndex3][0] = fOffsetX; attachInfo[playerid][aIndex3][1] = fOffsetY; attachInfo[playerid][aIndex3][2] = fOffsetZ;
				attachInfo[playerid][aIndex3][3] = fRotX; attachInfo[playerid][aIndex3][4] = fRotY; attachInfo[playerid][aIndex3][5] = fRotZ;
				save_player_accs(playerid, SAVE_INDEX_3);
			}
			case 4: {
				attachInfo[playerid][aIndex4][0] = fOffsetX; attachInfo[playerid][aIndex4][1] = fOffsetY; attachInfo[playerid][aIndex4][2] = fOffsetZ;
				attachInfo[playerid][aIndex4][3] = fRotX; attachInfo[playerid][aIndex4][4] = fRotY; attachInfo[playerid][aIndex4][5] = fRotZ;
				save_player_accs(playerid, SAVE_INDEX_4);
			}
			case 5: {
				attachInfo[playerid][aIndex5][0] = fOffsetX; attachInfo[playerid][aIndex5][1] = fOffsetY; attachInfo[playerid][aIndex5][2] = fOffsetZ;
				attachInfo[playerid][aIndex5][3] = fRotX; attachInfo[playerid][aIndex5][4] = fRotY; attachInfo[playerid][aIndex5][5] = fRotZ;
				save_player_accs(playerid, SAVE_INDEX_5);
			}
			case 6: {
				attachInfo[playerid][aIndex6][0] = fOffsetX; attachInfo[playerid][aIndex6][1] = fOffsetY; attachInfo[playerid][aIndex6][2] = fOffsetZ;
				attachInfo[playerid][aIndex6][3] = fRotX; attachInfo[playerid][aIndex6][4] = fRotY; attachInfo[playerid][aIndex6][5] = fRotZ;
				save_player_accs(playerid, SAVE_INDEX_6);
			}
			case 7: {
				attachInfo[playerid][aIndex7][0] = fOffsetX; attachInfo[playerid][aIndex7][1] = fOffsetY; attachInfo[playerid][aIndex7][2] = fOffsetZ;
				attachInfo[playerid][aIndex7][3] = fRotX; attachInfo[playerid][aIndex7][4] = fRotY; attachInfo[playerid][aIndex7][5] = fRotZ;
				save_player_accs(playerid, SAVE_INDEX_7);
			}
			case 8: {
				attachInfo[playerid][aIndex8][0] = fOffsetX; attachInfo[playerid][aIndex8][1] = fOffsetY; attachInfo[playerid][aIndex8][2] = fOffsetZ;
				attachInfo[playerid][aIndex8][3] = fRotX; attachInfo[playerid][aIndex8][4] = fRotY; attachInfo[playerid][aIndex8][5] = fRotZ;
				save_player_accs(playerid, SAVE_INDEX_8);
			}
			case 9: {
				attachInfo[playerid][aIndex9][0] = fOffsetX; attachInfo[playerid][aIndex9][1] = fOffsetY; attachInfo[playerid][aIndex9][2] = fOffsetZ;
				attachInfo[playerid][aIndex9][3] = fRotX; attachInfo[playerid][aIndex9][4] = fRotY; attachInfo[playerid][aIndex9][5] = fRotZ;
				save_player_accs(playerid, SAVE_INDEX_9);
			}								
		}
        ao[playerid][index][ao_x] = fOffsetX;
        ao[playerid][index][ao_y] = fOffsetY;
        ao[playerid][index][ao_z] = fOffsetZ;
        ao[playerid][index][ao_rx] = fRotX;
        ao[playerid][index][ao_ry] = fRotY;
        ao[playerid][index][ao_rz] = fRotZ;
        ao[playerid][index][ao_sx] = fScaleX;
        ao[playerid][index][ao_sy] = fScaleY;
        ao[playerid][index][ao_sz] = fScaleZ;	
    }
    else
    {
        new i = index;
        SetPlayerAttachedObjectEx(playerid, index, modelid, boneid, ao[playerid][i][ao_x], ao[playerid][i][ao_y], ao[playerid][i][ao_z], ao[playerid][i][ao_rx], ao[playerid][i][ao_ry], ao[playerid][i][ao_rz], ao[playerid][i][ao_sx], ao[playerid][i][ao_sy], ao[playerid][i][ao_sz]);
    }
    return 1;
}


stock categoryName(type) {
	new string[32];
	switch(type) {
		case 0: string = "Hats";
		case 1: string = "Glasses";
		case 2: string = "Watches";
		case 3: string = "Lasers";
		case 4: string = "Hand items";
		case 5: string = "Masks & Gang Bandanas";
		case 6: string = "Back Items";
		case 7: string = "Special Items";
	}
	return string;
}

update_accs(playerid) {
	new 
		string[64],
		i = ObjectSlot[playerid][ObjectID[playerid]];

	if(objectInfo[i][objPremium] == 0) format(string, sizeof(string), "Price: ~g~$%s", FormatNumber(objectInfo[i][objMoney]));
	else if(objectInfo[i][objPremium] > 0 && objectInfo[i][objMoney] == 0) format(string, sizeof(string), "Price: ~p~%s PP", FormatNumber(objectInfo[i][objPremium]));
	else if(objectInfo[i][objPremium] > 0 && objectInfo[i][objMoney] > 0) format(string, sizeof(string), "Price: ~g~$%s~w~~h~ / ~p~%s PP", FormatNumber(objectInfo[i][objMoney]), FormatNumber(objectInfo[i][objPremium]));
	PlayerTextDrawSetString(playerid, AccsPTD[0], string);
	PlayerTextDrawShow(playerid, AccsPTD[0]);

	PlayerTextDrawSetPreviewModel(playerid, AccsPTD[1], objectInfo[i][objModel]);
	PlayerTextDrawShow(playerid, AccsPTD[1]);

	format(string, sizeof(string), "%d/%d", ObjectID[playerid]+1, count_objects(ObjectType[playerid]));
	PlayerTextDrawSetString(playerid, AccsPTD[2], string);
	PlayerTextDrawShow(playerid, AccsPTD[2]);

	SetPlayerAttachedObjectEx( playerid, ObjectType[playerid], objectInfo[i][objModel], objectInfo[i][objBone], objectInfo[i][objfOffsetX], objectInfo[i][objfOffsetY], objectInfo[i][objfOffsetZ], objectInfo[i][objfRotX], objectInfo[i][objfRotY], objectInfo[i][objfRotZ], 1.000000, 1.000000, 1.000000 );
	return 1;
}

select_type(playerid, type) {
	new x;
	for(new i = 0; i < MAX_AOBJECTS; i++) {
		if(objectInfo[i][objType] == type && objectInfo[i][objModel]) ObjectSlot[playerid][x] = i, x++;
	}
	ObjectType[playerid] = type;
	ObjectID[playerid] = 0;
	show_accs_tds(playerid);
	update_accs(playerid);
	return 1;
}


count_objects(type) {
	new x;
	for(new i = 0; i < MAX_AOBJECTS; i++) {
		if(objectInfo[i][objType] == type && objectInfo[i][objModel]) x++;
	}
	return x;
}

check_save(playerid) {
	new 
		query[128],
		Cache: result,
		test;
		
	format(query, sizeof(query), "SELECT * FROM `player_accessory` WHERE `UserID`='%d'", PlayerInfo[playerid][pSQLID]);
	result = mysql_query(SQL, query);
	test = cache_get_row_count();
	
    for(new i; i < MAX_PLAYER_ATTACHED_OBJECTS; i++) {
    	RemovePlayerAttachedObject(playerid, i);
    }

	if(test == 0) {
		format(query, sizeof(query), "INSERT INTO `player_accessory` (`UserID`) VALUES ('%d')", PlayerInfo[playerid][pSQLID]);
		mysql_tquery(SQL, query, "", "");		
		reset_player_accs(playerid);	
	}
	else {
		new 
			var[80];

		cache_get_field_content(0, "Accessory", query); 
		format(var, sizeof(var), query);
		sscanf(var, "p<|>iiiiiiiiii", attachInfo[playerid][aModel][0], attachInfo[playerid][aModel][1], attachInfo[playerid][aModel][2], attachInfo[playerid][aModel][3], attachInfo[playerid][aModel][4], attachInfo[playerid][aModel][5],
		attachInfo[playerid][aModel][6], attachInfo[playerid][aModel][7], attachInfo[playerid][aModel][8], attachInfo[playerid][aModel][9]);

		cache_get_field_content(0, "Bone", query); 
		format(var, sizeof(var), query);
		sscanf(var, "p<|>iiiiiiiiii", attachInfo[playerid][aBone][0], attachInfo[playerid][aBone][1], attachInfo[playerid][aBone][2], attachInfo[playerid][aBone][3], attachInfo[playerid][aBone][4], attachInfo[playerid][aBone][5],
		attachInfo[playerid][aBone][6], attachInfo[playerid][aBone][7], attachInfo[playerid][aBone][8], attachInfo[playerid][aBone][9]);

		cache_get_field_content(0, "Status", query); 
		format(var, sizeof(var), query);
		sscanf(var, "p<|>iiiiiiiiii", attachInfo[playerid][aStatus][0], attachInfo[playerid][aStatus][1], attachInfo[playerid][aStatus][2], attachInfo[playerid][aStatus][3], attachInfo[playerid][aStatus][4], attachInfo[playerid][aStatus][5],
		attachInfo[playerid][aStatus][6], attachInfo[playerid][aStatus][7], attachInfo[playerid][aStatus][8], attachInfo[playerid][aStatus][9]);

		cache_get_field_content(0, "Index0", query); 
		format(var, sizeof(var), query);
		sscanf(var, "p<|>ffffff", attachInfo[playerid][aIndex0][0], attachInfo[playerid][aIndex0][1], attachInfo[playerid][aIndex0][2], attachInfo[playerid][aIndex0][3], attachInfo[playerid][aIndex0][4], attachInfo[playerid][aIndex0][5]);

		cache_get_field_content(0, "Index1", query); 
		format(var, sizeof(var), query);
		sscanf(var, "p<|>ffffff", attachInfo[playerid][aIndex1][0], attachInfo[playerid][aIndex1][1], attachInfo[playerid][aIndex1][2], attachInfo[playerid][aIndex1][3], attachInfo[playerid][aIndex1][4], attachInfo[playerid][aIndex1][5]);

		cache_get_field_content(0, "Index2", query); 
		format(var, sizeof(var), query);
		sscanf(var, "p<|>ffffff", attachInfo[playerid][aIndex2][0], attachInfo[playerid][aIndex2][1], attachInfo[playerid][aIndex2][2], attachInfo[playerid][aIndex2][3], attachInfo[playerid][aIndex2][4], attachInfo[playerid][aIndex2][5]);

		cache_get_field_content(0, "Index3", query);  
		format(var, sizeof(var), query);
		sscanf(var, "p<|>ffffff", attachInfo[playerid][aIndex3][0], attachInfo[playerid][aIndex3][1], attachInfo[playerid][aIndex3][2], attachInfo[playerid][aIndex3][3], attachInfo[playerid][aIndex3][4], attachInfo[playerid][aIndex3][5]);

		cache_get_field_content(0, "Index4", query); 
		format(var, sizeof(var), query);
		sscanf(var, "p<|>ffffff", attachInfo[playerid][aIndex4][0], attachInfo[playerid][aIndex4][1], attachInfo[playerid][aIndex4][2], attachInfo[playerid][aIndex4][3], attachInfo[playerid][aIndex4][4], attachInfo[playerid][aIndex4][5]);

		cache_get_field_content(0, "Index5", query); 
		format(var, sizeof(var), query);
		sscanf(var, "p<|>ffffff", attachInfo[playerid][aIndex5][0], attachInfo[playerid][aIndex5][1], attachInfo[playerid][aIndex5][2], attachInfo[playerid][aIndex5][3], attachInfo[playerid][aIndex5][4], attachInfo[playerid][aIndex5][5]);

		cache_get_field_content(0, "Index6", query);  
		format(var, sizeof(var), query);
		sscanf(var, "p<|>ffffff", attachInfo[playerid][aIndex6][0], attachInfo[playerid][aIndex6][1], attachInfo[playerid][aIndex6][2], attachInfo[playerid][aIndex6][3], attachInfo[playerid][aIndex6][4], attachInfo[playerid][aIndex6][5]);

		cache_get_field_content(0, "Index7", query); 
		format(var, sizeof(var), query);
		sscanf(var, "p<|>ffffff", attachInfo[playerid][aIndex7][0], attachInfo[playerid][aIndex7][1], attachInfo[playerid][aIndex7][2], attachInfo[playerid][aIndex7][3], attachInfo[playerid][aIndex7][4], attachInfo[playerid][aIndex7][5]);

		cache_get_field_content(0, "Index8", query);  
		format(var, sizeof(var), query);
		sscanf(var, "p<|>ffffff", attachInfo[playerid][aIndex8][0], attachInfo[playerid][aIndex8][1], attachInfo[playerid][aIndex8][2], attachInfo[playerid][aIndex8][3], attachInfo[playerid][aIndex8][4], attachInfo[playerid][aIndex8][5]);

		cache_get_field_content(0, "Index9", query); 
		format(var, sizeof(var), query);
		sscanf(var, "p<|>ffffff", attachInfo[playerid][aIndex9][0], attachInfo[playerid][aIndex9][1], attachInfo[playerid][aIndex9][2], attachInfo[playerid][aIndex9][3], attachInfo[playerid][aIndex9][4], attachInfo[playerid][aIndex9][5]);
		cache_delete(result);	
	}								
	return 1;
}

function load_objects_accesory() {
	new Cache: db = mysql_query(SQL, "SELECT * FROM `objects_accesory`");
	new x, result[126];
 	for(new i, j = cache_get_row_count (); i != j; ++i) {
	    total_objects ++;
       	cache_get_field_content(i, "ID", result); x = strval(result), objectInfo[x][objID] = x;
		cache_get_field_content(i, "Model", result); objectInfo[x][objModel] = strval(result);
 		cache_get_field_content(i, "Type", result); objectInfo[x][objType] = strval(result);
 		cache_get_field_content(i, "Money", result); objectInfo[x][objMoney] = strval(result);
 		cache_get_field_content(i, "Premium", result); objectInfo[x][objPremium] = strval(result);
  		cache_get_field_content(i, "Bone", result); objectInfo[x][objBone] = strval(result);
   		objectInfo[x][objfOffsetX] = cache_get_field_content_float(i, "fOffsetX");
   		objectInfo[x][objfOffsetY] = cache_get_field_content_float(i, "fOffsetY");
   		objectInfo[x][objfOffsetZ] = cache_get_field_content_float(i, "fOffsetZ");
   		objectInfo[x][objfRotX] = cache_get_field_content_float(i, "fRotX");
   		objectInfo[x][objfRotY] = cache_get_field_content_float(i, "fRotY");
   		objectInfo[x][objfRotZ] = cache_get_field_content_float(i, "fRotZ");   		  			
	}
	printf("Accesory loaded: %d", total_objects);
	cache_delete(db);
	return 1;
}

buy_accs(playerid) {
	new 
		string[128],
		type = ObjectType[playerid],
		x = ObjectSlot[playerid][ObjectID[playerid]];

	attachInfo[playerid][aModel][type] = objectInfo[x][objModel];
	attachInfo[playerid][aStatus][type] = 0;
	attachInfo[playerid][aBone][type] = objectInfo[x][objBone];
	if(GetPVarInt(playerid, "Edited") == 0) {
		switch(type) {
			case 0: {
				attachInfo[playerid][aIndex0][0] = objectInfo[x][objfOffsetX]; attachInfo[playerid][aIndex0][1] = objectInfo[x][objfOffsetY]; attachInfo[playerid][aIndex0][2] = objectInfo[x][objfOffsetZ];
				attachInfo[playerid][aIndex0][3] = objectInfo[x][objfRotX]; attachInfo[playerid][aIndex0][4] = objectInfo[x][objfRotY]; attachInfo[playerid][aIndex0][5] = objectInfo[x][objfRotZ];
				save_player_accs(playerid, SAVE_INDEX_0);
			}
			case 1: {
				attachInfo[playerid][aIndex1][0] = objectInfo[x][objfOffsetX]; attachInfo[playerid][aIndex1][1] = objectInfo[x][objfOffsetY]; attachInfo[playerid][aIndex1][2] = objectInfo[x][objfOffsetZ];
				attachInfo[playerid][aIndex1][3] = objectInfo[x][objfRotX]; attachInfo[playerid][aIndex1][4] = objectInfo[x][objfRotY]; attachInfo[playerid][aIndex1][5] = objectInfo[x][objfRotZ];
				save_player_accs(playerid, SAVE_INDEX_1);
			}
			case 2: {
				attachInfo[playerid][aIndex2][0] = objectInfo[x][objfOffsetX]; attachInfo[playerid][aIndex2][1] = objectInfo[x][objfOffsetY]; attachInfo[playerid][aIndex2][2] = objectInfo[x][objfOffsetZ];
				attachInfo[playerid][aIndex2][3] = objectInfo[x][objfRotX]; attachInfo[playerid][aIndex2][4] = objectInfo[x][objfRotY]; attachInfo[playerid][aIndex2][5] = objectInfo[x][objfRotZ];
				save_player_accs(playerid, SAVE_INDEX_2);
			}
			case 3: {
				attachInfo[playerid][aIndex3][0] = objectInfo[x][objfOffsetX]; attachInfo[playerid][aIndex3][1] = objectInfo[x][objfOffsetY]; attachInfo[playerid][aIndex3][2] = objectInfo[x][objfOffsetZ];
				attachInfo[playerid][aIndex3][3] = objectInfo[x][objfRotX]; attachInfo[playerid][aIndex3][4] = objectInfo[x][objfRotY]; attachInfo[playerid][aIndex3][5] = objectInfo[x][objfRotZ];
				save_player_accs(playerid, SAVE_INDEX_3);
			}
			case 4: {
				attachInfo[playerid][aIndex4][0] = objectInfo[x][objfOffsetX]; attachInfo[playerid][aIndex4][1] = objectInfo[x][objfOffsetY]; attachInfo[playerid][aIndex4][2] = objectInfo[x][objfOffsetZ];
				attachInfo[playerid][aIndex4][3] = objectInfo[x][objfRotX]; attachInfo[playerid][aIndex4][4] = objectInfo[x][objfRotY]; attachInfo[playerid][aIndex4][5] = objectInfo[x][objfRotZ];
				save_player_accs(playerid, SAVE_INDEX_4);
			}
			case 5: {
				attachInfo[playerid][aIndex5][0] = objectInfo[x][objfOffsetX]; attachInfo[playerid][aIndex5][1] = objectInfo[x][objfOffsetY]; attachInfo[playerid][aIndex5][2] = objectInfo[x][objfOffsetZ];
				attachInfo[playerid][aIndex5][3] = objectInfo[x][objfRotX]; attachInfo[playerid][aIndex5][4] = objectInfo[x][objfRotY]; attachInfo[playerid][aIndex5][5] = objectInfo[x][objfRotZ];
				save_player_accs(playerid, SAVE_INDEX_5);
			}
			case 6: {
				attachInfo[playerid][aIndex6][0] = objectInfo[x][objfOffsetX]; attachInfo[playerid][aIndex6][1] = objectInfo[x][objfOffsetY]; attachInfo[playerid][aIndex6][2] = objectInfo[x][objfOffsetZ];
				attachInfo[playerid][aIndex6][3] = objectInfo[x][objfRotX]; attachInfo[playerid][aIndex6][4] = objectInfo[x][objfRotY]; attachInfo[playerid][aIndex6][5] = objectInfo[x][objfRotZ];
				save_player_accs(playerid, SAVE_INDEX_6);
			}
			case 7: {
				attachInfo[playerid][aIndex7][0] = objectInfo[x][objfOffsetX]; attachInfo[playerid][aIndex7][1] = objectInfo[x][objfOffsetY]; attachInfo[playerid][aIndex7][2] = objectInfo[x][objfOffsetZ];
				attachInfo[playerid][aIndex7][3] = objectInfo[x][objfRotX]; attachInfo[playerid][aIndex7][4] = objectInfo[x][objfRotY]; attachInfo[playerid][aIndex7][5] = objectInfo[x][objfRotZ];
				save_player_accs(playerid, SAVE_INDEX_7);
			}
			case 8: {
				attachInfo[playerid][aIndex8][0] = objectInfo[x][objfOffsetX]; attachInfo[playerid][aIndex8][1] = objectInfo[x][objfOffsetY]; attachInfo[playerid][aIndex8][2] = objectInfo[x][objfOffsetZ];
				attachInfo[playerid][aIndex8][3] = objectInfo[x][objfRotX]; attachInfo[playerid][aIndex8][4] = objectInfo[x][objfRotY]; attachInfo[playerid][aIndex8][5] = objectInfo[x][objfRotZ];
				save_player_accs(playerid, SAVE_INDEX_8);
			}
			case 9: {
				attachInfo[playerid][aIndex9][0] = objectInfo[x][objfOffsetX]; attachInfo[playerid][aIndex9][1] = objectInfo[x][objfOffsetY]; attachInfo[playerid][aIndex9][2] = objectInfo[x][objfOffsetZ];
				attachInfo[playerid][aIndex9][3] = objectInfo[x][objfRotX]; attachInfo[playerid][aIndex9][4] = objectInfo[x][objfRotY]; attachInfo[playerid][aIndex9][5] = objectInfo[x][objfRotZ];
				save_player_accs(playerid, SAVE_INDEX_9);
			}								
		}
	}

	format(string, sizeof(string), "You bought accesory %d. All accesories will be attached after you leave.", objectInfo[x][objModel]);
	SendClientMessage(playerid, COLOR_GRAD3, string);

	save_player_accs(playerid, SAVE_ACCESORY);
	save_player_accs(playerid, SAVE_STATUS);		
	save_player_accs(playerid, SAVE_BONE);	
	return 1;
}

attach_objects(playerid) {
    for(new i; i < MAX_PLAYER_ATTACHED_OBJECTS; i++) RemovePlayerAttachedObject(playerid, i);
	if(attachInfo[playerid][aStatus][0] == 0 && attachInfo[playerid][aModel][0] != 0) SetPlayerAttachedObjectEx(playerid, 0, attachInfo[playerid][aModel][0], attachInfo[playerid][aBone][0], attachInfo[playerid][aIndex0][0], attachInfo[playerid][aIndex0][1], attachInfo[playerid][aIndex0][2], attachInfo[playerid][aIndex0][3], attachInfo[playerid][aIndex0][4], attachInfo[playerid][aIndex0][5], 1.000000, 1.000000, 1.000000);
	if(attachInfo[playerid][aStatus][1] == 0 && attachInfo[playerid][aModel][1] != 0) SetPlayerAttachedObjectEx(playerid, 1, attachInfo[playerid][aModel][1], attachInfo[playerid][aBone][1], attachInfo[playerid][aIndex1][0], attachInfo[playerid][aIndex1][1], attachInfo[playerid][aIndex1][2], attachInfo[playerid][aIndex1][3], attachInfo[playerid][aIndex1][4], attachInfo[playerid][aIndex1][5], 1.000000, 1.000000, 1.000000);
	if(attachInfo[playerid][aStatus][2] == 0 && attachInfo[playerid][aModel][2] != 0) SetPlayerAttachedObjectEx(playerid, 2, attachInfo[playerid][aModel][2], attachInfo[playerid][aBone][2], attachInfo[playerid][aIndex2][0], attachInfo[playerid][aIndex2][1], attachInfo[playerid][aIndex2][2], attachInfo[playerid][aIndex2][3], attachInfo[playerid][aIndex2][4], attachInfo[playerid][aIndex2][5], 1.000000, 1.000000, 1.000000);
	if(attachInfo[playerid][aStatus][3] == 0 && attachInfo[playerid][aModel][3] != 0) SetPlayerAttachedObjectEx(playerid, 3, attachInfo[playerid][aModel][3], attachInfo[playerid][aBone][3], attachInfo[playerid][aIndex3][0], attachInfo[playerid][aIndex3][1], attachInfo[playerid][aIndex3][2], attachInfo[playerid][aIndex3][3], attachInfo[playerid][aIndex3][4], attachInfo[playerid][aIndex3][5], 1.000000, 1.000000, 1.000000);
	if(attachInfo[playerid][aStatus][4] == 0 && attachInfo[playerid][aModel][4] != 0) SetPlayerAttachedObjectEx(playerid, 4, attachInfo[playerid][aModel][4], attachInfo[playerid][aBone][4], attachInfo[playerid][aIndex4][0], attachInfo[playerid][aIndex4][1], attachInfo[playerid][aIndex4][2], attachInfo[playerid][aIndex4][3], attachInfo[playerid][aIndex4][4], attachInfo[playerid][aIndex4][5], 1.000000, 1.000000, 1.000000);
	if(attachInfo[playerid][aStatus][5] == 0 && attachInfo[playerid][aModel][5] != 0) SetPlayerAttachedObjectEx(playerid, 5, attachInfo[playerid][aModel][5], attachInfo[playerid][aBone][5], attachInfo[playerid][aIndex5][0], attachInfo[playerid][aIndex5][1], attachInfo[playerid][aIndex5][2], attachInfo[playerid][aIndex5][3], attachInfo[playerid][aIndex5][4], attachInfo[playerid][aIndex5][5], 1.000000, 1.000000, 1.000000);
	if(attachInfo[playerid][aStatus][6] == 0 && attachInfo[playerid][aModel][6] != 0) SetPlayerAttachedObjectEx(playerid, 6, attachInfo[playerid][aModel][6], attachInfo[playerid][aBone][6], attachInfo[playerid][aIndex6][0], attachInfo[playerid][aIndex6][1], attachInfo[playerid][aIndex6][2], attachInfo[playerid][aIndex6][3], attachInfo[playerid][aIndex6][4], attachInfo[playerid][aIndex6][5], 1.000000, 1.000000, 1.000000);
	if(attachInfo[playerid][aStatus][7] == 0 && attachInfo[playerid][aModel][7] != 0) SetPlayerAttachedObjectEx(playerid, 7, attachInfo[playerid][aModel][7], attachInfo[playerid][aBone][7], attachInfo[playerid][aIndex7][0], attachInfo[playerid][aIndex7][1], attachInfo[playerid][aIndex7][2], attachInfo[playerid][aIndex7][3], attachInfo[playerid][aIndex7][4], attachInfo[playerid][aIndex7][5], 1.000000, 1.000000, 1.000000);
	if(attachInfo[playerid][aStatus][8] == 0 && attachInfo[playerid][aModel][8] != 0) SetPlayerAttachedObjectEx(playerid, 8, attachInfo[playerid][aModel][8], attachInfo[playerid][aBone][8], attachInfo[playerid][aIndex8][0], attachInfo[playerid][aIndex8][1], attachInfo[playerid][aIndex8][2], attachInfo[playerid][aIndex8][3], attachInfo[playerid][aIndex8][4], attachInfo[playerid][aIndex8][5], 1.000000, 1.000000, 1.000000);	
	if(attachInfo[playerid][aStatus][9] == 0 && attachInfo[playerid][aModel][9] != 0) SetPlayerAttachedObjectEx(playerid, 9, attachInfo[playerid][aModel][9], attachInfo[playerid][aBone][9], attachInfo[playerid][aIndex9][0], attachInfo[playerid][aIndex9][1], attachInfo[playerid][aIndex9][2], attachInfo[playerid][aIndex9][3], attachInfo[playerid][aIndex9][4], attachInfo[playerid][aIndex9][5], 1.000000, 1.000000, 1.000000);
	return 1;
}


reset_player_accs(playerid) {
	for(new i = 0; i < 6; i++) {
		attachInfo[playerid][aIndex0][i] = 0;
		attachInfo[playerid][aIndex1][i] = 0;
		attachInfo[playerid][aIndex2][i] = 0;
		attachInfo[playerid][aIndex3][i] = 0;
		attachInfo[playerid][aIndex4][i] = 0;
		attachInfo[playerid][aIndex5][i] = 0;
		attachInfo[playerid][aIndex6][i] = 0;
		attachInfo[playerid][aIndex7][i] = 0;
		attachInfo[playerid][aIndex8][i] = 0;
		attachInfo[playerid][aIndex9][i] = 0;
	}	
    for(new i; i < MAX_PLAYER_ATTACHED_OBJECTS; i++) {
    	RemovePlayerAttachedObject(playerid, i);
    	attachInfo[playerid][aModel][i] = 0, attachInfo[playerid][aBone][i] = 0, attachInfo[playerid][aStatus][i] = 0;
    }
    for(new i = 0; i < 13; i++) save_player_accs(playerid, i);     	
	return 1;
}


save_player_accs(playerid, type) {
	new 
		query[256];

	switch(type) {	
		case SAVE_ACCESORY: {
			mysql_format(SQL, query, sizeof(query), "UPDATE `player_accessory` SET `Accessory` = '%d|%d|%d|%d|%d|%d|%d|%d|%d|%d' WHERE `UserID` = %d", attachInfo[playerid][aModel][0], attachInfo[playerid][aModel][1], attachInfo[playerid][aModel][2], attachInfo[playerid][aModel][3], attachInfo[playerid][aModel][4], attachInfo[playerid][aModel][5],
			attachInfo[playerid][aModel][6], attachInfo[playerid][aModel][7], attachInfo[playerid][aModel][8], attachInfo[playerid][aModel][9], PlayerInfo[playerid][pSQLID]);
		}
		case SAVE_BONE: {
			mysql_format(SQL, query, sizeof(query), "UPDATE `player_accessory` SET `Bone` = '%d|%d|%d|%d|%d|%d|%d|%d|%d|%d' WHERE `UserID` = %d", attachInfo[playerid][aBone][0], attachInfo[playerid][aBone][1], attachInfo[playerid][aBone][2], attachInfo[playerid][aBone][3], attachInfo[playerid][aBone][4], attachInfo[playerid][aBone][5],
			attachInfo[playerid][aBone][6], attachInfo[playerid][aBone][7], attachInfo[playerid][aBone][8], attachInfo[playerid][aBone][9], PlayerInfo[playerid][pSQLID]);
		}		
		case SAVE_STATUS: {
			mysql_format(SQL, query, sizeof(query), "UPDATE `player_accessory` SET `Status` = '%d|%d|%d|%d|%d|%d|%d|%d|%d|%d' WHERE `UserID` = %d", attachInfo[playerid][aStatus][0], attachInfo[playerid][aStatus][1], attachInfo[playerid][aStatus][2], attachInfo[playerid][aStatus][3], attachInfo[playerid][aStatus][4], attachInfo[playerid][aStatus][5],
			attachInfo[playerid][aStatus][6], attachInfo[playerid][aStatus][7], attachInfo[playerid][aStatus][8], attachInfo[playerid][aStatus][9], PlayerInfo[playerid][pSQLID]);	
		}
		case SAVE_INDEX_0: {
			mysql_format(SQL, query, sizeof(query), "UPDATE `player_accessory` SET `Index0` = '%f|%f|%f|%f|%f|%f' WHERE `UserID` = %d", attachInfo[playerid][aIndex0][0], attachInfo[playerid][aIndex0][1], attachInfo[playerid][aIndex0][2], attachInfo[playerid][aIndex0][3], attachInfo[playerid][aIndex0][4], 
			attachInfo[playerid][aIndex0][5], PlayerInfo[playerid][pSQLID]);	
		}
		case SAVE_INDEX_1: {
			mysql_format(SQL, query, sizeof(query), "UPDATE `player_accessory` SET `Index1` = '%f|%f|%f|%f|%f|%f' WHERE `UserID` = %d", attachInfo[playerid][aIndex1][0], attachInfo[playerid][aIndex1][1], attachInfo[playerid][aIndex1][2], attachInfo[playerid][aIndex1][3], attachInfo[playerid][aIndex1][4], 
			attachInfo[playerid][aIndex1][5], PlayerInfo[playerid][pSQLID]);	
		}
		case SAVE_INDEX_2: {
			mysql_format(SQL, query, sizeof(query), "UPDATE `player_accessory` SET `Index2` = '%f|%f|%f|%f|%f|%f' WHERE `UserID` = %d", attachInfo[playerid][aIndex2][0], attachInfo[playerid][aIndex2][1], attachInfo[playerid][aIndex2][2], attachInfo[playerid][aIndex2][3], attachInfo[playerid][aIndex2][4], 
			attachInfo[playerid][aIndex2][5], PlayerInfo[playerid][pSQLID]);	
		}
		case SAVE_INDEX_3: {
			mysql_format(SQL, query, sizeof(query), "UPDATE `player_accessory` SET `Index3` = '%f|%f|%f|%f|%f|%f' WHERE `UserID` = %d", attachInfo[playerid][aIndex3][0], attachInfo[playerid][aIndex3][1], attachInfo[playerid][aIndex3][2], attachInfo[playerid][aIndex3][3], attachInfo[playerid][aIndex3][4], 
			attachInfo[playerid][aIndex3][5], PlayerInfo[playerid][pSQLID]);	
		}
		case SAVE_INDEX_4: {
			mysql_format(SQL, query, sizeof(query), "UPDATE `player_accessory` SET `Index4` = '%f|%f|%f|%f|%f|%f' WHERE `UserID` = %d", attachInfo[playerid][aIndex4][0], attachInfo[playerid][aIndex4][1], attachInfo[playerid][aIndex4][2], attachInfo[playerid][aIndex4][3], attachInfo[playerid][aIndex4][4], 
			attachInfo[playerid][aIndex4][5], PlayerInfo[playerid][pSQLID]);	
		}
		case SAVE_INDEX_5: {
			mysql_format(SQL, query, sizeof(query), "UPDATE `player_accessory` SET `Index5` = '%f|%f|%f|%f|%f|%f' WHERE `UserID` = %d", attachInfo[playerid][aIndex5][0], attachInfo[playerid][aIndex5][1], attachInfo[playerid][aIndex5][2], attachInfo[playerid][aIndex5][3], attachInfo[playerid][aIndex5][4], 
			attachInfo[playerid][aIndex5][5], PlayerInfo[playerid][pSQLID]);	
		}
		case SAVE_INDEX_6: {
			mysql_format(SQL, query, sizeof(query), "UPDATE `player_accessory` SET `Index6` = '%f|%f|%f|%f|%f|%f' WHERE `UserID` = %d", attachInfo[playerid][aIndex6][0], attachInfo[playerid][aIndex6][1], attachInfo[playerid][aIndex6][2], attachInfo[playerid][aIndex6][3], attachInfo[playerid][aIndex6][4], 
			attachInfo[playerid][aIndex6][5], PlayerInfo[playerid][pSQLID]);	
		}
		case SAVE_INDEX_7: {
			mysql_format(SQL, query, sizeof(query), "UPDATE `player_accessory` SET `Index7` = '%f|%f|%f|%f|%f|%f' WHERE `UserID` = %d", attachInfo[playerid][aIndex7][0], attachInfo[playerid][aIndex7][1], attachInfo[playerid][aIndex7][2], attachInfo[playerid][aIndex7][3], attachInfo[playerid][aIndex7][4], 
			attachInfo[playerid][aIndex7][5], PlayerInfo[playerid][pSQLID]);	
		}
		case SAVE_INDEX_8: {
			mysql_format(SQL, query, sizeof(query), "UPDATE `player_accessory` SET `Index8` = '%f|%f|%f|%f|%f|%f' WHERE `UserID` = %d", attachInfo[playerid][aIndex8][0], attachInfo[playerid][aIndex8][1], attachInfo[playerid][aIndex8][2], attachInfo[playerid][aIndex8][3], attachInfo[playerid][aIndex8][4], 
			attachInfo[playerid][aIndex8][5], PlayerInfo[playerid][pSQLID]);	
		}
		case SAVE_INDEX_9: {
			mysql_format(SQL, query, sizeof(query), "UPDATE `player_accessory` SET `Index9` = '%f|%f|%f|%f|%f|%f' WHERE `UserID` = %d", attachInfo[playerid][aIndex9][0], attachInfo[playerid][aIndex9][1], attachInfo[playerid][aIndex9][2], attachInfo[playerid][aIndex9][3], attachInfo[playerid][aIndex9][4], 
			attachInfo[playerid][aIndex9][5], PlayerInfo[playerid][pSQLID]);	
		}
	}
	mysql_tquery(SQL, query, "", "");		
	return 1;
}

show_accs_tds(playerid) {
	for(new i = 0; i < sizeof(AccsTD); i++) TextDrawShowForPlayer(playerid, AccsTD[i]);
	for(new i = 0; i < sizeof(AccsPTD); i++) PlayerTextDrawShow(playerid, AccsPTD[i]);	
	SelectTextDraw(playerid, 0xFFFFFF50);	
	return 1;
}

hide_accs_tds(playerid) {
	for(new i = 0; i < sizeof(AccsTD); i++) TextDrawHideForPlayer(playerid, AccsTD[i]);
	for(new i = 0; i < sizeof(AccsPTD); i++) PlayerTextDrawHide(playerid, AccsPTD[i]);		
	return 1;
}

load_accs_td() {
	AccsTD[0] = TextDrawCreate(38.333320, 165.940734, "box");
	TextDrawLetterSize(AccsTD[0], 0.000000, 18.833332);
	TextDrawTextSize(AccsTD[0], 157.000000, 0.000000);
	TextDrawAlignment(AccsTD[0], 1);
	TextDrawColor(AccsTD[0], -1);
	TextDrawUseBox(AccsTD[0], 1);
	TextDrawBoxColor(AccsTD[0], 141);
	TextDrawSetShadow(AccsTD[0], 0);
	TextDrawSetOutline(AccsTD[0], 0);
	TextDrawBackgroundColor(AccsTD[0], 255);
	TextDrawFont(AccsTD[0], 1);
	TextDrawSetProportional(AccsTD[0], 1);
	TextDrawSetShadow(AccsTD[0], 0);

	AccsTD[1] = TextDrawCreate(38.500057, 338.518524, "box");
	TextDrawLetterSize(AccsTD[1], 0.000000, -0.133337);
	TextDrawTextSize(AccsTD[1], 156.899993, 0.000000);
	TextDrawAlignment(AccsTD[1], 1);
	TextDrawColor(AccsTD[1], -1);
	TextDrawUseBox(AccsTD[1], 1);
	TextDrawBoxColor(AccsTD[1], 882572287);
	TextDrawSetShadow(AccsTD[1], 0);
	TextDrawSetOutline(AccsTD[1], 0);
	TextDrawBackgroundColor(AccsTD[1], 255);
	TextDrawFont(AccsTD[1], 1);
	TextDrawSetProportional(AccsTD[1], 1);
	TextDrawSetShadow(AccsTD[1], 0);

	AccsTD[2] = TextDrawCreate(38.366718, 166.370361, "box");
	TextDrawLetterSize(AccsTD[2], 0.000000, 6.066660);
	TextDrawTextSize(AccsTD[2], 157.000000, 0.000000);
	TextDrawAlignment(AccsTD[2], 1);
	TextDrawColor(AccsTD[2], -1);
	TextDrawUseBox(AccsTD[2], 1);
	TextDrawBoxColor(AccsTD[2], 882572074);
	TextDrawSetShadow(AccsTD[2], 0);
	TextDrawSetOutline(AccsTD[2], 0);
	TextDrawBackgroundColor(AccsTD[2], 255);
	TextDrawFont(AccsTD[2], 1);
	TextDrawSetProportional(AccsTD[2], 1);
	TextDrawSetShadow(AccsTD[2], 0);

	AccsTD[3] = TextDrawCreate(38.366741, 164.296264, "box");
	TextDrawLetterSize(AccsTD[3], 0.000000, -0.066670);
	TextDrawTextSize(AccsTD[3], 157.000000, 0.000000);
	TextDrawAlignment(AccsTD[3], 1);
	TextDrawColor(AccsTD[3], -1);
	TextDrawUseBox(AccsTD[3], 1);
	TextDrawBoxColor(AccsTD[3], 882572287);
	TextDrawSetShadow(AccsTD[3], 0);
	TextDrawSetOutline(AccsTD[3], 0);
	TextDrawBackgroundColor(AccsTD[3], 255);
	TextDrawFont(AccsTD[3], 1);
	TextDrawSetProportional(AccsTD[3], 1);
	TextDrawSetShadow(AccsTD[3], 0);

	AccsTD[4] = TextDrawCreate(71.333236, 260.103607, "BUY");
	TextDrawLetterSize(AccsTD[4], 0.209333, 1.131258);
	TextDrawTextSize(AccsTD[4], 10.000000, 42.000000);
	TextDrawAlignment(AccsTD[4], 2);
	TextDrawColor(AccsTD[4], -1);
	TextDrawUseBox(AccsTD[4], 1);
	TextDrawBoxColor(AccsTD[4], 882572099);
	TextDrawSetShadow(AccsTD[4], 1);
	TextDrawSetOutline(AccsTD[4], 0);
	TextDrawBackgroundColor(AccsTD[4], 28);
	TextDrawFont(AccsTD[4], 2);
	TextDrawSetProportional(AccsTD[4], 1);
	TextDrawSetShadow(AccsTD[4], 1);
	TextDrawSetSelectable(AccsTD[4], true);

	AccsTD[5] = TextDrawCreate(122.599914, 260.103607, "Cancel");
	TextDrawLetterSize(AccsTD[5], 0.209333, 1.131258);
	TextDrawTextSize(AccsTD[5], 10.000000, 42.000000);
	TextDrawAlignment(AccsTD[5], 2);
	TextDrawColor(AccsTD[5], -1);
	TextDrawUseBox(AccsTD[5], 1);
	TextDrawBoxColor(AccsTD[5], 882572099);
	TextDrawSetShadow(AccsTD[5], 1);
	TextDrawSetOutline(AccsTD[5], 0);
	TextDrawBackgroundColor(AccsTD[5], 28);
	TextDrawFont(AccsTD[5], 2);
	TextDrawSetProportional(AccsTD[5], 1);
	TextDrawSetShadow(AccsTD[5], 1);
	TextDrawSetSelectable(AccsTD[5], true);

	AccsTD[6] = TextDrawCreate(74.666702, 306.562927, "RESET");
	TextDrawLetterSize(AccsTD[6], 0.353666, 1.865481);
	TextDrawTextSize(AccsTD[6], 105.000000, 52.000000);
	TextDrawAlignment(AccsTD[6], 1);
	TextDrawColor(AccsTD[6], -1);
	TextDrawSetShadow(AccsTD[6], 1);
	TextDrawSetOutline(AccsTD[6], 0);
	TextDrawBackgroundColor(AccsTD[6], 255);
	TextDrawFont(AccsTD[6], 2);
	TextDrawSetProportional(AccsTD[6], 1);
	TextDrawSetShadow(AccsTD[6], 1);
	TextDrawSetSelectable(AccsTD[6], true);

	AccsTD[7] = TextDrawCreate(55.000022, 307.507324, "<");
	TextDrawLetterSize(AccsTD[7], 0.353666, 1.865481);
	TextDrawTextSize(AccsTD[7], 66.000000, 20.000000);
	TextDrawAlignment(AccsTD[7], 1);
	TextDrawColor(AccsTD[7], -1);
	TextDrawBoxColor(AccsTD[7], 255);
	TextDrawSetShadow(AccsTD[7], 1);
	TextDrawSetOutline(AccsTD[7], 0);
	TextDrawBackgroundColor(AccsTD[7], 255);
	TextDrawFont(AccsTD[7], 2);
	TextDrawSetProportional(AccsTD[7], 1);
	TextDrawSetShadow(AccsTD[7], 1);
	TextDrawSetSelectable(AccsTD[7], true);

	AccsTD[8] = TextDrawCreate(130.666748, 307.392547, ">");
	TextDrawLetterSize(AccsTD[8], 0.353666, 1.865481);
	TextDrawTextSize(AccsTD[8], 140.000000, 20.000000);
	TextDrawAlignment(AccsTD[8], 1);
	TextDrawColor(AccsTD[8], -1);
	TextDrawBoxColor(AccsTD[8], 255);
	TextDrawSetShadow(AccsTD[8], 1);
	TextDrawSetOutline(AccsTD[8], 0);
	TextDrawBackgroundColor(AccsTD[8], 255);
	TextDrawFont(AccsTD[8], 2);
	TextDrawSetProportional(AccsTD[8], 1);
	TextDrawSetShadow(AccsTD[8], 1);
	TextDrawSetSelectable(AccsTD[8], true);

	AccsTD[9] = TextDrawCreate(38.433361, 299.925842, "box");
	TextDrawLetterSize(AccsTD[9], 0.000000, -0.300000);
	TextDrawTextSize(AccsTD[9], 157.000000, 0.000000);
	TextDrawAlignment(AccsTD[9], 1);
	TextDrawColor(AccsTD[9], -1);
	TextDrawUseBox(AccsTD[9], 1);
	TextDrawBoxColor(AccsTD[9], 121);
	TextDrawSetShadow(AccsTD[9], 0);
	TextDrawSetOutline(AccsTD[9], 0);
	TextDrawBackgroundColor(AccsTD[9], 255);
	TextDrawFont(AccsTD[9], 1);
	TextDrawSetProportional(AccsTD[9], 1);
	TextDrawSetShadow(AccsTD[9], 0);

	AccsTD[10] = TextDrawCreate(56.333347, 185.136886, "<");
	TextDrawLetterSize(AccsTD[10], 0.353666, 1.865481);
	TextDrawTextSize(AccsTD[10], 67.000000, 10.000000);
	TextDrawAlignment(AccsTD[10], 1);
	TextDrawColor(AccsTD[10], -1);
	TextDrawBoxColor(AccsTD[10], 255);
	TextDrawSetShadow(AccsTD[10], 1);
	TextDrawSetOutline(AccsTD[10], 0);
	TextDrawBackgroundColor(AccsTD[10], 255);
	TextDrawFont(AccsTD[10], 2);
	TextDrawSetProportional(AccsTD[10], 1);
	TextDrawSetShadow(AccsTD[10], 1);
	TextDrawSetSelectable(AccsTD[10], true);

	AccsTD[11] = TextDrawCreate(127.666679, 184.307250, ">");
	TextDrawLetterSize(AccsTD[11], 0.353666, 1.865481);
	TextDrawTextSize(AccsTD[11], 137.000000, 10.000000);
	TextDrawAlignment(AccsTD[11], 1);
	TextDrawColor(AccsTD[11], -1);
	TextDrawBoxColor(AccsTD[11], 255);
	TextDrawSetShadow(AccsTD[11], 1);
	TextDrawSetOutline(AccsTD[11], 0);
	TextDrawBackgroundColor(AccsTD[11], 255);
	TextDrawFont(AccsTD[11], 2);
	TextDrawSetProportional(AccsTD[11], 1);
	TextDrawSetShadow(AccsTD[11], 1);
	TextDrawSetSelectable(AccsTD[11], true);

	AccsTD[12] = TextDrawCreate(97.933235, 277.525878, "Edit");
	TextDrawLetterSize(AccsTD[12], 0.209333, 1.131258);
	TextDrawTextSize(AccsTD[12], 10.000000, 42.000000);
	TextDrawAlignment(AccsTD[12], 2);
	TextDrawColor(AccsTD[12], -1);
	TextDrawUseBox(AccsTD[12], 1);
	TextDrawBoxColor(AccsTD[12], 882572099);
	TextDrawSetShadow(AccsTD[12], 1);
	TextDrawSetOutline(AccsTD[12], 0);
	TextDrawBackgroundColor(AccsTD[12], 28);
	TextDrawFont(AccsTD[12], 2);
	TextDrawSetProportional(AccsTD[12], 1);
	TextDrawSetShadow(AccsTD[12], 1);
	TextDrawSetSelectable(AccsTD[12], true);
	return 1;
}

load_accs_ptd(playerid) {
	AccsPTD[0] = CreatePlayerTextDraw(playerid, 95.999977, 238.118499, "Price: ~g~$10.000");
	PlayerTextDrawLetterSize(playerid, AccsPTD[0], 0.207332, 1.168593);
	PlayerTextDrawAlignment(playerid, AccsPTD[0], 2);
	PlayerTextDrawColor(playerid, AccsPTD[0], -1);
	PlayerTextDrawSetShadow(playerid, AccsPTD[0], 1);
	PlayerTextDrawSetOutline(playerid, AccsPTD[0], 0);
	PlayerTextDrawBackgroundColor(playerid, AccsPTD[0], 255);
	PlayerTextDrawFont(playerid, AccsPTD[0], 2);
	PlayerTextDrawSetProportional(playerid, AccsPTD[0], 1);
	PlayerTextDrawSetShadow(playerid, AccsPTD[0], 1);

	AccsPTD[1] = CreatePlayerTextDraw(playerid, 50.999996, 147.533325, "");
	PlayerTextDrawLetterSize(playerid, AccsPTD[1], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, AccsPTD[1], 90.000000, 90.000000);
	PlayerTextDrawAlignment(playerid, AccsPTD[1], 1);
	PlayerTextDrawColor(playerid, AccsPTD[1], -1);
	PlayerTextDrawSetShadow(playerid, AccsPTD[1], 0);
	PlayerTextDrawSetOutline(playerid, AccsPTD[1], 0);
	PlayerTextDrawBackgroundColor(playerid, AccsPTD[1], 0);
	PlayerTextDrawFont(playerid, AccsPTD[1], 5);
	PlayerTextDrawSetProportional(playerid, AccsPTD[1], 0);
	PlayerTextDrawSetShadow(playerid, AccsPTD[1], 0);
	PlayerTextDrawSetPreviewModel(playerid, AccsPTD[1], 18951);
	PlayerTextDrawSetPreviewRot(playerid, AccsPTD[1], 163.000000, 253.000000, 181.000000, 1.204378);

	AccsPTD[2] = CreatePlayerTextDraw(playerid, 156.333389, 164.696228, "1/41");
	PlayerTextDrawLetterSize(playerid, AccsPTD[2], 0.202333, 1.326221);
	PlayerTextDrawAlignment(playerid, AccsPTD[2], 3);
	PlayerTextDrawColor(playerid, AccsPTD[2], -1);
	PlayerTextDrawSetShadow(playerid, AccsPTD[2], 1);
	PlayerTextDrawSetOutline(playerid, AccsPTD[2], 0);
	PlayerTextDrawBackgroundColor(playerid, AccsPTD[2], 255);
	PlayerTextDrawFont(playerid, AccsPTD[2], 2);
	PlayerTextDrawSetProportional(playerid, AccsPTD[2], 1);
	PlayerTextDrawSetShadow(playerid, AccsPTD[2], 1);
	return 1;
}


exit_accs(playerid) {
	hide_accs_tds(playerid);
	SetPVarInt(playerid, "accs", 0);
	CancelSelectTextDraw(playerid);
	check_save(playerid);
	return 1;
}

show_accs_dialog(playerid) {
	new string[128];
	format(string, sizeof(string), "Hats (%d)\nGlasses (%d)\nWatches (%d)\nLasers (%d)\nHand Items (%d)\nMasks & Gang Bandanas (%d)\nBack Items (%d)\nSpecial Items (%d)", 
	count_objects(0), count_objects(1), count_objects(2), count_objects(3), count_objects(4), count_objects(5), count_objects(6), count_objects(7));
	ShowPlayerDialog(playerid, DIALOG_ACCS, DIALOG_STYLE_LIST, "SERVER: Clothes", string, "Select", "Cancel");
}
