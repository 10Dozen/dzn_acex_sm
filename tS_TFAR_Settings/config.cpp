class CfgPatches
{
	class tS_TFAR_Settings
	{		
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_MAIN", "task_force_radio"};
		author[] = {"10Dozen"};
	};
};

class Extended_PostInit_EventHandlers
{
	class tS_TFAR_Settings
	{
		init = "call ('\tS_TFAR_Settings\init.sqf' call SLX_XEH_COMPILE)";
	};
};

class CfgFunctions
{
	class TFAR
	{
		class Radio
		{
			file="tS_TFAR_Settings\fn";
			class TaskForceArrowheadRadioInit{postInit = 1;};
			class ServerInit;
			class ClientInit;
			// A
			class activeLrRadio;
			class activeSwRadio;
			class addEventHandler;
			// B
			class backpackLr;
			// C
			class calcTerrainInterception;
			class canSpeak;
			class canUseSWRadio;
			class canUseLRRadio;
			class canUseDDRadio;
			class copyRadioSettingMenu;
			class CopySettings;
			class currentDirection;
			class currentLRFrequency;
			class currentSWFrequency;
			class currentUnit;
			// D
			class defaultPositionCoordinates;
			// E
			class eyeDepth;
			// F
			class fireEventHandlers;
			class forceSpectator;
			// G
			class generateDDFreq;
			class generateLrSettings;
			class generateSwSettings;
			class generateFrequencies;
			class getVehicleSide;
			class getSwRadioCode;
			class getLrRadioCode;
			class getSwChannel;
			class getLrChannel;
			class getSwStereo;
			class getSwFrequency;
			class getLrFrequency;
			class getLrStereo;
			class getSwVolume;
			class getLrVolume;
			class getSwSettings;
			class getLrSettings;
			class getNearPlayers;
			class getTeamSpeakServerName;
			class getTeamSpeakChannelName;
			class getConfigProperty;
			class getLrRadioProperty;
			class GetChannelFrequency;
			class getSideRadio;
			class getTransmittingDistanceMultiplicator;
			class getAdditionalLrStereo;
			class getAdditionalSwStereo;
			class getAdditionalLrChannel;
			class getAdditionalSwChannel;
			class getCurrentSwStereo;
			class getCurrentLrStereo;
			class getDefaultRadioClasses;
			class getRadioOwner;
			class getSwSpeakers;
			class getLrSpeakers;
			// H
			class hasVehicleRadio;
			class haveProgrammator;
			class hideHint;
			class haveDDRadio;
			class haveLRRadio;
			class haveSWRadio;
			// I
			class initialiseBaseModule;
			class initialiseFreqModule;
			class initialiseEnforceUsageModule;
			class inWaterHint;
			class isAbleToUseRadio;
			class isForcedCurator;
			class isPrototypeRadio;
			class isRadio;
			class isSameRadio;
			class isSpeaking;
			class isTeamSpeakPluginEnabled;
			class isTurnedOut;
			class isVehicleIsolated;
			// L
			class lrRadioSubMenu;
			class lrRadioMenu;
			class lrRadiosList;
			// O
			class objectInterception;
			class onAdditionalSwTangentReleased;
			class onAdditionalSwTangentPressed;
			class onAdditionalLRTangentReleased;
			class onAdditionalLRTangentPressed;
			class onDDTangentPressed;
			class onDDTangentReleased;
			class onDDTangentReleasedHack;
			class onLRTangentPressed;
			class onLRTangentReleased;
			class onLRTangentReleasedHack;
			class onSwTangentPressed;
			class onSwTangentReleased;
			class onSwTangentPressedHack;
			class onSwTangentReleasedHack;
			class onSpeakVolumeChange;
			class onSwDialogOpen;
			class onLRDialogOpen;
			class onDDDialogOpen;
			class onGroundHint;
			// P
			class preparePositionCoordinates;
			class processSWChannelKeys;
			class processSWCycleKeys;
			class processSWStereoKeys;
			class processLRChannelKeys;
			class processLRCycleKeys;
			class processLRStereoKeys;
			class processPlayerPositions;
			class processSpeakerRadios;
			class processCuratorKey;
			class ProcessTangent;
			class processGroupFrequencySettings;
			class processRespawn;
			// R
			class removeEventHandler;
			class radioReplaceProcess;
			class requestRadios;
			class radioToRequestCount;
			class radiosList;
			class radiosListSorted;
			// S
			class setSwSettings;
			class setLrSettings;
			class setSwStereo;
			class setLrChannel;
			class setSwChannel;
			class setSwVolume;
			class setLrVolume;
			class setSwFrequency;
			class setLrFrequency;
			class setLrStereo;
			class sendPlayerInfo;
			class sendPlayerKilled;
			class setSwSpeakers;
			class setAdditionalLrStereo;
			class setAdditionalSwStereo;
			class setAdditionalLrChannel;
			class setAdditionalSwChannel;
			class showHint;
			class ShowRadioInfo;
			class setSwRadioCode;
			class setLrRadioCode;
			class setVoiceVolume;
			class setActiveSwRadio;
			class setActiveLrRadio;
			class setLongRangeRadioFrequency;
			class setPersonalRadioFrequency;
			class sendVersionInfo;
			class swRadioSubMenu;
			class swRadioMenu;
			class sendFrequencyInfo;
			class showRadioVolume;
			class SetChannelFrequency;
			class setRadioOwner;
			class setLrSpeakers;
			class showRadioSpeakers;
			class sessionTracker;
			class setVolumeViaDialog;
			class setChannelViaDialog;
			// U
			class updateDDDialog;
			class updateSWDialogToChannel;
			class updateLRDialogToChannel;
			class updateProgrammatorDialog;
			class unableToUseHint;
			// V
			class vehicleId;
			class vehicleIsIsolatedAndInside;
			class vehicleLr;
		};
	};
};
