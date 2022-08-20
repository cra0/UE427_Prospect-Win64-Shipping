#pragma once
#include "common.h"
namespace SDK
{


    enum class EYLoginAuthType : uint8_t //Enum OnlineSubsystem.EYLoginAuthType
    {
        None = 0,
        EgsToken = 1,
        EgsDevTool = 2,
        CustomId = 3,
        Steam = 4,
        EosOAuth = 5,
        EYLoginAuthType_MAX = 6
    };

    enum class Default__Enum : uint8_t //Enum CoreUObject.Default__Enum
    {
    };

    enum class EInAppPurchaseState : uint8_t //Enum OnlineSubsystem.EInAppPurchaseState
    {
        Unknown = 0,
        Success = 1,
        Failed = 2,
        Cancelled = 3,
        Invalid = 4,
        NotAllowed = 5,
        Restored = 6,
        AlreadyOwned = 7,
        EInAppPurchaseState_MAX = 8
    };

    enum class EMPMatchOutcome : uint8_t //Enum OnlineSubsystem.EMPMatchOutcome
    {
        None = 0,
        Quit = 1,
        Won = 2,
        Lost = 3,
        Tied = 4,
        TimeExpired = 5,
        First = 6,
        Second = 7,
        Third = 8,
        Fourth = 9,
        EMPMatchOutcome_MAX = 10
    };

    enum class EYLoginResult : uint8_t //Enum Backend.EYLoginResult
    {
        OK = 0,
        InvalidToken = 1,
        AlreadyConnected = 2,
        InvalidVersion = 3,
        BadResponse = 4,
        ServerUnavailable = 5,
        SteamUnavailable = 6,
        NotLoggedInToSteam = 7,
        SteamAuthorizationFailed = 8,
        EpicAuthorizationFailed = 9,
        AuthorizationFailed = 10,
        LegalAgreementsNotAccepted = 11,
        AcceptingLegalAgreementsFailed = 12,
        IsInLoginQueue = 13,
        EYLoginResult_MAX = 14
    };

    enum class EYPlayfabLoginType : uint8_t //Enum YOnlineSubsystemUtilsPlugin.EYPlayfabLoginType
    {
        Invalid = 0,
        Custom = 1,
        PlayfabAccount = 2,
        AlreadyLoggedIn = 3,
        EpicLogin = 4,
        EosToken = 5,
        EosDevTool = 6,
        Steam = 7,
        EosOAuth = 8,
        EYPlayfabLoginType_MAX = 9
    };

    enum class EYAuthorizationUsageType : uint8_t //Enum YOnlineSubsystemUtilsPlugin.EYAuthorizationUsageType
    {
        Internal = 0,
        Steam = 1,
        EGS = 2,
        Playfab = 3,
        Custom = 4,
        EYAuthorizationUsageType_MAX = 5
    };

    enum class EInAppPurchaseStatus : uint8_t //Enum OnlineSubsystemUtils.EInAppPurchaseStatus
    {
        Invalid = 0,
        Failed = 1,
        Deferred = 2,
        Canceled = 3,
        Purchased = 4,
        Restored = 5,
        EInAppPurchaseStatus_MAX = 6
    };

    enum class EOnlineProxyStoreOfferDiscountType : uint8_t //Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
    {
        NotOnSale = 0,
        Percentage = 1,
        DiscountAmount = 2,
        PayAmount = 3,
        EOnlineProxyStoreOfferDiscountType_MAX = 4
    };

    enum class EInterpCurveMode : uint8_t //Enum CoreUObject.EInterpCurveMode
    {
        CIM_Linear = 0,
        CIM_CurveAuto = 1,
        CIM_Constant = 2,
        CIM_CurveUser = 3,
        CIM_CurveBreak = 4,
        CIM_CurveAutoClamped = 5,
        CIM_MAX = 6
    };

    enum class ERangeBoundTypes : uint8_t //Enum CoreUObject.ERangeBoundTypes
    {
        Exclusive = 0,
        Inclusive = 1,
        Open = 2,
        ERangeBoundTypes_MAX = 3
    };

    enum class ELocalizedTextSourceCategory : uint8_t //Enum CoreUObject.ELocalizedTextSourceCategory
    {
        Game = 0,
        Engine = 1,
        Editor = 2,
        ELocalizedTextSourceCategory_MAX = 3
    };

    enum class EAutomationEventType : uint8_t //Enum CoreUObject.EAutomationEventType
    {
        Info = 0,
        Warning = 1,
        Error = 2,
        EAutomationEventType_MAX = 3
    };

    enum class EBeaconConnectionState : uint8_t //Enum OnlineSubsystemUtils.EBeaconConnectionState
    {
        Invalid = 0,
        Closed = 1,
        Pending = 2,
        Open = 3,
        EBeaconConnectionState_MAX = 4
    };

    enum class EClientRequestType : uint8_t //Enum OnlineSubsystemUtils.EClientRequestType
    {
        NonePending = 0,
        ExistingSessionReservation = 1,
        ReservationUpdate = 2,
        EmptyServerReservation = 3,
        Reconnect = 4,
        Abandon = 5,
        ReservationRemoveMembers = 6,
        AddOrUpdateReservation = 7,
        EClientRequestType_MAX = 8
    };

    enum class EPartyReservationResult : uint8_t //Enum OnlineSubsystemUtils.EPartyReservationResult
    {
        NoResult = 0,
        RequestPending = 1,
        GeneralError = 2,
        PartyLimitReached = 3,
        IncorrectPlayerCount = 4,
        RequestTimedOut = 5,
        ReservationDuplicate = 6,
        ReservationNotFound = 7,
        ReservationAccepted = 8,
        ReservationDenied = 9,
        ReservationDenied_CrossPlayRestriction = 10,
        ReservationDenied_Banned = 11,
        ReservationRequestCanceled = 12,
        ReservationInvalid = 13,
        BadSessionId = 14,
        ReservationDenied_ContainsExistingPlayers = 15,
        EPartyReservationResult_MAX = 16
    };

    enum class ESpectatorClientRequestType : uint8_t //Enum OnlineSubsystemUtils.ESpectatorClientRequestType
    {
        NonePending = 0,
        ExistingSessionReservation = 1,
        ReservationUpdate = 2,
        EmptyServerReservation = 3,
        Reconnect = 4,
        Abandon = 5,
        ESpectatorClientRequestType_MAX = 6
    };

    enum class ESpectatorReservationResult : uint8_t //Enum OnlineSubsystemUtils.ESpectatorReservationResult
    {
        NoResult = 0,
        RequestPending = 1,
        GeneralError = 2,
        SpectatorLimitReached = 3,
        IncorrectPlayerCount = 4,
        RequestTimedOut = 5,
        ReservationDuplicate = 6,
        ReservationNotFound = 7,
        ReservationAccepted = 8,
        ReservationDenied = 9,
        ReservationDenied_CrossPlayRestriction = 10,
        ReservationDenied_Banned = 11,
        ReservationRequestCanceled = 12,
        ReservationInvalid = 13,
        BadSessionId = 14,
        ReservationDenied_ContainsExistingPlayers = 15,
        ESpectatorReservationResult_MAX = 16
    };

    enum class EYAttachmentType : uint8_t //Enum BackendModels.EYAttachmentType
    {
        NONE = 0,
        GRANT = 1,
        MAX = 2
    };

    enum class EYCharacterCustomizationUpdateResult : uint8_t //Enum BackendModels.EYCharacterCustomizationUpdateResult
    {
        OK = 0,
        INVALID_ID = 1,
        UNKNOWN_ERROR = 2,
        EYCharacterCustomizationUpdateResult_MAX = 3
    };

    enum class EYSquadInviteResult : uint8_t //Enum BackendModels.EYSquadInviteResult
    {
        OK = 0,
        TARGET_OFFLINE = 1,
        INTERNAL_ERROR = 2,
        EYSquadInviteResult_MAX = 3
    };

    enum class EYForceStartResult : uint8_t //Enum BackendModels.EYForceStartResult
    {
        OK = 0,
        EMPTY_QUEUE = 1,
        WRONG_GAME_MODE = 2,
        EYForceStartResult_MAX = 3
    };

    enum class EYCheatResult : uint8_t //Enum BackendModels.EYCheatResult
    {
        OK = 0,
        NO_SUCH_USER = 1,
        NO_SUCH_ITEM = 2,
        ALREADY_REMOVED = 3,
        NULL_CONTEXT = 4,
        FAILED_REQ_DESERIALIZATION = 5,
        FAILED_GET_USERDATA = 6,
        WRONG_INPUT_DATA = 7,
        EYCheatResult_MAX = 8
    };

    enum class EYMatchmakeGameModeType : uint8_t //Enum BackendModels.EYMatchmakeGameModeType
    {
        NONE = 0,
        SOLO = 1,
        DUO = 2,
        SQUAD = 3,
        MAX = 255
    };

    enum class EYUpdateCategory : uint8_t //Enum BackendModels.EYUpdateCategory
    {
        GAME_MODES = 0,
        GAME_MAX = 1
    };

    enum class EYClaimContractRewardsStatus : uint8_t //Enum BackendModels.EYClaimContractRewardsStatus
    {
        UNKNOWN_ERROR = 0,
        CLAIMING_ONE_TIME_CONTRACT = 1,
        FAILED_FACTION_PARSING = 2,
        FAILED_GETTING_FACTION_PROGRESSION = 3,
        FAILED_GETTING_STATIC_DATA = 4,
        FAILED_GIVING_REWARDS = 5,
        FAILED_REMOVAL_ACTIVE_CONTRACT = 6,
        FAILED_SETTING_DATA = 7,
        NO_ACTIVE_CONTRACT = 8,
        NO_CONTRACTS_BOARDS_DATA_FOUND = 9,
        NO_FACTION_DATA = 10,
        STASH_FULL = 11,
        STASH_LIMIT_NOT_FOUND = 12,
        WRONG_CONTRACT_ID = 13,
        WRONG_FACTION_ID = 14,
        WRONG_FACTION_REP = 15,
        PROGRESS_MISSING = 16,
        FAILED_ACQUIRING_REDIS_LOCK = 17,
        OK = 18,
        MAX = 19
    };

    enum class EYActivateContractRequestStatus : uint8_t //Enum BackendModels.EYActivateContractRequestStatus
    {
        UNKNOWN_ERROR = 0,
        CONTRACT_OF_THIS_FACTION_IS_ALREADY_ACTIVE = 1,
        FAILED_GETTING_PROGRESS = 2,
        FAILED_GETTING_STATIC_DATA = 3,
        FAILED_STORING_CONTRACT = 4,
        NOT_ENOUGH_MONEY = 5,
        NO_ACTIVE_CONTRACT = 6,
        NO_CONTRACTS_BOARDS_DATA_FOUND = 7,
        WRONG_CONTRACT_ID = 8,
        WRONG_FACTION_ID = 9,
        WRONG_STORED_FACTION_ID = 10,
        ALREADY_ACTIVE = 11,
        NOT_UNLOCKED = 12,
        JOB_NOT_ON_BOARD = 13,
        OK = 14,
        MAX = 15
    };

    enum class EYRepairItemResult : uint8_t //Enum BackendModels.EYRepairItemResult
    {
        UNKNOWN_ERROR = 0,
        OK = 1,
        NOT_ENOUGH_RESOURCES = 2,
        PLAYER_INVENTORY_NOT_FOUND = 3,
        WRONG_ITEMID = 4,
        WRONG_USERID = 5,
        MAX = 6
    };

    enum class EYStartItemCraftingResultStatus : uint8_t //Enum BackendModels.EYStartItemCraftingResultStatus
    {
        UNKNOWN_ERROR = 0,
        OK = 1,
        STASH_FULL = 2,
        NOT_ENOUGH_RESOURCES = 3,
        MAX = 4
    };

    enum class EYPurchaseWeaponShopItemStatus : uint8_t //Enum BackendModels.EYPurchaseWeaponShopItemStatus
    {
        UNKNOWN_ERROR = 0,
        OK = 1,
        NOT_ENOUGH_RESOURCES = 2,
        PLAYER_INVENTORY_NOT_FOUND = 3,
        RECIPE_DATA_NOT_FOUND = 4,
        STASH_FULL = 5,
        WRONG_ITEMID = 6,
        WRONG_USERID = 7,
        WRONG_SHOPITEMBELONGSTO = 8,
        MAX = 9
    };

    enum class EYResponse : uint8_t //Enum BackendModels.EYResponse
    {
        OK = 0,
        UNKNOWN = 1,
        EYResponse_MAX = 2
    };

    enum class EYFortunaPassToastReponseType : uint8_t //Enum BackendModels.EYFortunaPassToastReponseType
    {
        UnknownError = 0,
        ServerError = 1,
        StashFull = 2,
        Ok = 3,
        EYFortunaPassToastReponseType_MAX = 4
    };

    enum class EYClaimGeneratorIncomeStatus : uint8_t //Enum BackendModels.EYClaimGeneratorIncomeStatus
    {
        UNKNOWN_ERROR = 0,
        OK = 1,
        STASH_FULL = 2,
        MAX = 3
    };

    enum class EYUpdateGlobalVanityResult : uint8_t //Enum BackendModels.EYUpdateGlobalVanityResult
    {
        OK = 0,
        INVALID_ID = 1,
        NOT_OWNED_ITEM = 2,
        UNKNOWN_ERROR = 3,
        EYUpdateGlobalVanityResult_MAX = 4
    };

    enum class EYClaimGrantState : uint8_t //Enum BackendModels.EYClaimGrantState
    {
        UNCLAIMED = 0,
        BEING_CLAIMED = 1,
        CLAIMED = 2,
        EYClaimGrantState_MAX = 3
    };

    enum class EYClaimGrantResult : uint8_t //Enum BackendModels.EYClaimGrantResult
    {
        OK = 0,
        INVALID_ID = 1,
        ALREADY_CLAIMED = 2,
        WRONG_USER_GUID = 3,
        INVALID_GRANT_SETUP = 4,
        UNKNOWN_ERROR = 5,
        EYClaimGrantResult_MAX = 6
    };

    enum class EYGrantType : uint8_t //Enum BackendModels.EYGrantType
    {
        None = 0,
        Blueprint = 1,
        CustomItem = 2,
        Modification = 3,
        Vanity = 4,
        HardCurrency = 5,
        SoftCurrency = 6,
        CraftingMaterial = 7,
        SeasonXP = 8,
        SeasonLevel = 9,
        SeasonPass = 10,
        LoreItem = 11,
        ProspectorLevelXP = 12,
        InsuranceCurrency = 13,
        MAX = 14
    };

    enum class EYUpdateReadStateResult : uint8_t //Enum BackendModels.EYUpdateReadStateResult
    {
        OK = 0,
        INVALID_ID = 1,
        NO_UPDATE = 2,
        UNKNOWN_ERROR = 3,
        EYUpdateReadStateResult_MAX = 4
    };

    enum class EYInboxMessageType : uint8_t //Enum BackendModels.EYInboxMessageType
    {
        None = 0,
        FoundersPack = 1,
        Progression = 2,
        MAX = 3
    };

    enum class EYInsuranceType : uint8_t //Enum BackendModels.EYInsuranceType
    {
        None = 0,
        Basic = 1,
        Premium = 2,
        EYInsuranceType_MAX = 3
    };

    enum class EYCompleteInventoryUpdateReason : uint8_t //Enum BackendModels.EYCompleteInventoryUpdateReason
    {
        NONE = 0,
        UI_DRAG = 1,
        ITEM_STATE_CHANGED = 2,
        END_OF_MATCH_ESCAPED = 3,
        END_OF_MATCH_DIED = 4,
        CHEAT = 5,
        INVENTORY_OVERFLOW = 6,
        MAX = 7
    };

    enum class EYGetUsersCurrenciesResult : uint8_t //Enum BackendModels.EYGetUsersCurrenciesResult
    {
        OK = 0,
        UNKNOWN_ERROR = 1,
        EYGetUsersCurrenciesResult_MAX = 2
    };

    enum class EYVanityUpdateResult : uint8_t //Enum BackendModels.EYVanityUpdateResult
    {
        OK = 0,
        INVALID_ID = 1,
        INCOMPATIBLE_ITEM = 2,
        TOO_FEW_OWNED_ITEMS = 3,
        UNKNOWN_ERROR = 4,
        EYVanityUpdateResult_MAX = 5
    };

    enum class EYCustomizationCategory : uint8_t //Enum BackendModels.EYCustomizationCategory
    {
        Invalid = 0,
        None = 1,
        CharacterDefault = 2,
        Head = 3,
        Boots = 4,
        Chest = 5,
        BaseSuit = 6,
        Gloves = 7,
        WeaponPreview = 8,
        Emote = 9,
        WeaponNear = 10,
        WeaponDefault = 11,
        WeaponFar = 12,
        WeaponCharm = 13,
        KitPreview = 14,
        CategoryPlaceholder12 = 15,
        CategoryPlaceholder13 = 16,
        Archetype = 17,
        MeleeWeapon = 18,
        Overview = 19,
        Banner = 20,
        Spray = 21,
        Item = 22,
        Vehicle = 23,
        Droppod = 24,
        EYCustomizationCategory_MAX = 25
    };

    enum class EYDefaultItemSlot : uint8_t //Enum BackendModels.EYDefaultItemSlot
    {
        Unassigned = 0,
        StarterWeapon = 1,
        Gadget = 2,
        Kit = 3,
        Ability0 = 4,
        Ability1 = 5,
        Ability2 = 6,
        Ability3 = 7,
        Consumable0 = 8,
        Consumable1 = 9,
        Consumable2 = 10,
        Consumable3 = 11,
        Device0 = 12,
        Device1 = 13,
        Device2 = 14,
        Device3 = 15,
        Miscellaneous0 = 16,
        Miscellaneous1 = 17,
        Miscellaneous2 = 18,
        Miscellaneous3 = 19,
        Shield = 20,
        EYDefaultItemSlot_MAX = 21
    };

    enum class EYCustomizationBodyType : uint8_t //Enum BackendModels.EYCustomizationBodyType
    {
        INVALID = 0,
        MaleDefault = 1,
        FemaleDefault = 2,
        Both = 3,
        EYCustomizationBodyType_MAX = 4
    };

    enum class EYVanityType : uint8_t //Enum BackendModels.EYVanityType
    {
        None = 0,
        Weapon = 1,
        Character = 2,
        Melee = 3,
        Banner = 4,
        DeathEmote = 5,
        NormalEmote = 6,
        Vehicle = 7,
        Droppod = 8,
        SocialProfile = 9,
        Spray = 10,
        WeaponCharm = 11,
        Pet = 12,
        MaterialVariation = 13,
        ArcheType = 14,
        MAX = 15
    };

    enum class EYModificationSlotType : uint8_t //Enum BackendModels.EYModificationSlotType
    {
        None = 0,
        Optics = 1,
        Magazine = 2,
        Barrel = 3,
        Muzzle = 4,
        Stock = 5,
        Ability = 6,
        ForeGrip = 7,
        Tactical = 8,
        AmmoConverter = 9,
        Receiver = 10,
        Attachment = 11,
        ScannerUpgrade1 = 12,
        ScannerUpgrade2 = 13,
        ScannerUpgrade3 = 14,
        ScannerUpgrade4 = 15,
        RearGrip = 16,
        MAX = 17
    };

    enum class EYAmmoType : uint8_t //Enum BackendModels.EYAmmoType
    {
        None = 0,
        Bullet = 1,
        Beam = 2,
        Gauss = 3,
        Explosives = 4,
        EnergyLight = 5,
        EnergyHeavy = 6,
        Shard = 7,
        Missiles = 8,
        Needler = 9,
        PrototypeCategory_01 = 10,
        PrototypeCategory_02 = 11,
        PrototypeCategory_03 = 12,
        PrototypeCategory_04 = 13,
        Overheat = 14,
        All = 15,
        MAX = 16
    };

    enum class EYMiscellaneousType : uint8_t //Enum BackendModels.EYMiscellaneousType
    {
        Invalid = 0,
        None = 1,
        Vehicle = 2,
        MAX = 3
    };

    enum class EYDeviceCategory : uint8_t //Enum BackendModels.EYDeviceCategory
    {
        AssaultRifle = 0,
        Pistol = 1,
        SMG = 2,
        SniperRifle = 3,
        HeavyWeapon = 4,
        Shotgun = 5,
        BurstRifle = 6,
        Exotic = 7,
        MissileLauncher = 8,
        Scanner = 9,
        All = 10,
        INVALID = 11,
        MAX = 12
    };

    enum class EYDeviceClass : uint8_t //Enum BackendModels.EYDeviceClass
    {
        None = 0,
        Gadget = 1,
        PrimaryWeapon = 2,
        SecondaryWeapon = 3,
        Tool = 4,
        All = 5,
        MAX = 6
    };

    enum class EYItemType : uint8_t //Enum BackendModels.EYItemType
    {
        None = 0,
        Device = 1,
        Ability = 2,
        Kit = 3,
        Consumable = 4,
        Mod = 5,
        Blueprint = 6,
        Material = 7,
        Miscellaneous = 8,
        Currency = 9,
        Vanity = 10,
        Experience = 11,
        Lore = 12,
        Vehicle = 13,
        Ammo = 14,
        Upgrade = 15,
        Collectible = 16,
        QuestItem = 17,
        Shield = 18,
        ProspectorBadge = 19,
        TechTreeNode = 20,
        PlayerQuartersLevel = 21,
        PassiveGenerator = 22,
        Bag = 23,
        Helmet = 24,
        Key = 25,
        MeleeWeapon = 26,
        All = 27,
        MAX = 28
    };

    enum class EYItemOriginType : uint8_t //Enum BackendModels.EYItemOriginType
    {
        Undefined = 0,
        Contract = 1,
        Craft = 2,
        Creature = 3,
        Debug = 4,
        EntitlementsEGS = 5,
        EntitlementsSteam = 6,
        FortunaPass = 7,
        FTUE = 8,
        Generator = 9,
        Insurance = 10,
        MapContainerLoot = 11,
        MapPickupLoot = 12,
        MatchSplitStack = 13,
        MatchUnknown = 14,
        PlayFabDashboard = 15,
        PremiumShop = 16,
        PurchaseICA = 17,
        PurchaseKorolev = 18,
        PurchaseOsiris = 19,
        PurchaseQuickShop = 20,
        Retention = 21,
        StationSplitStack = 22,
        TocMigration = 23,
        TwitchDrop = 24,
        Uplink = 25,
        WeaponAttachment = 26,
        ManualScript = 27,
        VictimCompensation = 28,
        EYItemOriginType_MAX = 29
    };

    enum class EYMatchServerSocialAdmissionType : uint8_t //Enum BackendModels.EYMatchServerSocialAdmissionType
    {
        Mixed = 0,
        Solo = 1,
        Squad = 2,
        EYMatchServerSocialAdmissionType_MAX = 3
    };

    enum class EYMatchmakingDebugOption : uint8_t //Enum BackendModels.EYMatchmakingDebugOption
    {
        None = 0,
        ForceMultiplayerStation = 1,
        ForceSinglePlayerStation = 2,
        EYMatchmakingDebugOption_MAX = 3
    };

    enum class EYPlayfabMatchmakingState : uint8_t //Enum BackendModels.EYPlayfabMatchmakingState
    {
        Invalid = 0,
        WaitingForPlayers = 1,
        WaitingForMatch = 2,
        WaitingForServer = 3,
        Canceled = 4,
        Matched = 5,
        EYPlayfabMatchmakingState_MAX = 6
    };

    enum class EYMatchmakingResult : uint8_t //Enum BackendModels.EYMatchmakingResult
    {
        OK = 0,
        ALREADY_IN_QUEUE = 1,
        ALREADY_IN_ROOM = 2,
        NOT_IN_MATCHMAKING = 3,
        CANCELED = 4,
        NO_GAME_MODE = 5,
        GAME_MODE_INACTIVE = 6,
        UNKNOWN_REGION = 7,
        CHANGED_REGIONS = 8,
        EYMatchmakingResult_MAX = 9
    };

    enum class EYMatchmakingBlocker : uint8_t //Enum BackendModels.EYMatchmakingBlocker
    {
        None = 0,
        MaintenanceMode = 1,
        ClientOutdated = 2,
        EYMatchmakingBlocker_MAX = 3
    };

    enum class EYMuteResult : uint8_t //Enum BackendModels.EYMuteResult
    {
        OK = 0,
        NOT_ADMIN = 1,
        INVALID_REASON = 2,
        UNKNOWN = 3,
        EYMuteResult_MAX = 4
    };

    enum class EYMuteReason : uint8_t //Enum BackendModels.EYMuteReason
    {
        INAPROPRIATE_LANGUAGE = 0,
        SPAM = 1,
        HATE_SPEECH = 2,
        PLAYER_ABUSE = 3,
        EYMuteReason_MAX = 4
    };

    enum class EYChannelType : uint8_t //Enum BackendModels.EYChannelType
    {
        NONE = 0,
        SYSTEM = 1,
        GLOBAL = 2,
        WHISPER = 3,
        SQUAD = 4,
        TEAM = 5,
        MATCH = 6,
        SPECTATE = 7,
        GLOBAL_EN = 8,
        GLOBAL_GER = 9,
        GLOBAL_RU = 10,
        GLOBAL_FR = 11,
        GLOBAL_ES = 12,
        GLOBAL_PTBR = 13,
        GLOBAL_PL = 14,
        GLOBAL_TR = 15,
        GLOBAL_ZH = 16,
        CHEAT_CHANNEL = 17,
        EYChannelType_MAX = 18
    };

    enum class EYMetaMissionType : uint8_t //Enum BackendModels.EYMetaMissionType
    {
        Mission = 0,
        DailyChallenge = 1,
        WeeklyChallenge = 2,
        SeasonChallenge = 3,
        RepeatedDaily = 4,
        ShowcaseTitle = 5,
        PersistentChallenge = 6,
        None = 7,
        EYMetaMissionType_MAX = 8
    };

    enum class EYRankedCategory : uint8_t //Enum BackendModels.EYRankedCategory
    {
        None = 0,
        Solo = 1,
        Duo = 2,
        Squad = 3,
        Rewards = 4,
        MAX = 5
    };

    enum class EYRewardResult : uint8_t //Enum BackendModels.EYRewardResult
    {
        OK = 0,
        INVALID_REWARD = 1,
        EYRewardResult_MAX = 2
    };

    enum class EYPlayerRewardSource : uint8_t //Enum BackendModels.EYPlayerRewardSource
    {
        IN_GAME = 0,
        END_OF_MATCH = 1,
        BASE = 2,
        VICTORY_POINTS_MULTIPLIER = 3,
        EVACUATION = 4,
        SCOREBOARD_PLACEMENT = 5,
        MISSION = 6,
        GRANTS = 7,
        DIED = 8,
        MAX = 9
    };

    enum class EYServerCommand : uint8_t //Enum BackendModels.EYServerCommand
    {
        OK = 0,
        SHUT_DOWN = 1,
        TRAVEL_BACK = 2,
        EYServerCommand_MAX = 3
    };

    enum class EYUserStateChangeType : uint8_t //Enum BackendModels.EYUserStateChangeType
    {
        None = 0,
        Registered = 1,
        Left = 2,
        MAX = 3
    };

    enum class EYGetCurrencyResult : uint8_t //Enum BackendModels.EYGetCurrencyResult
    {
        FAILED = 0,
        SUCCEEDED = 1,
        EYGetCurrencyResult_MAX = 2
    };

    enum class EYPurchaseOfferState : uint8_t //Enum BackendModels.EYPurchaseOfferState
    {
        UNPURCHASED = 0,
        BEING_PURCHASED = 1,
        PURCHASED = 2,
        EYPurchaseOfferState_MAX = 3
    };

    enum class EYPurchaseOfferResult : uint8_t //Enum BackendModels.EYPurchaseOfferResult
    {
        OK = 0,
        INVALID_ID = 1,
        ALREADY_PURCHASED = 2,
        OFFER_NOT_ACTIVE = 3,
        NOT_ENOUGH_CURRENCY = 4,
        INVALID_CURRENCY_TYPE = 5,
        INVALID_AMOUNT = 6,
        UNKNOWN_ERROR = 7,
        EYPurchaseOfferResult_MAX = 8
    };

    enum class EYOfferUnavailableReason : uint8_t //Enum BackendModels.EYOfferUnavailableReason
    {
        None = 0,
        AlreadyPurchased = 1,
        BeingPurchased = 2,
        NotEnoughFunds = 3,
        PurchasedSeasonPass = 4,
        MaxSeasonLevel = 5,
        OwningAllVanityItems = 6,
        QuantityValueTooHigh = 7,
        OtherOffersRequired = 8,
        Unknown = 9,
        MAX = 10
    };

    enum class EYOfferRarity : uint8_t //Enum BackendModels.EYOfferRarity
    {
        Invalid = 0,
        Common = 1,
        Uncommon = 2,
        Rare = 3,
        MAX = 4
    };

    enum class EYShopCategory : uint8_t //Enum BackendModels.EYShopCategory
    {
        None = 0,
        Special = 1,
        Daily = 2,
        Weekly = 3,
        HardCurrency = 4,
        FounderPacks = 5,
        SeasonPass = 6,
        MAX = 7
    };

    enum class EYPromotionType : uint8_t //Enum BackendModels.EYPromotionType
    {
        None = 0,
        SpecialDaily = 1,
        SpecialWeekly = 2,
        Currency = 3,
        Season = 4,
        StarterPacks = 5,
        MAX = 6
    };

    enum class EYCurrencyType : uint8_t //Enum BackendModels.EYCurrencyType
    {
        Invalid = 0,
        SoftCurrency = 1,
        HardCurrency = 2,
        RealCurrency = 3,
        InsuranceCurrency = 4,
        MAX = 5
    };

    enum class EYSocialRequestResult : uint8_t //Enum BackendModels.EYSocialRequestResult
    {
        OK = 0,
        GUID_PARSING_FAILED = 1,
        GOT_NO_SOCIAL_PROFILES = 2,
        UNKNOWN_ERROR = 3,
        EYSocialRequestResult_MAX = 4
    };

    enum class EYFriendActionResult : uint8_t //Enum BackendModels.EYFriendActionResult
    {
        OK = 0,
        INVALID_TARGET = 1,
        ALREADY_FRIEND = 2,
        NOT_IN_STATION = 3,
        EMPTY_PENDING_INVITES = 4,
        NONEXISTENT_FRIEND_REQUEST = 5,
        INTERNAL_ERROR = 6,
        EYFriendActionResult_MAX = 7
    };

    enum class EYPlatformTypes : uint8_t //Enum BackendModels.EYPlatformTypes
    {
        INTERNAL = 0,
        EGS = 1,
        PLAYFAB = 3,
        UNITIALIZED = 4,
        EYPlatformTypes_MAX = 5
    };

    enum class EYGetFriendListResult : uint8_t //Enum BackendModels.EYGetFriendListResult
    {
        OK = 0,
        UNKNOWN_ERROR = 1,
        EYGetFriendListResult_MAX = 2
    };

    enum class EYSocialNotificationBackend : uint8_t //Enum BackendModels.EYSocialNotificationBackend
    {
        NONE = 0,
        ONLINE = 1,
        OFFLINE = 2,
        ADDED = 3,
        MATCH = 4,
        EYSocialNotificationBackend_MAX = 5
    };

    enum class EYSocialGameStateType : uint8_t //Enum BackendModels.EYSocialGameStateType
    {
        IN_STATION = 0,
        IN_MATCH = 1,
        UNKNOWN = 2,
        EYSocialGameStateType_MAX = 3
    };

    enum class EYFriendState : uint8_t //Enum BackendModels.EYFriendState
    {
        NONE = 0,
        PENDINGINBOUND = 1,
        PENDINGOUTBOUND = 2,
        ACCEPTED = 3,
        BLOCKED = 4,
        SUGGESTED = 5,
        EYFriendState_MAX = 6
    };

    enum class EYSquadUpdateState : uint8_t //Enum BackendModels.EYSquadUpdateState
    {
        JOINED = 0,
        LEFT = 1,
        GENERIC = 2,
        DISBANDED = 3,
        EYSquadUpdateState_MAX = 4
    };

    enum class EYUserState : uint8_t //Enum BackendModels.EYUserState
    {
        IN_STATION = 0,
        IN_MATCH = 1,
        IN_EOM = 2,
        IN_MAX = 3
    };

    enum class EYSquadActionResult : uint8_t //Enum BackendModels.EYSquadActionResult
    {
        OK = 0,
        INVALID_TARGET = 1,
        TARGET_OFFLINE = 2,
        INITIATOR_OFFLINE = 3,
        INVALID_SQUAD = 4,
        SQUAD_FULL = 5,
        INVALID_SQUAD_INVITE = 6,
        INTERNAL_ERROR = 7,
        SQUAD_DISBANDED = 8,
        NO_LEADER = 9,
        IN_MATCH = 10,
        EYSquadActionResult_MAX = 11
    };

    enum class EYClientStationRequestResult : uint8_t //Enum BackendModels.EYClientStationRequestResult
    {
        INVALID_USERI_ID = 0,
        UNKNOWN = 1,
        PENDING = 2,
        TRAVEL_SINGLEPLAYER = 3,
        OK = 4,
        EYClientStationRequestResult_MAX = 5
    };

    enum class EYStationCommandResultType : uint8_t //Enum BackendModels.EYStationCommandResultType
    {
        UNKNOWN_ERROR = 0,
        OK = 1,
        SHUTDOWN = 2,
        EYStationCommandResultType_MAX = 3
    };

    enum class EYMatchOutcome : uint8_t //Enum BackendModels.EYMatchOutcome
    {
        NONE = 0,
        END_OF_MATCH_ESCAPED = 1,
        END_OF_MATCH_DIED_PLAYER = 2,
        END_OF_MATCH_DIED_CREATURE = 3,
        END_OF_MATCH_DIED_OTHER = 4,
        MAX = 5
    };

    enum class EYTwitchDropToastReponseType : uint8_t //Enum BackendModels.EYTwitchDropToastReponseType
    {
        UnknownError = 0,
        ServerError = 1,
        StashFull = 2,
        Ok = 3,
        EYTwitchDropToastReponseType_MAX = 4
    };

    enum class EYPlayerSessionMatchState : uint8_t //Enum BackendModels.EYPlayerSessionMatchState
    {
        Invalid = 0,
        Match = 1,
        Escape = 2,
        Pending = 4,
        EYPlayerSessionMatchState_MAX = 5
    };

    enum class EYPlayfabMessageExecutionType : uint8_t //Enum YPlayfabServices.EYPlayfabMessageExecutionType
    {
        RequestToPlayfab = 0,
        Response = 1,
        Notify = 2,
        EYPlayfabMessageExecutionType_MAX = 3
    };

    enum class EYPlayfabMessageRequestResponse : uint8_t //Enum YPlayfabServices.EYPlayfabMessageRequestResponse
    {
        Invalid = 0,
        NotLoggedIn = 1,
        Pending = 2,
        Ok = 3,
        EYPlayfabMessageRequestResponse_MAX = 4
    };

    enum class ETextGender : uint8_t //Enum Engine.ETextGender
    {
        Masculine = 0,
        Feminine = 1,
        Neuter = 2,
        ETextGender_MAX = 3
    };

    enum class EFormatArgumentType : uint8_t //Enum Engine.EFormatArgumentType
    {
        Int = 0,
        UInt = 1,
        Float = 2,
        Double = 3,
        Text = 4,
        Gender = 5,
        EFormatArgumentType_MAX = 6
    };

    enum class ETouchIndex : uint8_t //Enum InputCore.ETouchIndex
    {
        Touch1 = 0,
        Touch2 = 1,
        Touch3 = 2,
        Touch4 = 3,
        Touch5 = 4,
        Touch6 = 5,
        Touch7 = 6,
        Touch8 = 7,
        Touch9 = 8,
        Touch10 = 9,
        CursorPointerIndex = 10,
        MAX_TOUCHES = 11,
        ETouchIndex_MAX = 12
    };

    enum class EEndPlayReason : uint8_t //Enum Engine.EEndPlayReason
    {
        Destroyed = 0,
        LevelTransition = 1,
        EndPlayInEditor = 2,
        RemovedFromWorld = 3,
        Quit = 4,
        EEndPlayReason_MAX = 5
    };

    enum class ETickingGroup : uint8_t //Enum Engine.ETickingGroup
    {
        TG_PrePhysics = 0,
        TG_StartPhysics = 1,
        TG_DuringPhysics = 2,
        TG_EndPhysics = 3,
        TG_PostPhysics = 4,
        TG_PostUpdateWork = 5,
        TG_LastDemotable = 6,
        TG_NewlySpawned = 7,
        TG_MAX = 8
    };

    enum class EComponentCreationMethod : uint8_t //Enum Engine.EComponentCreationMethod
    {
        Native = 0,
        SimpleConstructionScript = 1,
        UserConstructionScript = 2,
        Instance = 3,
        EComponentCreationMethod_MAX = 4
    };

    enum class ETemperatureSeverityType : uint8_t //Enum Engine.ETemperatureSeverityType
    {
        Unknown = 0,
        Good = 1,
        Bad = 2,
        Serious = 3,
        Critical = 4,
        NumSeverities = 5,
        ETemperatureSeverityType_MAX = 6
    };

    enum class EQuartzCommandQuantization : uint8_t //Enum Engine.EQuartzCommandQuantization
    {
        Bar = 0,
        Beat = 1,
        ThirtySecondNote = 2,
        SixteenthNote = 3,
        EighthNote = 4,
        QuarterNote = 5,
        HalfNote = 6,
        WholeNote = 7,
        DottedSixteenthNote = 8,
        DottedEighthNote = 9,
        DottedQuarterNote = 10,
        DottedHalfNote = 11,
        DottedWholeNote = 12,
        SixteenthNoteTriplet = 13,
        EighthNoteTriplet = 14,
        QuarterNoteTriplet = 15,
        HalfNoteTriplet = 16,
        Tick = 17,
        Count = 18,
        None = 19,
        EQuartzCommandQuantization_MAX = 20
    };

    enum class EQuartzCommandDelegateSubType : uint8_t //Enum Engine.EQuartzCommandDelegateSubType
    {
        CommandOnFailedToQueue = 0,
        CommandOnQueued = 1,
        CommandOnCanceled = 2,
        CommandOnAboutToStart = 3,
        CommandOnStarted = 4,
        Count = 5,
        EQuartzCommandDelegateSubType_MAX = 6
    };

    enum class EAudioComponentPlayState : uint8_t //Enum Engine.EAudioComponentPlayState
    {
        Playing = 0,
        Stopped = 1,
        Paused = 2,
        FadingIn = 3,
        FadingOut = 4,
        Count = 5,
        EAudioComponentPlayState_MAX = 6
    };

    enum class EPlaneConstraintAxisSetting : uint8_t //Enum Engine.EPlaneConstraintAxisSetting
    {
        Custom = 0,
        X = 1,
        Y = 2,
        Z = 3,
        UseGlobalPhysicsSetting = 4,
        EPlaneConstraintAxisSetting_MAX = 5
    };

    enum class EInterpToBehaviourType : uint8_t //Enum Engine.EInterpToBehaviourType
    {
        OneShot = 0,
        OneShot_Reverse = 1,
        Loop_Reset = 2,
        PingPong = 3,
        EInterpToBehaviourType_MAX = 4
    };

    enum class ETeleportType : uint8_t //Enum Engine.ETeleportType
    {
        None = 0,
        TeleportPhysics = 1,
        ResetPhysics = 2,
        ETeleportType_MAX = 3
    };

    enum class EPlatformInterfaceDataType : uint8_t //Enum Engine.EPlatformInterfaceDataType
    {
        PIDT_None = 0,
        PIDT_Int = 1,
        PIDT_Float = 2,
        PIDT_String = 3,
        PIDT_Object = 4,
        PIDT_Custom = 5,
        PIDT_MAX = 6
    };

    enum class ENetRole : uint8_t //Enum Engine.ENetRole
    {
        ROLE_None = 0,
        ROLE_SimulatedProxy = 1,
        ROLE_AutonomousProxy = 2,
        ROLE_Authority = 3,
        ROLE_MAX = 4
    };

    enum class EAttachLocation : uint8_t //Enum Engine.EAttachLocation
    {
        KeepRelativeOffset = 0,
        KeepWorldPosition = 1,
        SnapToTarget = 2,
        SnapToTargetIncludingScale = 3,
        EAttachLocation_MAX = 4
    };

    enum class EAttachmentRule : uint8_t //Enum Engine.EAttachmentRule
    {
        KeepRelative = 0,
        KeepWorld = 1,
        SnapToTarget = 2,
        EAttachmentRule_MAX = 3
    };

    enum class EDetachmentRule : uint8_t //Enum Engine.EDetachmentRule
    {
        KeepRelative = 0,
        KeepWorld = 1,
        EDetachmentRule_MAX = 2
    };

    enum class ENetDormancy : uint8_t //Enum Engine.ENetDormancy
    {
        DORM_Never = 0,
        DORM_Awake = 1,
        DORM_DormantAll = 2,
        DORM_DormantPartial = 3,
        DORM_Initial = 4,
        DORM_MAX = 5
    };

    enum class EAutoReceiveInput : uint8_t //Enum Engine.EAutoReceiveInput
    {
        Disabled = 0,
        Player0 = 1,
        Player1 = 2,
        Player2 = 3,
        Player3 = 4,
        Player4 = 5,
        Player5 = 6,
        Player6 = 7,
        Player7 = 8,
        EAutoReceiveInput_MAX = 9
    };

    enum class ESpawnActorCollisionHandlingMethod : uint8_t //Enum Engine.ESpawnActorCollisionHandlingMethod
    {
        Undefined = 0,
        AlwaysSpawn = 1,
        AdjustIfPossibleButAlwaysSpawn = 2,
        AdjustIfPossibleButDontSpawnIfColliding = 3,
        DontSpawnIfColliding = 4,
        ESpawnActorCollisionHandlingMethod_MAX = 5
    };

    enum class ERotatorQuantization : uint8_t //Enum Engine.ERotatorQuantization
    {
        ByteComponents = 0,
        ShortComponents = 1,
        ERotatorQuantization_MAX = 2
    };

    enum class EVectorQuantization : uint8_t //Enum Engine.EVectorQuantization
    {
        RoundWholeNumber = 0,
        RoundOneDecimal = 1,
        RoundTwoDecimals = 2,
        EVectorQuantization_MAX = 3
    };

    enum class EActorUpdateOverlapsMethod : uint8_t //Enum Engine.EActorUpdateOverlapsMethod
    {
        UseConfigDefault = 0,
        AlwaysUpdate = 1,
        OnlyUpdateMovable = 2,
        NeverUpdate = 3,
        EActorUpdateOverlapsMethod_MAX = 4
    };

    enum class EMovementMode : uint8_t //Enum Engine.EMovementMode
    {
        MOVE_None = 0,
        MOVE_Walking = 1,
        MOVE_NavWalking = 2,
        MOVE_Falling = 3,
        MOVE_Swimming = 4,
        MOVE_Flying = 5,
        MOVE_Custom = 6,
        MOVE_MAX = 7
    };

    enum class ENetworkFailure : uint8_t //Enum Engine.ENetworkFailure
    {
        NetDriverAlreadyExists = 0,
        NetDriverCreateFailure = 1,
        NetDriverListenFailure = 2,
        ConnectionLost = 3,
        ConnectionTimeout = 4,
        FailureReceived = 5,
        OutdatedClient = 6,
        OutdatedServer = 7,
        PendingConnectionFailure = 8,
        NetGuidMismatch = 9,
        NetChecksumMismatch = 10,
        ENetworkFailure_MAX = 11
    };

    enum class ETravelFailure : uint8_t //Enum Engine.ETravelFailure
    {
        NoLevel = 0,
        LoadMapFailure = 1,
        InvalidURL = 2,
        PackageMissing = 3,
        PackageVersion = 4,
        NoDownload = 5,
        TravelFailure = 6,
        CheatCommands = 7,
        PendingNetGameCreateFailure = 8,
        CloudSaveFailure = 9,
        ServerTravelFailure = 10,
        ClientTravelFailure = 11,
        ETravelFailure_MAX = 12
    };

    enum class EScreenOrientation : uint8_t //Enum Engine.EScreenOrientation
    {
        Unknown = 0,
        Portrait = 1,
        PortraitUpsideDown = 2,
        LandscapeLeft = 3,
        LandscapeRight = 4,
        FaceUp = 5,
        FaceDown = 6,
        EScreenOrientation_MAX = 7
    };

    enum class EApplicationState : uint8_t //Enum Engine.EApplicationState
    {
        Unknown = 0,
        Inactive = 1,
        Background = 2,
        Active = 3,
        EApplicationState_MAX = 4
    };

    enum class EObjectTypeQuery : uint8_t //Enum Engine.EObjectTypeQuery
    {
        ObjectTypeQuery1 = 0,
        ObjectTypeQuery2 = 1,
        ObjectTypeQuery3 = 2,
        ObjectTypeQuery4 = 3,
        ObjectTypeQuery5 = 4,
        ObjectTypeQuery6 = 5,
        ObjectTypeQuery7 = 6,
        ObjectTypeQuery8 = 7,
        ObjectTypeQuery9 = 8,
        ObjectTypeQuery10 = 9,
        ObjectTypeQuery11 = 10,
        ObjectTypeQuery12 = 11,
        ObjectTypeQuery13 = 12,
        ObjectTypeQuery14 = 13,
        ObjectTypeQuery15 = 14,
        ObjectTypeQuery16 = 15,
        ObjectTypeQuery17 = 16,
        ObjectTypeQuery18 = 17,
        ObjectTypeQuery19 = 18,
        ObjectTypeQuery20 = 19,
        ObjectTypeQuery21 = 20,
        ObjectTypeQuery22 = 21,
        ObjectTypeQuery23 = 22,
        ObjectTypeQuery24 = 23,
        ObjectTypeQuery25 = 24,
        ObjectTypeQuery26 = 25,
        ObjectTypeQuery27 = 26,
        ObjectTypeQuery28 = 27,
        ObjectTypeQuery29 = 28,
        ObjectTypeQuery30 = 29,
        ObjectTypeQuery31 = 30,
        ObjectTypeQuery32 = 31,
        ObjectTypeQuery_MAX = 32,
        EObjectTypeQuery_MAX = 33
    };

    enum class EDrawDebugTrace : uint8_t //Enum Engine.EDrawDebugTrace
    {
        None = 0,
        ForOneFrame = 1,
        ForDuration = 2,
        Persistent = 3,
        EDrawDebugTrace_MAX = 4
    };

    enum class ETraceTypeQuery : uint8_t //Enum Engine.ETraceTypeQuery
    {
        TraceTypeQuery1 = 0,
        TraceTypeQuery2 = 1,
        TraceTypeQuery3 = 2,
        TraceTypeQuery4 = 3,
        TraceTypeQuery5 = 4,
        TraceTypeQuery6 = 5,
        TraceTypeQuery7 = 6,
        TraceTypeQuery8 = 7,
        TraceTypeQuery9 = 8,
        TraceTypeQuery10 = 9,
        TraceTypeQuery11 = 10,
        TraceTypeQuery12 = 11,
        TraceTypeQuery13 = 12,
        TraceTypeQuery14 = 13,
        TraceTypeQuery15 = 14,
        TraceTypeQuery16 = 15,
        TraceTypeQuery17 = 16,
        TraceTypeQuery18 = 17,
        TraceTypeQuery19 = 18,
        TraceTypeQuery20 = 19,
        TraceTypeQuery21 = 20,
        TraceTypeQuery22 = 21,
        TraceTypeQuery23 = 22,
        TraceTypeQuery24 = 23,
        TraceTypeQuery25 = 24,
        TraceTypeQuery26 = 25,
        TraceTypeQuery27 = 26,
        TraceTypeQuery28 = 27,
        TraceTypeQuery29 = 28,
        TraceTypeQuery30 = 29,
        TraceTypeQuery31 = 30,
        TraceTypeQuery32 = 31,
        TraceTypeQuery_MAX = 32,
        ETraceTypeQuery_MAX = 33
    };

    enum class EMoveComponentAction : uint8_t //Enum Engine.EMoveComponentAction
    {
        Move = 0,
        Stop = 1,
        Return = 2,
        EMoveComponentAction_MAX = 3
    };

    enum class EQuitPreference : uint8_t //Enum Engine.EQuitPreference
    {
        Quit = 0,
        Background = 1,
        EQuitPreference_MAX = 2
    };

    enum class EGameBuildStatus : uint8_t //Enum PlayFab.EGameBuildStatus
    {
        pfenum_Available = 0,
        pfenum_Validating = 1,
        pfenum_InvalidBuildPackage = 2,
        pfenum_Processing = 3,
        pfenum_FailedToProcess = 4,
        pfenum_MAX = 5
    };

    enum class EStatisticResetIntervalOption : uint8_t //Enum PlayFab.EStatisticResetIntervalOption
    {
        pfenum_Never = 0,
        pfenum_Hour = 1,
        pfenum_Day = 2,
        pfenum_Week = 3,
        pfenum_Month = 4,
        pfenum_MAX = 5
    };

    enum class EStatisticAggregationMethod : uint8_t //Enum PlayFab.EStatisticAggregationMethod
    {
        pfenum_Last = 0,
        pfenum_Min = 1,
        pfenum_Max = 2,
        pfenum_Sum = 3
    };

    enum class ERegion : uint8_t //Enum PlayFab.ERegion
    {
        pfenum_USCentral = 0,
        pfenum_USEast = 1,
        pfenum_EUWest = 2,
        pfenum_Singapore = 3,
        pfenum_Japan = 4,
        pfenum_Brazil = 5,
        pfenum_Australia = 6,
        pfenum_MAX = 7
    };

    enum class EPfSourceType : uint8_t //Enum PlayFab.EPfSourceType
    {
        pfenum_Admin = 0,
        pfenum_BackEnd = 1,
        pfenum_GameClient = 2,
        pfenum_GameServer = 3,
        pfenum_Partner = 4,
        pfenum_Custom = 5,
        pfenum_API = 6,
        pfenum_MAX = 7
    };

    enum class EAuthTokenType : uint8_t //Enum PlayFab.EAuthTokenType
    {
        pfenum_Email = 0,
        pfenum_MAX = 1
    };

    enum class ETaskInstanceStatus : uint8_t //Enum PlayFab.ETaskInstanceStatus
    {
        pfenum_Succeeded = 0,
        pfenum_Starting = 1,
        pfenum_InProgress = 2,
        pfenum_Failed = 3,
        pfenum_Aborted = 4,
        pfenum_Stalled = 5,
        pfenum_MAX = 6
    };

    enum class EResolutionOutcome : uint8_t //Enum PlayFab.EResolutionOutcome
    {
        pfenum_Revoke = 0,
        pfenum_Reinstate = 1,
        pfenum_Manual = 2,
        pfenum_MAX = 3
    };

    enum class EPushSetupPlatform : uint8_t //Enum PlayFab.EPushSetupPlatform
    {
        pfenum_GCM = 0,
        pfenum_APNS = 1,
        pfenum_APNS_SANDBOX = 2,
        pfenum_MAX = 3
    };

    enum class EScheduledTaskType : uint8_t //Enum PlayFab.EScheduledTaskType
    {
        pfenum_CloudScript = 0,
        pfenum_ActionsOnPlayerSegment = 1,
        pfenum_CloudScriptAzureFunctions = 2,
        pfenum_InsightsScheduledScaling = 3,
        pfenum_MAX = 4
    };

    enum class EUserDataPermission : uint8_t //Enum PlayFab.EUserDataPermission
    {
        pfenum_Private = 0,
        pfenum_Public = 1,
        pfenum_MAX = 2
    };

    enum class ELoginIdentityProvider : uint8_t //Enum PlayFab.ELoginIdentityProvider
    {
        pfenum_Unknown = 0,
        pfenum_PlayFab = 1,
        pfenum_Custom = 2,
        pfenum_GameCenter = 3,
        pfenum_GooglePlay = 4,
        pfenum_Steam = 5,
        pfenum_XBoxLive = 6,
        pfenum_PSN = 7,
        pfenum_Kongregate = 8,
        pfenum_Facebook = 9,
        pfenum_IOSDevice = 10,
        pfenum_AndroidDevice = 11,
        pfenum_Twitch = 12,
        pfenum_WindowsHello = 13,
        pfenum_GameServer = 14,
        pfenum_CustomServer = 15,
        pfenum_NintendoSwitch = 16,
        pfenum_FacebookInstantGames = 17,
        pfenum_OpenIdConnect = 18,
        pfenum_Apple = 19,
        pfenum_NintendoSwitchAccount = 20,
        pfenum_MAX = 21
    };

    enum class EIdentifiedDeviceType : uint8_t //Enum PlayFab.EIdentifiedDeviceType
    {
        pfenum_Unknown = 0,
        pfenum_XboxOne = 1,
        pfenum_Scarlett = 2,
        pfenum_MAX = 3
    };

    enum class EMatchmakeStatus : uint8_t //Enum PlayFab.EMatchmakeStatus
    {
        pfenum_Complete = 0,
        pfenum_Waiting = 1,
        pfenum_GameNotFound = 2,
        pfenum_NoAvailableSlots = 3,
        pfenum_SessionClosed = 4,
        pfenum_MAX = 5
    };

    enum class ETransactionStatus : uint8_t //Enum PlayFab.ETransactionStatus
    {
        pfenum_CreateCart = 0,
        pfenum_Init = 1,
        pfenum_Approved = 2,
        pfenum_Succeeded = 3,
        pfenum_FailedByProvider = 4,
        pfenum_DisputePending = 5,
        pfenum_RefundPending = 6,
        pfenum_Refunded = 7,
        pfenum_RefundFailed = 8,
        pfenum_ChargedBack = 9,
        pfenum_FailedByUber = 10,
        pfenum_FailedByPlayFab = 11,
        pfenum_Revoked = 12,
        pfenum_TradePending = 13,
        pfenum_Traded = 14,
        pfenum_Upgraded = 15,
        pfenum_StackPending = 16,
        pfenum_Stacked = 17,
        pfenum_Other = 18,
        pfenum_Failed = 19,
        pfenum_MAX = 20
    };

    enum class ECloudScriptRevisionOption : uint8_t //Enum PlayFab.ECloudScriptRevisionOption
    {
        pfenum_Live = 0,
        pfenum_Latest = 1,
        pfenum_Specific = 2,
        pfenum_MAX = 3
    };

    enum class ETradeStatus : uint8_t //Enum PlayFab.ETradeStatus
    {
        pfenum_Invalid = 0,
        pfenum_Opening = 1,
        pfenum_Open = 2,
        pfenum_Accepting = 3,
        pfenum_Accepted = 4,
        pfenum_Filled = 5,
        pfenum_Cancelled = 6,
        pfenum_MAX = 7
    };

    enum class EAdActivity : uint8_t //Enum PlayFab.EAdActivity
    {
        pfenum_Opened = 0,
        pfenum_Closed = 1,
        pfenum_Start = 2,
        pfenum_End = 3,
        pfenum_MAX = 4
    };

    enum class EExperimentType : uint8_t //Enum PlayFab.EExperimentType
    {
        pfenum_Active = 0,
        pfenum_Snapshot = 1,
        pfenum_MAX = 2
    };

    enum class EOperationTypes : uint8_t //Enum PlayFab.EOperationTypes
    {
        pfenum_Created = 0,
        pfenum_Updated = 1,
        pfenum_Deleted = 2,
        pfenum_None = 3,
        pfenum_MAX = 4
    };

    enum class EAzureVmSize : uint8_t //Enum PlayFab.EAzureVmSize
    {
        pfenum_Standard_A1 = 0,
        pfenum_Standard_A2 = 1,
        pfenum_Standard_A3 = 2,
        pfenum_Standard_A4 = 3,
        pfenum_Standard_A1_v2 = 4,
        pfenum_Standard_A2_v2 = 5,
        pfenum_Standard_A4_v2 = 6,
        pfenum_Standard_A8_v2 = 7,
        pfenum_Standard_D1_v2 = 8,
        pfenum_Standard_D2_v2 = 9,
        pfenum_Standard_D3_v2 = 10,
        pfenum_Standard_D4_v2 = 11,
        pfenum_Standard_D5_v2 = 12,
        pfenum_Standard_D2_v3 = 13,
        pfenum_Standard_D4_v3 = 14,
        pfenum_Standard_D8_v3 = 15,
        pfenum_Standard_D16_v3 = 16,
        pfenum_Standard_F1 = 17,
        pfenum_Standard_F2 = 18,
        pfenum_Standard_F4 = 19,
        pfenum_Standard_F8 = 20,
        pfenum_Standard_F16 = 21,
        pfenum_Standard_F2s_v2 = 22,
        pfenum_Standard_F4s_v2 = 23,
        pfenum_Standard_F8s_v2 = 24,
        pfenum_Standard_F16s_v2 = 25,
        pfenum_Standard_D2as_v4 = 26,
        pfenum_Standard_D4as_v4 = 27,
        pfenum_Standard_D8as_v4 = 28,
        pfenum_Standard_D16as_v4 = 29,
        pfenum_Standard_MAX = 30
    };

    enum class EContainerFlavor : uint8_t //Enum PlayFab.EContainerFlavor
    {
        pfenum_ManagedWindowsServerCore = 0,
        pfenum_CustomLinux = 1,
        pfenum_ManagedWindowsServerCorePreview = 2,
        pfenum_Invalid = 3,
        pfenum_MAX = 4
    };

    enum class ETitleMultiplayerServerEnabledStatus : uint8_t //Enum PlayFab.ETitleMultiplayerServerEnabledStatus
    {
        pfenum_Initializing = 0,
        pfenum_Enabled = 1,
        pfenum_Disabled = 2,
        pfenum_MAX = 3
    };

    enum class EPlayerConnectionState : uint8_t //Enum PlayFab.EPlayerConnectionState
    {
        pfenum_Unassigned = 0,
        pfenum_Connecting = 1,
        pfenum_Participating = 2,
        pfenum_Participated = 3,
        pfenum_MAX = 4
    };

    enum class EGameInstanceState : uint8_t //Enum PlayFab.EGameInstanceState
    {
        pfenum_Open = 0,
        pfenum_Closed = 1,
        pfenum_MAX = 2
    };

    enum class EServerType : uint8_t //Enum PlayFab.EServerType
    {
        pfenum_Container = 0,
        pfenum_Process = 1,
        pfenum_MAX = 2
    };

    enum class EProtocolType : uint8_t //Enum PlayFab.EProtocolType
    {
        pfenum_TCP = 0,
        pfenum_UDP = 1,
        pfenum_MAX = 2
    };

    enum class EOsPlatform : uint8_t //Enum PlayFab.EOsPlatform
    {
        pfenum_Windows = 0,
        pfenum_Linux = 1,
        pfenum_MAX = 2
    };

    enum class ECancellationReason : uint8_t //Enum PlayFab.ECancellationReason
    {
        pfenum_Requested = 0,
        pfenum_Internal = 1,
        pfenum_Timeout = 2,
        pfenum_MAX = 3
    };

    enum class EAzureVmFamily : uint8_t //Enum PlayFab.EAzureVmFamily
    {
        pfenum_A = 0,
        pfenum_Av2 = 1,
        pfenum_Dv2 = 2,
        pfenum_Dv3 = 3,
        pfenum_F = 4,
        pfenum_Fsv2 = 5,
        pfenum_Dasv4 = 6,
        pfenum_MAX = 7
    };

    enum class EAzureRegion : uint8_t //Enum PlayFab.EAzureRegion
    {
        pfenum_AustraliaEast = 0,
        pfenum_AustraliaSoutheast = 1,
        pfenum_BrazilSouth = 2,
        pfenum_CentralUs = 3,
        pfenum_EastAsia = 4,
        pfenum_EastUs = 5,
        pfenum_EastUs2 = 6,
        pfenum_JapanEast = 7,
        pfenum_JapanWest = 8,
        pfenum_NorthCentralUs = 9,
        pfenum_NorthEurope = 10,
        pfenum_SouthCentralUs = 11,
        pfenum_SoutheastAsia = 12,
        pfenum_WestEurope = 13,
        pfenum_WestUs = 14,
        pfenum_ChinaEast2 = 15,
        pfenum_ChinaNorth2 = 16,
        pfenum_SouthAfricaNorth = 17,
        pfenum_CentralUsEuap = 18,
        pfenum_WestCentralUs = 19,
        pfenum_MAX = 20
    };

    enum class EExperimentState : uint8_t //Enum PlayFab.EExperimentState
    {
        pfenum_New = 0,
        pfenum_Started = 1,
        pfenum_Stopped = 2,
        pfenum_Deleted = 3,
        pfenum_MAX = 4
    };

    enum class EAnalysisTaskState : uint8_t //Enum PlayFab.EAnalysisTaskState
    {
        pfenum_Waiting = 0,
        pfenum_ReadyForSubmission = 1,
        pfenum_SubmittingToPipeline = 2,
        pfenum_Running = 3,
        pfenum_Completed = 4,
        pfenum_Failed = 5,
        pfenum_Canceled = 6,
        pfenum_MAX = 7
    };

    enum class ETriggerType : uint8_t //Enum PlayFab.ETriggerType
    {
        pfenum_HTTP = 0,
        pfenum_Queue = 1,
        pfenum_MAX = 2
    };

    enum class EUserOrigination : uint8_t //Enum PlayFab.EUserOrigination
    {
        pfenum_Organic = 0,
        pfenum_Steam = 1,
        pfenum_Google = 2,
        pfenum_Amazon = 3,
        pfenum_Facebook = 4,
        pfenum_Kongregate = 5,
        pfenum_GamersFirst = 6,
        pfenum_Unknown = 7,
        pfenum_IOS = 8,
        pfenum_LoadTest = 9,
        pfenum_Android = 10,
        pfenum_PSN = 11,
        pfenum_GameCenter = 12,
        pfenum_CustomId = 13,
        pfenum_XboxLive = 14,
        pfenum_Parse = 15,
        pfenum_Twitch = 16,
        pfenum_WindowsHello = 17,
        pfenum_ServerCustomId = 18,
        pfenum_NintendoSwitchDeviceId = 19,
        pfenum_FacebookInstantGamesId = 20,
        pfenum_OpenIdConnect = 21,
        pfenum_Apple = 22,
        pfenum_NintendoSwitchAccount = 23,
        pfenum_MAX = 24
    };

    enum class ETitleActivationStatus : uint8_t //Enum PlayFab.ETitleActivationStatus
    {
        pfenum_None = 0,
        pfenum_ActivatedTitleKey = 1,
        pfenum_PendingSteam = 2,
        pfenum_ActivatedSteam = 3,
        pfenum_RevokedSteam = 4,
        pfenum_MAX = 5
    };

    enum class ESubscriptionProviderStatus : uint8_t //Enum PlayFab.ESubscriptionProviderStatus
    {
        pfenum_NoError = 0,
        pfenum_Cancelled = 1,
        pfenum_UnknownError = 2,
        pfenum_BillingError = 3,
        pfenum_ProductUnavailable = 4,
        pfenum_CustomerDidNotAcceptPriceChange = 5,
        pfenum_FreeTrial = 6,
        pfenum_PaymentPending = 7,
        pfenum_MAX = 8
    };

    enum class EStatisticVersionStatus : uint8_t //Enum PlayFab.EStatisticVersionStatus
    {
        pfenum_Active = 0,
        pfenum_SnapshotPending = 1,
        pfenum_Snapshot = 2,
        pfenum_ArchivalPending = 3,
        pfenum_Archived = 4,
        pfenum_MAX = 5
    };

    enum class EStatisticVersionArchivalStatus : uint8_t //Enum PlayFab.EStatisticVersionArchivalStatus
    {
        pfenum_NotScheduled = 0,
        pfenum_Scheduled = 1,
        pfenum_Queued = 2,
        pfenum_InProgress = 3,
        pfenum_Complete = 4,
        pfenum_MAX = 5
    };

    enum class EResultTableNodeType : uint8_t //Enum PlayFab.EResultTableNodeType
    {
        pfenum_ItemId = 0,
        pfenum_TableId = 1,
        pfenum_MAX = 2
    };

    enum class EPushNotificationPlatform : uint8_t //Enum PlayFab.EPushNotificationPlatform
    {
        pfenum_ApplePushNotificationService = 0,
        pfenum_GoogleCloudMessaging = 1,
        pfenum_MAX = 2
    };

    enum class EEmailVerificationStatus : uint8_t //Enum PlayFab.EEmailVerificationStatus
    {
        pfenum_Unverified = 0,
        pfenum_Pending = 1,
        pfenum_Confirmed = 2,
        pfenum_MAX = 3
    };

    enum class EEffectType : uint8_t //Enum PlayFab.EEffectType
    {
        pfenum_Allow = 0,
        pfenum_Deny = 1,
        pfenum_MAX = 2
    };

    enum class ECurrency : uint8_t //Enum PlayFab.ECurrency
    {
        pfenum_AED = 0,
        pfenum_AFN = 1,
        pfenum_ALL = 2,
        pfenum_AMD = 3,
        pfenum_ANG = 4,
        pfenum_AOA = 5,
        pfenum_ARS = 6,
        pfenum_AUD = 7,
        pfenum_AWG = 8,
        pfenum_AZN = 9,
        pfenum_BAM = 10,
        pfenum_BBD = 11,
        pfenum_BDT = 12,
        pfenum_BGN = 13,
        pfenum_BHD = 14,
        pfenum_BIF = 15,
        pfenum_BMD = 16,
        pfenum_BND = 17,
        pfenum_BOB = 18,
        pfenum_BRL = 19,
        pfenum_BSD = 20,
        pfenum_BTN = 21,
        pfenum_BWP = 22,
        pfenum_BYR = 23,
        pfenum_BZD = 24,
        pfenum_CAD = 25,
        pfenum_CDF = 26,
        pfenum_CHF = 27,
        pfenum_CLP = 28,
        pfenum_CNY = 29,
        pfenum_COP = 30,
        pfenum_CRC = 31,
        pfenum_CUC = 32,
        pfenum_CUP = 33,
        pfenum_CVE = 34,
        pfenum_CZK = 35,
        pfenum_DJF = 36,
        pfenum_DKK = 37,
        pfenum_DOP = 38,
        pfenum_DZD = 39,
        pfenum_EGP = 40,
        pfenum_ERN = 41,
        pfenum_ETB = 42,
        pfenum_EUR = 43,
        pfenum_FJD = 44,
        pfenum_FKP = 45,
        pfenum_GBP = 46,
        pfenum_GEL = 47,
        pfenum_GGP = 48,
        pfenum_GHS = 49,
        pfenum_GIP = 50,
        pfenum_GMD = 51,
        pfenum_GNF = 52,
        pfenum_GTQ = 53,
        pfenum_GYD = 54,
        pfenum_HKD = 55,
        pfenum_HNL = 56,
        pfenum_HRK = 57,
        pfenum_HTG = 58,
        pfenum_HUF = 59,
        pfenum_IDR = 60,
        pfenum_ILS = 61,
        pfenum_IMP = 62,
        pfenum_INR = 63,
        pfenum_IQD = 64,
        pfenum_IRR = 65,
        pfenum_ISK = 66,
        pfenum_JEP = 67,
        pfenum_JMD = 68,
        pfenum_JOD = 69,
        pfenum_JPY = 70,
        pfenum_KES = 71,
        pfenum_KGS = 72,
        pfenum_KHR = 73,
        pfenum_KMF = 74,
        pfenum_KPW = 75,
        pfenum_KRW = 76,
        pfenum_KWD = 77,
        pfenum_KYD = 78,
        pfenum_KZT = 79,
        pfenum_LAK = 80,
        pfenum_LBP = 81,
        pfenum_LKR = 82,
        pfenum_LRD = 83,
        pfenum_LSL = 84,
        pfenum_LYD = 85,
        pfenum_MAD = 86,
        pfenum_MDL = 87,
        pfenum_MGA = 88,
        pfenum_MKD = 89,
        pfenum_MMK = 90,
        pfenum_MNT = 91,
        pfenum_MOP = 92,
        pfenum_MRO = 93,
        pfenum_MUR = 94,
        pfenum_MVR = 95,
        pfenum_MWK = 96,
        pfenum_MXN = 97,
        pfenum_MYR = 98,
        pfenum_MZN = 99,
        pfenum_NAD = 100,
        pfenum_NGN = 101,
        pfenum_NIO = 102,
        pfenum_NOK = 103,
        pfenum_NPR = 104,
        pfenum_NZD = 105,
        pfenum_OMR = 106,
        pfenum_PAB = 107,
        pfenum_PEN = 108,
        pfenum_PGK = 109,
        pfenum_PHP = 110,
        pfenum_PKR = 111,
        pfenum_PLN = 112,
        pfenum_PYG = 113,
        pfenum_QAR = 114,
        pfenum_RON = 115,
        pfenum_RSD = 116,
        pfenum_RUB = 117,
        pfenum_RWF = 118,
        pfenum_SAR = 119,
        pfenum_SBD = 120,
        pfenum_SCR = 121,
        pfenum_SDG = 122,
        pfenum_SEK = 123,
        pfenum_SGD = 124,
        pfenum_SHP = 125,
        pfenum_SLL = 126,
        pfenum_SOS = 127,
        pfenum_SPL = 128,
        pfenum_SRD = 129,
        pfenum_STD = 130,
        pfenum_SVC = 131,
        pfenum_SYP = 132,
        pfenum_SZL = 133,
        pfenum_THB = 134,
        pfenum_TJS = 135,
        pfenum_TMT = 136,
        pfenum_TND = 137,
        pfenum_TOP = 138,
        pfenum_TRY = 139,
        pfenum_TTD = 140,
        pfenum_TVD = 141,
        pfenum_TWD = 142,
        pfenum_TZS = 143,
        pfenum_UAH = 144,
        pfenum_UGX = 145,
        pfenum_USD = 146,
        pfenum_UYU = 147,
        pfenum_UZS = 148,
        pfenum_VEF = 149,
        pfenum_VND = 150,
        pfenum_VUV = 151,
        pfenum_WST = 152,
        pfenum_XAF = 153,
        pfenum_XCD = 154,
        pfenum_XDR = 155,
        pfenum_XOF = 156,
        pfenum_XPF = 157,
        pfenum_YER = 158,
        pfenum_ZAR = 159,
        pfenum_ZMW = 160,
        pfenum_ZWD = 161,
        pfenum_MAX = 162
    };

    enum class ECountryCode : uint8_t //Enum PlayFab.ECountryCode
    {
        pfenum_AF = 0,
        pfenum_AX = 1,
        pfenum_AL = 2,
        pfenum_DZ = 3,
        pfenum_AS = 4,
        pfenum_AD = 5,
        pfenum_AO = 6,
        pfenum_AI = 7,
        pfenum_AQ = 8,
        pfenum_AG = 9,
        pfenum_AR = 10,
        pfenum_AM = 11,
        pfenum_AW = 12,
        pfenum_AU = 13,
        pfenum_AT = 14,
        pfenum_AZ = 15,
        pfenum_BS = 16,
        pfenum_BH = 17,
        pfenum_BD = 18,
        pfenum_BB = 19,
        pfenum_BY = 20,
        pfenum_BE = 21,
        pfenum_BZ = 22,
        pfenum_BJ = 23,
        pfenum_BM = 24,
        pfenum_BT = 25,
        pfenum_BO = 26,
        pfenum_BQ = 27,
        pfenum_BA = 28,
        pfenum_BW = 29,
        pfenum_BV = 30,
        pfenum_BR = 31,
        pfenum_IO = 32,
        pfenum_BN = 33,
        pfenum_BG = 34,
        pfenum_BF = 35,
        pfenum_BI = 36,
        pfenum_KH = 37,
        pfenum_CM = 38,
        pfenum_CA = 39,
        pfenum_CV = 40,
        pfenum_KY = 41,
        pfenum_CF = 42,
        pfenum_TD = 43,
        pfenum_CL = 44,
        pfenum_CN = 45,
        pfenum_CX = 46,
        pfenum_CC = 47,
        pfenum_CO = 48,
        pfenum_KM = 49,
        pfenum_CG = 50,
        pfenum_CD = 51,
        pfenum_CK = 52,
        pfenum_CR = 53,
        pfenum_CI = 54,
        pfenum_HR = 55,
        pfenum_CU = 56,
        pfenum_CW = 57,
        pfenum_CY = 58,
        pfenum_CZ = 59,
        pfenum_DK = 60,
        pfenum_DJ = 61,
        pfenum_DM = 62,
        pfenum_DO = 63,
        pfenum_EC = 64,
        pfenum_EG = 65,
        pfenum_SV = 66,
        pfenum_GQ = 67,
        pfenum_ER = 68,
        pfenum_EE = 69,
        pfenum_ET = 70,
        pfenum_FK = 71,
        pfenum_FO = 72,
        pfenum_FJ = 73,
        pfenum_FI = 74,
        pfenum_FR = 75,
        pfenum_GF = 76,
        pfenum_PF = 77,
        pfenum_TF = 78,
        pfenum_GA = 79,
        pfenum_GM = 80,
        pfenum_GE = 81,
        pfenum_DE = 82,
        pfenum_GH = 83,
        pfenum_GI = 84,
        pfenum_GR = 85,
        pfenum_GL = 86,
        pfenum_GD = 87,
        pfenum_GP = 88,
        pfenum_GU = 89,
        pfenum_GT = 90,
        pfenum_GG = 91,
        pfenum_GN = 92,
        pfenum_GW = 93,
        pfenum_GY = 94,
        pfenum_HT = 95,
        pfenum_HM = 96,
        pfenum_VA = 97,
        pfenum_HN = 98,
        pfenum_HK = 99,
        pfenum_HU = 100,
        pfenum_IS = 101,
        pfenum_IN = 102,
        pfenum_ID = 103,
        pfenum_IR = 104,
        pfenum_IQ = 105,
        pfenum_IE = 106,
        pfenum_IM = 107,
        pfenum_IL = 108,
        pfenum_IT = 109,
        pfenum_JM = 110,
        pfenum_JP = 111,
        pfenum_JE = 112,
        pfenum_JO = 113,
        pfenum_KZ = 114,
        pfenum_KE = 115,
        pfenum_KI = 116,
        pfenum_KP = 117,
        pfenum_KR = 118,
        pfenum_KW = 119,
        pfenum_KG = 120,
        pfenum_LA = 121,
        pfenum_LV = 122,
        pfenum_LB = 123,
        pfenum_LS = 124,
        pfenum_LR = 125,
        pfenum_LY = 126,
        pfenum_LI = 127,
        pfenum_LT = 128,
        pfenum_LU = 129,
        pfenum_MO = 130,
        pfenum_MK = 131,
        pfenum_MG = 132,
        pfenum_MW = 133,
        pfenum_MY = 134,
        pfenum_MV = 135,
        pfenum_ML = 136,
        pfenum_MT = 137,
        pfenum_MH = 138,
        pfenum_MQ = 139,
        pfenum_MR = 140,
        pfenum_MU = 141,
        pfenum_YT = 142,
        pfenum_MX = 143,
        pfenum_FM = 144,
        pfenum_MD = 145,
        pfenum_MC = 146,
        pfenum_MN = 147,
        pfenum_ME = 148,
        pfenum_MS = 149,
        pfenum_MA = 150,
        pfenum_MZ = 151,
        pfenum_MM = 152,
        pfenum_NA = 153,
        pfenum_NR = 154,
        pfenum_NP = 155,
        pfenum_NL = 156,
        pfenum_NC = 157,
        pfenum_NZ = 158,
        pfenum_NI = 159,
        pfenum_NE = 160,
        pfenum_NG = 161,
        pfenum_NU = 162,
        pfenum_NF = 163,
        pfenum_MP = 164,
        pfenum_NO = 165,
        pfenum_OM = 166,
        pfenum_PK = 167,
        pfenum_PW = 168,
        pfenum_PS = 169,
        pfenum_PA = 170,
        pfenum_PG = 171,
        pfenum_PY = 172,
        pfenum_PE = 173,
        pfenum_PH = 174,
        pfenum_PN = 175,
        pfenum_PL = 176,
        pfenum_PT = 177,
        pfenum_PR = 178,
        pfenum_QA = 179,
        pfenum_RE = 180,
        pfenum_RO = 181,
        pfenum_RU = 182,
        pfenum_RW = 183,
        pfenum_BL = 184,
        pfenum_SH = 185,
        pfenum_KN = 186,
        pfenum_LC = 187,
        pfenum_MF = 188,
        pfenum_PM = 189,
        pfenum_VC = 190,
        pfenum_WS = 191,
        pfenum_SM = 192,
        pfenum_ST = 193,
        pfenum_SA = 194,
        pfenum_SN = 195,
        pfenum_RS = 196,
        pfenum_SC = 197,
        pfenum_SL = 198,
        pfenum_SG = 199,
        pfenum_SX = 200,
        pfenum_SK = 201,
        pfenum_SI = 202,
        pfenum_SB = 203,
        pfenum_SO = 204,
        pfenum_ZA = 205,
        pfenum_GS = 206,
        pfenum_SS = 207,
        pfenum_ES = 208,
        pfenum_LK = 209,
        pfenum_SD = 210,
        pfenum_SR = 211,
        pfenum_SJ = 212,
        pfenum_SZ = 213,
        pfenum_SE = 214,
        pfenum_CH = 215,
        pfenum_SY = 216,
        pfenum_TW = 217,
        pfenum_TJ = 218,
        pfenum_TZ = 219,
        pfenum_TH = 220,
        pfenum_TL = 221,
        pfenum_TG = 222,
        pfenum_TK = 223,
        pfenum_TO = 224,
        pfenum_TT = 225,
        pfenum_TN = 226,
        pfenum_TR = 227,
        pfenum_TM = 228,
        pfenum_TC = 229,
        pfenum_TV = 230,
        pfenum_UG = 231,
        pfenum_UA = 232,
        pfenum_AE = 233,
        pfenum_GB = 234,
        pfenum_US = 235,
        pfenum_UM = 236,
        pfenum_UY = 237,
        pfenum_UZ = 238,
        pfenum_VU = 239,
        pfenum_VE = 240,
        pfenum_VN = 241,
        pfenum_VG = 242,
        pfenum_VI = 243,
        pfenum_WF = 244,
        pfenum_EH = 245,
        pfenum_YE = 246,
        pfenum_ZM = 247,
        pfenum_ZW = 248,
        pfenum_MAX = 249
    };

    enum class EContinentCode : uint8_t //Enum PlayFab.EContinentCode
    {
        pfenum_AF = 0,
        pfenum_AN = 1,
        pfenum_AS = 2,
        pfenum_EU = 3,
        pfenum_NA = 4,
        pfenum_OC = 5,
        pfenum_SA = 6,
        pfenum_MAX = 7
    };

    enum class EConditionals : uint8_t //Enum PlayFab.EConditionals
    {
        pfenum_Any = 0,
        pfenum_True = 1,
        pfenum_False = 2,
        pfenum_MAX = 3
    };

    enum class EPFJson : uint8_t //Enum PlayFab.EPFJson
    {
        None = 0,
        Null = 1,
        String = 2,
        Number = 3,
        Boolean = 4,
        Array = 5,
        Object = 6,
        EPFJson_MAX = 7
    };

    enum class EYSignlarState : uint8_t //Enum SignalR.EYSignlarState
    {
        None = 0,
        GettingConnection = 1,
        Initializing = 2,
        Connected = 3,
        NotConnected = 4,
        Reconnecting = 5,
        ShuttingDown = 6,
        EYSignlarState_MAX = 7
    };

    enum class EDatabaseType : uint8_t //Enum NetDBPlugin.EDatabaseType
    {
        DT_PostgreSQL = 0,
        DT_NoDB = 1,
        DT_MAX = 2
    };

    enum class EDataType : uint8_t //Enum NetDBPlugin.EDataType
    {
        DT_INT = 0,
        DT_STRING = 1,
        DT_FLOAT = 2,
        DT_BOOL = 3,
        DT_BYTE = 4,
        DT_CHAR = 5,
        DT_UNSPEC = 6,
        DT_MAX = 7
    };

    enum class EHorizonTweenLerpMode : uint8_t //Enum HorizonTween.EHorizonTweenLerpMode
    {
        Lerp = 0,
        LerpStable = 1,
        InterpSinIn = 2,
        InterpSinOut = 3,
        InterpSinInOut = 4,
        InterpExpoIn = 5,
        InterpExpoOut = 6,
        InterpExpoInOut = 7,
        InterpCircularIn = 8,
        InterpCircularOut = 9,
        InterpCircularInOut = 10,
        InterpEaseIn = 11,
        InterpEaseOut = 12,
        InterpEaseInOut = 13,
        BounceIn = 14,
        BounceOut = 15,
        BounceInOut = 16,
        ElasticIn = 17,
        ElasticOut = 18,
        ElasticInOut = 19,
        BackIn = 20,
        BackOut = 21,
        BackInOut = 22,
        QuadIn = 23,
        QuadOut = 24,
        QuadInOut = 25,
        CubicIn = 26,
        CubicOut = 27,
        CubicInOut = 28,
        QuartIn = 29,
        QuartOut = 30,
        QuartInOut = 31,
        QuintIn = 32,
        QuintOut = 33,
        QuintInOut = 34,
        EHorizonTweenLerpMode_MAX = 35
    };

    enum class EHorizonTweenPlayMode : uint8_t //Enum HorizonTween.EHorizonTweenPlayMode
    {
        Forward = 0,
        Reverse = 1,
        PingPong = 2,
        EHorizonTweenPlayMode_MAX = 3
    };

    enum class EHorizonTweenCoordinateSpace : uint8_t //Enum HorizonTween.EHorizonTweenCoordinateSpace
    {
        Local = 0,
        World = 1,
        EHorizonTweenCoordinateSpace_MAX = 2
    };

    enum class EHorizonTweenRotatorConstraints : uint8_t //Enum HorizonTween.EHorizonTweenRotatorConstraints
    {
        None = 0,
        RollOnly = 1,
        PitchOnly = 2,
        YawOnly = 3,
        RollAndPitchOnly = 4,
        PitchAndYawOnly = 5,
        RollAndYawOnly = 6,
        EHorizonTweenRotatorConstraints_MAX = 7
    };

    enum class EHorizonTweenVector2DConstraints : uint8_t //Enum HorizonTween.EHorizonTweenVector2DConstraints
    {
        None = 0,
        XOnly = 1,
        YOnly = 2,
        EHorizonTweenVector2DConstraints_MAX = 3
    };

    enum class EHorizonTweenVectorConstraints : uint8_t //Enum HorizonTween.EHorizonTweenVectorConstraints
    {
        None = 0,
        XOnly = 1,
        YOnly = 2,
        ZOnly = 3,
        XYPlane = 4,
        YZPlane = 5,
        XZPlane = 6,
        EHorizonTweenVectorConstraints_MAX = 7
    };

    enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t //Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
    {
        SetSystemInactive = 0,
        Deactivate = 1,
        None = 2,
        ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
    };

    enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t //Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
    {
        ActivateIfInactive = 0,
        None = 1,
        ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
    };

    enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t //Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
    {
        Activate = 0,
        ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
    };

    enum class ENiagaraBakerViewMode : uint8_t //Enum Niagara.ENiagaraBakerViewMode
    {
        Perspective = 0,
        OrthoFront = 1,
        OrthoBack = 2,
        OrthoLeft = 3,
        OrthoRight = 4,
        OrthoTop = 5,
        OrthoBottom = 6,
        Num = 7,
        ENiagaraBakerViewMode_MAX = 8
    };

    enum class ENiagaraCollisionMode : uint8_t //Enum Niagara.ENiagaraCollisionMode
    {
        None = 0,
        SceneGeometry = 1,
        DepthBuffer = 2,
        DistanceField = 3,
        ENiagaraCollisionMode_MAX = 4
    };

    enum class ENiagaraFunctionDebugState : uint8_t //Enum Niagara.ENiagaraFunctionDebugState
    {
        NoDebug = 0,
        Basic = 1,
        ENiagaraFunctionDebugState_MAX = 2
    };

    enum class ENiagaraSystemInstanceState : uint8_t //Enum Niagara.ENiagaraSystemInstanceState
    {
        None = 0,
        PendingSpawn = 1,
        PendingSpawnPaused = 2,
        Spawning = 3,
        Running = 4,
        Paused = 5,
        Num = 6,
        ENiagaraSystemInstanceState_MAX = 7
    };

    enum class ENCPoolMethod : uint8_t //Enum Niagara.ENCPoolMethod
    {
        None = 0,
        AutoRelease = 1,
        ManualRelease = 2,
        ManualRelease_OnComplete = 3,
        FreeInPool = 4,
        ENCPoolMethod_MAX = 5
    };

    enum class ENiagaraLegacyTrailWidthMode : uint8_t //Enum Niagara.ENiagaraLegacyTrailWidthMode
    {
        FromCentre = 0,
        FromFirst = 1,
        FromSecond = 2,
        ENiagaraLegacyTrailWidthMode_MAX = 3
    };

    enum class ENiagaraRendererSourceDataMode : uint8_t //Enum Niagara.ENiagaraRendererSourceDataMode
    {
        Particles = 0,
        Emitter = 1,
        ENiagaraRendererSourceDataMode_MAX = 2
    };

    enum class ENiagaraBindingSource : uint8_t //Enum Niagara.ENiagaraBindingSource
    {
        ImplicitFromSource = 0,
        ExplicitParticles = 1,
        ExplicitEmitter = 2,
        ExplicitSystem = 3,
        ExplicitUser = 4,
        MaxBindingSource = 5,
        ENiagaraBindingSource_MAX = 6
    };

    enum class ENiagaraIterationSource : uint8_t //Enum Niagara.ENiagaraIterationSource
    {
        Particles = 0,
        DataInterface = 1,
        ENiagaraIterationSource_MAX = 2
    };

    enum class ENiagaraScriptGroup : uint8_t //Enum Niagara.ENiagaraScriptGroup
    {
        Particle = 0,
        Emitter = 1,
        System = 2,
        Max = 3
    };

    enum class ENiagaraScriptContextStaticSwitch : uint8_t //Enum Niagara.ENiagaraScriptContextStaticSwitch
    {
        System = 0,
        Emitter = 1,
        Particle = 2,
        ENiagaraScriptContextStaticSwitch_MAX = 3
    };

    enum class ENiagaraCompileUsageStaticSwitch : uint8_t //Enum Niagara.ENiagaraCompileUsageStaticSwitch
    {
        Spawn = 0,
        Update = 1,
        Event = 2,
        SimulationStage = 3,
        Default = 4,
        ENiagaraCompileUsageStaticSwitch_MAX = 5
    };

    enum class ENiagaraScriptUsage : uint8_t //Enum Niagara.ENiagaraScriptUsage
    {
        Function = 0,
        Module = 1,
        DynamicInput = 2,
        ParticleSpawnScript = 3,
        ParticleSpawnScriptInterpolated = 4,
        ParticleUpdateScript = 5,
        ParticleEventScript = 6,
        ParticleSimulationStageScript = 7,
        ParticleGPUComputeScript = 8,
        EmitterSpawnScript = 9,
        EmitterUpdateScript = 10,
        SystemSpawnScript = 11,
        SystemUpdateScript = 12,
        ENiagaraScriptUsage_MAX = 13
    };

    enum class ENiagaraScriptCompileStatus : uint8_t //Enum Niagara.ENiagaraScriptCompileStatus
    {
        NCS_Unknown = 0,
        NCS_Dirty = 1,
        NCS_Error = 2,
        NCS_UpToDate = 3,
        NCS_BeingCreated = 4,
        NCS_UpToDateWithWarnings = 5,
        NCS_ComputeUpToDateWithWarnings = 6,
        NCS_MAX = 7
    };

    enum class ENiagaraInputNodeUsage : uint8_t //Enum Niagara.ENiagaraInputNodeUsage
    {
        Undefined = 0,
        Parameter = 1,
        Attribute = 2,
        SystemConstant = 3,
        TranslatorConstant = 4,
        RapidIterationParameter = 5,
        ENiagaraInputNodeUsage_MAX = 6
    };

    enum class ENiagaraDataSetType : uint8_t //Enum Niagara.ENiagaraDataSetType
    {
        ParticleData = 0,
        Shared = 1,
        Event = 2,
        ENiagaraDataSetType_MAX = 3
    };

    enum class ENiagaraStatDisplayMode : uint8_t //Enum Niagara.ENiagaraStatDisplayMode
    {
        Percent = 0,
        Absolute = 1,
        ENiagaraStatDisplayMode_MAX = 2
    };

    enum class ENiagaraStatEvaluationType : uint8_t //Enum Niagara.ENiagaraStatEvaluationType
    {
        Average = 0,
        Maximum = 1,
        ENiagaraStatEvaluationType_MAX = 2
    };

    enum class ENiagaraAgeUpdateMode : uint8_t //Enum Niagara.ENiagaraAgeUpdateMode
    {
        TickDeltaTime = 0,
        DesiredAge = 1,
        DesiredAgeNoSeek = 2,
        ENiagaraAgeUpdateMode_MAX = 3
    };

    enum class ENiagaraSimTarget : uint8_t //Enum Niagara.ENiagaraSimTarget
    {
        CPUSim = 0,
        GPUComputeSim = 1,
        ENiagaraSimTarget_MAX = 2
    };

    enum class ENiagaraRendererMotionVectorSetting : uint8_t //Enum Niagara.ENiagaraRendererMotionVectorSetting
    {
        AutoDetect = 0,
        Precise = 1,
        Approximate = 2,
        Disable = 3,
        ENiagaraRendererMotionVectorSetting_MAX = 4
    };

    enum class ENiagaraDefaultRendererMotionVectorSetting : uint8_t //Enum Niagara.ENiagaraDefaultRendererMotionVectorSetting
    {
        Precise = 0,
        Approximate = 1,
        ENiagaraDefaultRendererMotionVectorSetting_MAX = 2
    };

    enum class ENiagaraDefaultMode : uint8_t //Enum Niagara.ENiagaraDefaultMode
    {
        Value = 0,
        Binding = 1,
        Custom = 2,
        FailIfPreviouslyNotSet = 3,
        ENiagaraDefaultMode_MAX = 4
    };

    enum class ENiagaraMipMapGeneration : uint8_t //Enum Niagara.ENiagaraMipMapGeneration
    {
        Disabled = 0,
        PostStage = 1,
        PostSimulate = 2,
        ENiagaraMipMapGeneration_MAX = 3
    };

    enum class ENiagaraGpuBufferFormat : uint8_t //Enum Niagara.ENiagaraGpuBufferFormat
    {
        Float = 0,
        HalfFloat = 1,
        UnsignedNormalizedByte = 2,
        Max = 3
    };

    enum class ENiagaraTickBehavior : uint8_t //Enum Niagara.ENiagaraTickBehavior
    {
        UsePrereqs = 0,
        UseComponentTickGroup = 1,
        ForceTickFirst = 2,
        ForceTickLast = 3,
        ENiagaraTickBehavior_MAX = 4
    };

    enum class ENDIExport_GPUAllocationMode : uint8_t //Enum Niagara.ENDIExport_GPUAllocationMode
    {
        FixedSize = 0,
        PerParticle = 1,
        ENDIExport_MAX = 2
    };

    enum class ENDILandscape_SourceMode : uint8_t //Enum Niagara.ENDILandscape_SourceMode
    {
        Default = 0,
        Source = 1,
        AttachParent = 2,
        ENDILandscape_MAX = 3
    };

    enum class ESetResolutionMethod : uint8_t //Enum Niagara.ESetResolutionMethod
    {
        Independent = 0,
        MaxAxis = 1,
        CellSize = 2,
        ESetResolutionMethod_MAX = 3
    };

    enum class ENDISkeletalMesh_SkinningMode : uint32_t //Enum Niagara.ENDISkeletalMesh_SkinningMode
    {
        Invalid = 255,
        None = 0,
        SkinOnTheFly = 1,
        PreSkin = 2,
        ENDISkeletalMesh_MAX = 256
    };

    enum class ENDISkeletalMesh_SourceMode : uint8_t //Enum Niagara.ENDISkeletalMesh_SourceMode
    {
        Default = 0,
        Source = 1,
        AttachParent = 2,
        ENDISkeletalMesh_MAX = 3
    };

    enum class ENDIStaticMesh_SourceMode : uint8_t //Enum Niagara.ENDIStaticMesh_SourceMode
    {
        Default = 0,
        Source = 1,
        AttachParent = 2,
        DefaultMeshOnly = 3,
        ENDIStaticMesh_MAX = 4
    };

    enum class ENiagaraDebugHudVerbosity : uint8_t //Enum Niagara.ENiagaraDebugHudVerbosity
    {
        None = 0,
        Basic = 1,
        Verbose = 2,
        ENiagaraDebugHudVerbosity_MAX = 3
    };

    enum class ENiagaraDebugHudFont : uint8_t //Enum Niagara.ENiagaraDebugHudFont
    {
        Small = 0,
        Normal = 1,
        ENiagaraDebugHudFont_MAX = 2
    };

    enum class ENiagaraDebugHudVAlign : uint8_t //Enum Niagara.ENiagaraDebugHudVAlign
    {
        Top = 0,
        Center = 1,
        Bottom = 2,
        ENiagaraDebugHudVAlign_MAX = 3
    };

    enum class ENiagaraDebugHudHAlign : uint8_t //Enum Niagara.ENiagaraDebugHudHAlign
    {
        Left = 0,
        Center = 1,
        Right = 2,
        ENiagaraDebugHudHAlign_MAX = 3
    };

    enum class ENiagaraDebugPlaybackMode : uint8_t //Enum Niagara.ENiagaraDebugPlaybackMode
    {
        Play = 0,
        Loop = 1,
        Paused = 2,
        Step = 3,
        ENiagaraDebugPlaybackMode_MAX = 4
    };

    enum class ENiagaraScalabilityUpdateFrequency : uint8_t //Enum Niagara.ENiagaraScalabilityUpdateFrequency
    {
        SpawnOnly = 0,
        Low = 1,
        Medium = 2,
        High = 3,
        Continuous = 4,
        ENiagaraScalabilityUpdateFrequency_MAX = 5
    };

    enum class ENiagaraCullReaction : uint8_t //Enum Niagara.ENiagaraCullReaction
    {
        Deactivate = 0,
        DeactivateImmediate = 1,
        DeactivateResume = 2,
        DeactivateImmediateResume = 3,
        ENiagaraCullReaction_MAX = 4
    };

    enum class EParticleAllocationMode : uint8_t //Enum Niagara.EParticleAllocationMode
    {
        AutomaticEstimate = 0,
        ManualEstimate = 1,
        EParticleAllocationMode_MAX = 2
    };

    enum class EScriptExecutionMode : uint8_t //Enum Niagara.EScriptExecutionMode
    {
        EveryParticle = 0,
        SpawnedParticles = 1,
        SingleParticle = 2,
        EScriptExecutionMode_MAX = 3
    };

    enum class ENiagaraSortMode : uint8_t //Enum Niagara.ENiagaraSortMode
    {
        None = 0,
        ViewDepth = 1,
        ViewDistance = 2,
        CustomAscending = 3,
        CustomDecending = 4,
        ENiagaraSortMode_MAX = 5
    };

    enum class ENiagaraMeshLockedAxisSpace : uint8_t //Enum Niagara.ENiagaraMeshLockedAxisSpace
    {
        Simulation = 0,
        World = 1,
        Local = 2,
        ENiagaraMeshLockedAxisSpace_MAX = 3
    };

    enum class ENiagaraMeshPivotOffsetSpace : uint8_t //Enum Niagara.ENiagaraMeshPivotOffsetSpace
    {
        Mesh = 0,
        Simulation = 1,
        World = 2,
        Local = 3,
        ENiagaraMeshPivotOffsetSpace_MAX = 4
    };

    enum class ENiagaraMeshFacingMode : uint8_t //Enum Niagara.ENiagaraMeshFacingMode
    {
        Default = 0,
        Velocity = 1,
        CameraPosition = 2,
        CameraPlane = 3,
        ENiagaraMeshFacingMode_MAX = 4
    };

    enum class ENiagaraPlatformSetState : uint8_t //Enum Niagara.ENiagaraPlatformSetState
    {
        Disabled = 0,
        Enabled = 1,
        Active = 2,
        Unknown = 3,
        ENiagaraPlatformSetState_MAX = 4
    };

    enum class ENiagaraPlatformSelectionState : uint8_t //Enum Niagara.ENiagaraPlatformSelectionState
    {
        Default = 0,
        Enabled = 1,
        Disabled = 2,
        ENiagaraPlatformSelectionState_MAX = 3
    };

    enum class ENiagaraPreviewGridResetMode : uint8_t //Enum Niagara.ENiagaraPreviewGridResetMode
    {
        Never = 0,
        Individual = 1,
        All = 2,
        ENiagaraPreviewGridResetMode_MAX = 3
    };

    enum class ENiagaraRibbonUVDistributionMode : uint8_t //Enum Niagara.ENiagaraRibbonUVDistributionMode
    {
        ScaledUniformly = 0,
        ScaledUsingRibbonSegmentLength = 1,
        TiledOverRibbonLength = 2,
        TiledFromStartOverRibbonLength = 3,
        ENiagaraRibbonUVDistributionMode_MAX = 4
    };

    enum class ENiagaraRibbonUVEdgeMode : uint8_t //Enum Niagara.ENiagaraRibbonUVEdgeMode
    {
        SmoothTransition = 0,
        Locked = 1,
        ENiagaraRibbonUVEdgeMode_MAX = 2
    };

    enum class ENiagaraRibbonTessellationMode : uint8_t //Enum Niagara.ENiagaraRibbonTessellationMode
    {
        Automatic = 0,
        Custom = 1,
        Disabled = 2,
        ENiagaraRibbonTessellationMode_MAX = 3
    };

    enum class ENiagaraRibbonShapeMode : uint8_t //Enum Niagara.ENiagaraRibbonShapeMode
    {
        Plane = 0,
        MultiPlane = 1,
        Tube = 2,
        Custom = 3,
        ENiagaraRibbonShapeMode_MAX = 4
    };

    enum class ENiagaraRibbonDrawDirection : uint8_t //Enum Niagara.ENiagaraRibbonDrawDirection
    {
        FrontToBack = 0,
        BackToFront = 1,
        ENiagaraRibbonDrawDirection_MAX = 2
    };

    enum class ENiagaraRibbonAgeOffsetMode : uint8_t //Enum Niagara.ENiagaraRibbonAgeOffsetMode
    {
        Scale = 0,
        Clip = 1,
        ENiagaraRibbonAgeOffsetMode_MAX = 2
    };

    enum class ENiagaraRibbonFacingMode : uint8_t //Enum Niagara.ENiagaraRibbonFacingMode
    {
        Screen = 0,
        Custom = 1,
        CustomSideVector = 2,
        ENiagaraRibbonFacingMode_MAX = 3
    };

    enum class ENiagaraScriptTemplateSpecification : uint8_t //Enum Niagara.ENiagaraScriptTemplateSpecification
    {
        None = 0,
        Template = 1,
        Behavior = 2,
        ENiagaraScriptTemplateSpecification_MAX = 3
    };

    enum class ENiagaraScriptLibraryVisibility : uint8_t //Enum Niagara.ENiagaraScriptLibraryVisibility
    {
        Invalid = 0,
        Unexposed = 1,
        Library = 2,
        Hidden = 3,
        ENiagaraScriptLibraryVisibility_MAX = 4
    };

    enum class ENiagaraModuleDependencyScriptConstraint : uint8_t //Enum Niagara.ENiagaraModuleDependencyScriptConstraint
    {
        SameScript = 0,
        AllScripts = 1,
        ENiagaraModuleDependencyScriptConstraint_MAX = 2
    };

    enum class ENiagaraModuleDependencyType : uint8_t //Enum Niagara.ENiagaraModuleDependencyType
    {
        PreDependency = 0,
        PostDependency = 1,
        ENiagaraModuleDependencyType_MAX = 2
    };

    enum class EUnusedAttributeBehaviour : uint8_t //Enum Niagara.EUnusedAttributeBehaviour
    {
        Copy = 0,
        Zero = 1,
        None = 2,
        MarkInvalid = 3,
        PassThrough = 4,
        EUnusedAttributeBehaviour_MAX = 5
    };

    enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t //Enum Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
    {
        Full = 0,
        Half = 1,
        ENDISkelMesh_MAX = 2
    };

    enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8_t //Enum Niagara.ENDISkelMesh_GpuUniformSamplingFormat
    {
        Full = 0,
        Limited_24_9 = 1,
        Limited_23_10 = 2,
        ENDISkelMesh_MAX = 3
    };

    enum class ENDISkelMesh_GpuMaxInfluences : uint8_t //Enum Niagara.ENDISkelMesh_GpuMaxInfluences
    {
        AllowMax4 = 0,
        AllowMax8 = 1,
        Unlimited = 2,
        ENDISkelMesh_MAX = 3
    };

    enum class ENiagaraSpriteFacingMode : uint8_t //Enum Niagara.ENiagaraSpriteFacingMode
    {
        FaceCamera = 0,
        FaceCameraPlane = 1,
        CustomFacingVector = 2,
        FaceCameraPosition = 3,
        FaceCameraDistanceBlend = 4,
        ENiagaraSpriteFacingMode_MAX = 5
    };

    enum class ENiagaraSpriteAlignment : uint8_t //Enum Niagara.ENiagaraSpriteAlignment
    {
        Unaligned = 0,
        VelocityAligned = 1,
        CustomAlignment = 2,
        ENiagaraSpriteAlignment_MAX = 3
    };

    enum class ENiagaraOrientationAxis : uint8_t //Enum Niagara.ENiagaraOrientationAxis
    {
        XAxis = 0,
        YAxis = 1,
        ZAxis = 2,
        ENiagaraOrientationAxis_MAX = 3
    };

    enum class ENiagaraPythonUpdateScriptReference : uint8_t //Enum Niagara.ENiagaraPythonUpdateScriptReference
    {
        None = 0,
        ScriptAsset = 1,
        DirectTextEntry = 2,
        ENiagaraPythonUpdateScriptReference_MAX = 3
    };

    enum class ENiagaraCoordinateSpace : uint8_t //Enum Niagara.ENiagaraCoordinateSpace
    {
        Simulation = 0,
        World = 1,
        Local = 2,
        ENiagaraCoordinateSpace_MAX = 3
    };

    enum class ENiagaraExecutionState : uint8_t //Enum Niagara.ENiagaraExecutionState
    {
        Active = 0,
        Inactive = 1,
        InactiveClear = 2,
        Complete = 3,
        Disabled = 4,
        Num = 5,
        ENiagaraExecutionState_MAX = 6
    };

    enum class ENiagaraExecutionStateSource : uint8_t //Enum Niagara.ENiagaraExecutionStateSource
    {
        Scalability = 0,
        Internal = 1,
        Owner = 2,
        InternalCompletion = 3,
        ENiagaraExecutionStateSource_MAX = 4
    };

    enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t //Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
    {
        None = 0,
        Largest = 1,
        Smallest = 2,
        Scalar = 3,
        ENiagaraNumericOutputTypeSelectionMode_MAX = 4
    };

    enum class ENiagaraVariantMode : uint8_t //Enum Niagara.ENiagaraVariantMode
    {
        None = 0,
        Object = 1,
        DataInterface = 2,
        Bytes = 3,
        ENiagaraVariantMode_MAX = 4
    };

    enum class FNiagaraCompileEventSeverity : uint8_t //Enum NiagaraShader.FNiagaraCompileEventSeverity
    {
        Log = 0,
        Warning = 1,
        Error = 2,
        FNiagaraCompileEventSeverity_MAX = 3
    };

    enum class DeviceType : uint8_t //Enum VivoxCore.DeviceType
    {
        NullDevice = 0,
        SpecificDevice = 1,
        DefaultSystemDevice = 2,
        DefaultCommunicationDevice = 3,
        DeviceType_MAX = 4
    };

    enum class EAudioFadeModel : uint8_t //Enum VivoxCore.EAudioFadeModel
    {
        InverseByDistance = 0,
        LinearByDistance = 1,
        ExponentialByDistance = 2,
        EAudioFadeModel_MAX = 3
    };

    enum class ChannelType : uint8_t //Enum VivoxCore.ChannelType
    {
        NonPositional = 0,
        Positional = 1,
        Echo = 2,
        ChannelType_MAX = 3
    };

    enum class ConnectionState : uint8_t //Enum VivoxCore.ConnectionState
    {
        Disconnected = 0,
        Connecting = 1,
        Connected = 2,
        Disconnecting = 3,
        ConnectionState_MAX = 4
    };

    enum class ParticipantSpeakingUpdateRate : uint8_t //Enum VivoxCore.ParticipantSpeakingUpdateRate
    {
        StateChange = 0,
        Never = 1,
        Update1Hz = 2,
        Update5Hz = 3,
        Update10Hz = 4,
        ParticipantSpeakingUpdateRate_MAX = 5
    };

    enum class TransmissionMode : uint8_t //Enum VivoxCore.TransmissionMode
    {
        None = 0,
        Single = 1,
        All = 2,
        TransmissionMode_MAX = 3
    };

    enum class SubscriptionReply : uint8_t //Enum VivoxCore.SubscriptionReply
    {
        Allow = 0,
        Block = 1,
        SubscriptionReply_MAX = 2
    };

    enum class SubscriptionMode : uint8_t //Enum VivoxCore.SubscriptionMode
    {
        Accept = 0,
        Block = 1,
        Defer = 2,
        SubscriptionMode_MAX = 3
    };

    enum class LoginState : uint8_t //Enum VivoxCore.LoginState
    {
        LoggedOut = 0,
        LoggingIn = 1,
        LoggedIn = 2,
        LoggingOut = 3,
        LoginState_MAX = 4
    };

    enum class TTSMessageState : uint8_t //Enum VivoxCore.TTSMessageState
    {
        Playing = 0,
        Enqueued = 1,
        TTSMessageState_MAX = 2
    };

    enum class TTSDestination : uint8_t //Enum VivoxCore.TTSDestination
    {
        Default = 0,
        RemoteTransmission = 0,
        LocalPlayback = 1,
        RemoteTransmissionWithLocalPlayback = 2,
        QueuedRemoteTransmission = 3,
        QueuedLocalPlayback = 4,
        QueuedRemoteTransmissionWithLocalPlayback = 5,
        ScreenReader = 6,
        TTSDestination_MAX = 7
    };

    enum class PresenceStatus : uint8_t //Enum VivoxCore.PresenceStatus
    {
        Unavailable = 0,
        Available = 1,
        Chat = 2,
        DoNotDisturb = 3,
        Away = 4,
        ExtendedAway = 5,
        PresenceStatus_MAX = 6
    };

    enum class ESynth1PatchDestination : uint8_t //Enum Synthesis.ESynth1PatchDestination
    {
        Osc1Gain = 0,
        Osc1Frequency = 1,
        Osc1Pulsewidth = 2,
        Osc2Gain = 3,
        Osc2Frequency = 4,
        Osc2Pulsewidth = 5,
        FilterFrequency = 6,
        FilterQ = 7,
        Gain = 8,
        Pan = 9,
        LFO1Frequency = 10,
        LFO1Gain = 11,
        LFO2Frequency = 12,
        LFO2Gain = 13,
        Count = 14,
        ESynth1PatchDestination_MAX = 15
    };

    enum class ESynth1PatchSource : uint8_t //Enum Synthesis.ESynth1PatchSource
    {
        LFO1 = 0,
        LFO2 = 1,
        Envelope = 2,
        BiasEnvelope = 3,
        Count = 4,
        ESynth1PatchSource_MAX = 5
    };

    enum class ESynthStereoDelayMode : uint8_t //Enum Synthesis.ESynthStereoDelayMode
    {
        Normal = 0,
        Cross = 1,
        PingPong = 2,
        Count = 3,
        ESynthStereoDelayMode_MAX = 4
    };

    enum class ESynthFilterAlgorithm : uint8_t //Enum Synthesis.ESynthFilterAlgorithm
    {
        OnePole = 0,
        StateVariable = 1,
        Ladder = 2,
        Count = 3,
        ESynthFilterAlgorithm_MAX = 4
    };

    enum class ESynthFilterType : uint8_t //Enum Synthesis.ESynthFilterType
    {
        LowPass = 0,
        HighPass = 1,
        BandPass = 2,
        BandStop = 3,
        Count = 4,
        ESynthFilterType_MAX = 5
    };

    enum class ESynthModEnvBiasPatch : uint8_t //Enum Synthesis.ESynthModEnvBiasPatch
    {
        PatchToNone = 0,
        PatchToOscFreq = 1,
        PatchToFilterFreq = 2,
        PatchToFilterQ = 3,
        PatchToLFO1Gain = 4,
        PatchToLFO2Gain = 5,
        PatchToLFO1Freq = 6,
        PatchToLFO2Freq = 7,
        Count = 8,
        ESynthModEnvBiasPatch_MAX = 9
    };

    enum class ESynthModEnvPatch : uint8_t //Enum Synthesis.ESynthModEnvPatch
    {
        PatchToNone = 0,
        PatchToOscFreq = 1,
        PatchToFilterFreq = 2,
        PatchToFilterQ = 3,
        PatchToLFO1Gain = 4,
        PatchToLFO2Gain = 5,
        PatchToLFO1Freq = 6,
        PatchToLFO2Freq = 7,
        Count = 8,
        ESynthModEnvPatch_MAX = 9
    };

    enum class ESynthLFOPatchType : uint8_t //Enum Synthesis.ESynthLFOPatchType
    {
        PatchToNone = 0,
        PatchToGain = 1,
        PatchToOscFreq = 2,
        PatchToFilterFreq = 3,
        PatchToFilterQ = 4,
        PatchToOscPulseWidth = 5,
        PatchToOscPan = 6,
        PatchLFO1ToLFO2Frequency = 7,
        PatchLFO1ToLFO2Gain = 8,
        Count = 9,
        ESynthLFOPatchType_MAX = 10
    };

    enum class ESynthLFOMode : uint8_t //Enum Synthesis.ESynthLFOMode
    {
        Sync = 0,
        OneShot = 1,
        Free = 2,
        Count = 3,
        ESynthLFOMode_MAX = 4
    };

    enum class ESynthLFOType : uint8_t //Enum Synthesis.ESynthLFOType
    {
        Sine = 0,
        UpSaw = 1,
        DownSaw = 2,
        Square = 3,
        Triangle = 4,
        Exponential = 5,
        RandomSampleHold = 6,
        Count = 7,
        ESynthLFOType_MAX = 8
    };

    enum class ESynth1OscType : uint8_t //Enum Synthesis.ESynth1OscType
    {
        Sine = 0,
        Saw = 1,
        Triangle = 2,
        Square = 3,
        Noise = 4,
        Count = 5,
        ESynth1OscType_MAX = 6
    };

    enum class ESourceEffectDynamicsPeakMode : uint8_t //Enum Synthesis.ESourceEffectDynamicsPeakMode
    {
        MeanSquared = 0,
        RootMeanSquared = 1,
        Peak = 2,
        Count = 3,
        ESourceEffectDynamicsPeakMode_MAX = 4
    };

    enum class ESourceEffectDynamicsProcessorType : uint8_t //Enum Synthesis.ESourceEffectDynamicsProcessorType
    {
        Compressor = 0,
        Limiter = 1,
        Expander = 2,
        Gate = 3,
        Count = 4,
        ESourceEffectDynamicsProcessorType_MAX = 5
    };

    enum class EEnvelopeFollowerPeakMode : uint8_t //Enum Synthesis.EEnvelopeFollowerPeakMode
    {
        MeanSquared = 0,
        RootMeanSquared = 1,
        Peak = 2,
        Count = 3,
        EEnvelopeFollowerPeakMode_MAX = 4
    };

    enum class ESourceEffectFilterParam : uint8_t //Enum Synthesis.ESourceEffectFilterParam
    {
        FilterFrequency = 0,
        FilterResonance = 1,
        Count = 2,
        ESourceEffectFilterParam_MAX = 3
    };

    enum class ESourceEffectFilterType : uint8_t //Enum Synthesis.ESourceEffectFilterType
    {
        LowPass = 0,
        HighPass = 1,
        BandPass = 2,
        BandStop = 3,
        Count = 4,
        ESourceEffectFilterType_MAX = 5
    };

    enum class ESourceEffectFilterCircuit : uint8_t //Enum Synthesis.ESourceEffectFilterCircuit
    {
        OnePole = 0,
        StateVariable = 1,
        Ladder = 2,
        Count = 3,
        ESourceEffectFilterCircuit_MAX = 4
    };

    enum class EStereoChannelMode : uint8_t //Enum Synthesis.EStereoChannelMode
    {
        MidSide = 0,
        LeftRight = 1,
        count = 2,
        EStereoChannelMode_MAX = 3
    };

    enum class EPhaserLFOType : uint8_t //Enum Synthesis.EPhaserLFOType
    {
        Sine = 0,
        UpSaw = 1,
        DownSaw = 2,
        Square = 3,
        Triangle = 4,
        Exponential = 5,
        RandomSampleHold = 6,
        Count = 7,
        EPhaserLFOType_MAX = 8
    };

    enum class ERingModulatorTypeSourceEffect : uint8_t //Enum Synthesis.ERingModulatorTypeSourceEffect
    {
        Sine = 0,
        Saw = 1,
        Triangle = 2,
        Square = 3,
        Count = 4,
        ERingModulatorTypeSourceEffect_MAX = 5
    };

    enum class EStereoDelayFiltertype : uint8_t //Enum Synthesis.EStereoDelayFiltertype
    {
        Lowpass = 0,
        Highpass = 1,
        Bandpass = 2,
        Notch = 3,
        Count = 4,
        EStereoDelayFiltertype_MAX = 5
    };

    enum class EStereoDelaySourceEffect : uint8_t //Enum Synthesis.EStereoDelaySourceEffect
    {
        Normal = 0,
        Cross = 1,
        PingPong = 2,
        Count = 3,
        EStereoDelaySourceEffect_MAX = 4
    };

    enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t //Enum Synthesis.ESubmixEffectConvolutionReverbBlockSize
    {
        BlockSize256 = 0,
        BlockSize512 = 1,
        BlockSize1024 = 2,
        ESubmixEffectConvolutionReverbBlockSize_MAX = 3
    };

    enum class ESubmixFilterAlgorithm : uint8_t //Enum Synthesis.ESubmixFilterAlgorithm
    {
        OnePole = 0,
        StateVariable = 1,
        Ladder = 2,
        Count = 3,
        ESubmixFilterAlgorithm_MAX = 4
    };

    enum class ESubmixFilterType : uint8_t //Enum Synthesis.ESubmixFilterType
    {
        LowPass = 0,
        HighPass = 1,
        BandPass = 2,
        BandStop = 3,
        Count = 4,
        ESubmixFilterType_MAX = 5
    };

    enum class ETapLineMode : uint8_t //Enum Synthesis.ETapLineMode
    {
        SendToChannel = 0,
        Panning = 1,
        Disabled = 2,
        ETapLineMode_MAX = 3
    };

    enum class EGranularSynthSeekType : uint8_t //Enum Synthesis.EGranularSynthSeekType
    {
        FromBeginning = 0,
        FromCurrentPosition = 1,
        Count = 2,
        EGranularSynthSeekType_MAX = 3
    };

    enum class EGranularSynthEnvelopeType : uint8_t //Enum Synthesis.EGranularSynthEnvelopeType
    {
        Rectangular = 0,
        Triangle = 1,
        DownwardTriangle = 2,
        UpwardTriangle = 3,
        ExponentialDecay = 4,
        ExponentialIncrease = 5,
        Gaussian = 6,
        Hanning = 7,
        Lanczos = 8,
        Cosine = 9,
        CosineSquared = 10,
        Welch = 11,
        Blackman = 12,
        BlackmanHarris = 13,
        Count = 14,
        EGranularSynthEnvelopeType_MAX = 15
    };

    enum class CurveInterpolationType : uint8_t //Enum Synthesis.CurveInterpolationType
    {
        AUTOINTERP = 0,
        LINEAR = 1,
        CONSTANT = 2,
        CurveInterpolationType_MAX = 3
    };

    enum class ESamplePlayerSeekType : uint8_t //Enum Synthesis.ESamplePlayerSeekType
    {
        FromBeginning = 0,
        FromCurrentPosition = 1,
        FromEnd = 2,
        Count = 3,
        ESamplePlayerSeekType_MAX = 4
    };

    enum class ESynthKnobSize : uint8_t //Enum Synthesis.ESynthKnobSize
    {
        Medium = 0,
        Large = 1,
        Count = 2,
        ESynthKnobSize_MAX = 3
    };

    enum class ESynthSlateColorStyle : uint8_t //Enum Synthesis.ESynthSlateColorStyle
    {
        Light = 0,
        Dark = 1,
        Count = 2,
        ESynthSlateColorStyle_MAX = 3
    };

    enum class ESynthSlateSizeType : uint8_t //Enum Synthesis.ESynthSlateSizeType
    {
        Small = 0,
        Medium = 1,
        Large = 2,
        Count = 3,
        ESynthSlateSizeType_MAX = 4
    };

    enum class EConstantQFFTSizeEnum : uint8_t //Enum AudioSynesthesia.EConstantQFFTSizeEnum
    {
        Min = 0,
        XXSmall = 1,
        XSmall = 2,
        Small = 3,
        Medium = 4,
        Large = 5,
        XLarge = 6,
        XXLarge = 7,
        Max = 8
    };

    enum class EConstantQNormalizationEnum : uint8_t //Enum AudioSynesthesia.EConstantQNormalizationEnum
    {
        EqualEuclideanNorm = 0,
        EqualEnergy = 1,
        EqualAmplitude = 2,
        EConstantQNormalizationEnum_MAX = 3
    };

    enum class ELoudnessNRTCurveTypeEnum : uint8_t //Enum AudioSynesthesia.ELoudnessNRTCurveTypeEnum
    {
        A = 0,
        B = 1,
        C = 2,
        D = 3,
        None = 4,
        ELoudnessNRTCurveTypeEnum_MAX = 5
    };

    enum class ETimeSynthEventQuantization : uint8_t //Enum TimeSynth.ETimeSynthEventQuantization
    {
        None = 0,
        Bars8 = 1,
        Bars4 = 2,
        Bars2 = 3,
        Bar = 4,
        HalfNote = 5,
        HalfNoteTriplet = 6,
        QuarterNote = 7,
        QuarterNoteTriplet = 8,
        EighthNote = 9,
        EighthNoteTriplet = 10,
        SixteenthNote = 11,
        SixteenthNoteTriplet = 12,
        ThirtySecondNote = 13,
        Count = 14,
        ETimeSynthEventQuantization_MAX = 15
    };

    enum class ETimeSynthEnvelopeFollowerPeakMode : uint8_t //Enum TimeSynth.ETimeSynthEnvelopeFollowerPeakMode
    {
        MeanSquared = 0,
        RootMeanSquared = 1,
        Peak = 2,
        Count = 3,
        ETimeSynthEnvelopeFollowerPeakMode_MAX = 4
    };

    enum class ETimeSynthFilterType : uint8_t //Enum TimeSynth.ETimeSynthFilterType
    {
        LowPass = 0,
        HighPass = 1,
        BandPass = 2,
        BandStop = 3,
        Count = 4,
        ETimeSynthFilterType_MAX = 5
    };

    enum class ETimeSynthFilter : uint8_t //Enum TimeSynth.ETimeSynthFilter
    {
        FilterA = 0,
        FilterB = 1,
        Count = 2,
        ETimeSynthFilter_MAX = 3
    };

    enum class ETimeSynthEventClipQuantization : uint8_t //Enum TimeSynth.ETimeSynthEventClipQuantization
    {
        Global = 0,
        None = 1,
        Bars8 = 2,
        Bars4 = 3,
        Bars2 = 4,
        Bar = 5,
        HalfNote = 6,
        HalfNoteTriplet = 7,
        QuarterNote = 8,
        QuarterNoteTriplet = 9,
        EighthNote = 10,
        EighthNoteTriplet = 11,
        SixteenthNote = 12,
        SixteenthNoteTriplet = 13,
        ThirtySecondNote = 14,
        Count = 15,
        ETimeSynthEventClipQuantization_MAX = 16
    };

    enum class ETimeSynthFFTSize : uint8_t //Enum TimeSynth.ETimeSynthFFTSize
    {
        Min_65 = 0,
        Small_257 = 1,
        Medium_513 = 2,
        Large_1025 = 3,
        ETimeSynthFFTSize_MAX = 4
    };

    enum class ETimeSynthBeatDivision : uint8_t //Enum TimeSynth.ETimeSynthBeatDivision
    {
        One = 0,
        Two = 1,
        Four = 2,
        Eight = 3,
        Sixteen = 4,
        Count = 5,
        ETimeSynthBeatDivision_MAX = 6
    };

    enum class EBrushFalloffMode : uint8_t //Enum Landmass.EBrushFalloffMode
    {
        Angle = 0,
        Width = 1,
        EBrushFalloffMode_MAX = 2
    };

    enum class EBrushBlendType : uint8_t //Enum Landmass.EBrushBlendType
    {
        AlphaBlend = 0,
        Min = 1,
        Max = 2,
        Additive = 3
    };

    enum class EYEzProfileRuntimeState : uint8_t //Enum YEzProfile.EYEzProfileRuntimeState
    {
        None = 0,
        ProfileStats = 1,
        FinalizingStats = 2,
        UploadingFiles = 3,
        EYEzProfileRuntimeState_MAX = 4
    };

    enum class EYEZProfileType : uint8_t //Enum YEzProfile.EYEZProfileType
    {
        None = 0,
        FullProfile = 1,
        NetProfile = 2,
        DefaultTrace = 3,
        CPUTrace = 4,
        GPUTrace = 5,
        NETTrace = 6,
        EYEZProfileType_MAX = 7
    };

    enum class EDatasmithAreaLightActorType : uint8_t //Enum DatasmithContent.EDatasmithAreaLightActorType
    {
        Point = 0,
        Spot = 1,
        Rect = 2,
        EDatasmithAreaLightActorType_MAX = 3
    };

    enum class EDatasmithAreaLightActorShape : uint8_t //Enum DatasmithContent.EDatasmithAreaLightActorShape
    {
        Rectangle = 0,
        Disc = 1,
        Sphere = 2,
        Cylinder = 3,
        None = 4,
        EDatasmithAreaLightActorShape_MAX = 5
    };

    enum class EDatasmithCADRetessellationRule : uint8_t //Enum DatasmithContent.EDatasmithCADRetessellationRule
    {
        All = 0,
        SkipDeletedSurfaces = 1,
        EDatasmithCADRetessellationRule_MAX = 2
    };

    enum class EDatasmithCADStitchingTechnique : uint8_t //Enum DatasmithContent.EDatasmithCADStitchingTechnique
    {
        StitchingNone = 0,
        StitchingHeal = 1,
        StitchingSew = 2,
        EDatasmithCADStitchingTechnique_MAX = 3
    };

    enum class EDatasmithImportScene : uint8_t //Enum DatasmithContent.EDatasmithImportScene
    {
        NewLevel = 0,
        CurrentLevel = 1,
        AssetsOnly = 2,
        EDatasmithImportScene_MAX = 3
    };

    enum class EDatasmithImportLightmapMax : uint8_t //Enum DatasmithContent.EDatasmithImportLightmapMax
    {
        LIGHTMAP_65 = 0,
        LIGHTMAP_129 = 1,
        LIGHTMAP_257 = 2,
        LIGHTMAP_513 = 3,
        LIGHTMAP_1025 = 4,
        LIGHTMAP_2049 = 5,
        LIGHTMAP_4097 = 6,
        LIGHTMAP_MAX = 7
    };

    enum class EDatasmithImportLightmapMin : uint8_t //Enum DatasmithContent.EDatasmithImportLightmapMin
    {
        LIGHTMAP_17 = 0,
        LIGHTMAP_33 = 1,
        LIGHTMAP_65 = 2,
        LIGHTMAP_129 = 3,
        LIGHTMAP_257 = 4,
        LIGHTMAP_513 = 5,
        LIGHTMAP_MAX = 6
    };

    enum class EDatasmithImportMaterialQuality : uint8_t //Enum DatasmithContent.EDatasmithImportMaterialQuality
    {
        UseNoFresnelCurves = 0,
        UseSimplifierFresnelCurves = 1,
        UseRealFresnelCurves = 2,
        EDatasmithImportMaterialQuality_MAX = 3
    };

    enum class EDatasmithImportActorPolicy : uint8_t //Enum DatasmithContent.EDatasmithImportActorPolicy
    {
        Update = 0,
        Full = 1,
        Ignore = 2,
        EDatasmithImportActorPolicy_MAX = 3
    };

    enum class EDatasmithImportAssetConflictPolicy : uint8_t //Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
    {
        Replace = 0,
        Update = 1,
        Use = 2,
        Ignore = 3,
        EDatasmithImportAssetConflictPolicy_MAX = 4
    };

    enum class EDatasmithImportSearchPackagePolicy : uint8_t //Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
    {
        Current = 0,
        All = 1,
        EDatasmithImportSearchPackagePolicy_MAX = 2
    };

    enum class EPropertyValueCategory : uint8_t //Enum VariantManagerContent.EPropertyValueCategory
    {
        Undefined = 0,
        Generic = 1,
        RelativeLocation = 2,
        RelativeRotation = 4,
        RelativeScale3D = 8,
        Visibility = 16,
        Material = 32,
        Color = 64,
        Option = 128,
        EPropertyValueCategory_MAX = 129
    };

    enum class ETriangleTessellationMode : uint8_t //Enum EditableMesh.ETriangleTessellationMode
    {
        ThreeTriangles = 0,
        FourTriangles = 1,
        ETriangleTessellationMode_MAX = 2
    };

    enum class EInsetPolygonsMode : uint8_t //Enum EditableMesh.EInsetPolygonsMode
    {
        All = 0,
        CenterPolygonOnly = 1,
        SidePolygonsOnly = 2,
        EInsetPolygonsMode_MAX = 3
    };

    enum class EPolygonEdgeHardness : uint8_t //Enum EditableMesh.EPolygonEdgeHardness
    {
        NewEdgesSoft = 0,
        NewEdgesHard = 1,
        AllEdgesSoft = 2,
        AllEdgesHard = 3,
        EPolygonEdgeHardness_MAX = 4
    };

    enum class EMeshElementAttributeType : uint8_t //Enum EditableMesh.EMeshElementAttributeType
    {
        None = 0,
        FVector4 = 1,
        FVector = 2,
        FVector2D = 3,
        Float = 4,
        Int = 5,
        Bool = 6,
        FName = 7,
        EMeshElementAttributeType_MAX = 8
    };

    enum class EMeshTopologyChange : uint8_t //Enum EditableMesh.EMeshTopologyChange
    {
        NoTopologyChange = 0,
        TopologyChange = 1,
        EMeshTopologyChange_MAX = 2
    };

    enum class EMeshModificationType : uint8_t //Enum EditableMesh.EMeshModificationType
    {
        FirstInterim = 0,
        Interim = 1,
        Final = 2,
        EMeshModificationType_MAX = 3
    };

    enum class EProcMeshSliceCapOption : uint8_t //Enum ProceduralMeshComponent.EProcMeshSliceCapOption
    {
        NoCap = 0,
        CreateNewSectionForCap = 1,
        UseLastSectionForCap = 2,
        EProcMeshSliceCapOption_MAX = 3
    };

    enum class EControlRigComponentMapDirection : uint8_t //Enum ControlRig.EControlRigComponentMapDirection
    {
        Input = 0,
        Output = 1,
        EControlRigComponentMapDirection_MAX = 2
    };

    enum class EControlRigComponentSpace : uint8_t //Enum ControlRig.EControlRigComponentSpace
    {
        WorldSpace = 0,
        ActorSpace = 1,
        ComponentSpace = 2,
        RigSpace = 3,
        LocalSpace = 4,
        Max = 5
    };

    enum class ERigExecutionType : uint8_t //Enum ControlRig.ERigExecutionType
    {
        Runtime = 0,
        Editing = 1,
        Max = 2
    };

    enum class EBoneGetterSetterMode : uint8_t //Enum ControlRig.EBoneGetterSetterMode
    {
        LocalSpace = 0,
        GlobalSpace = 1,
        Max = 2
    };

    enum class ETransformGetterType : uint8_t //Enum ControlRig.ETransformGetterType
    {
        Initial = 0,
        Current = 1,
        Max = 2
    };

    enum class EControlRigClampSpatialMode : uint8_t //Enum ControlRig.EControlRigClampSpatialMode
    {
        Plane = 0,
        Cylinder = 1,
        Sphere = 2,
        EControlRigClampSpatialMode_MAX = 3
    };

    enum class ETransformSpaceMode : uint8_t //Enum ControlRig.ETransformSpaceMode
    {
        LocalSpace = 0,
        GlobalSpace = 1,
        BaseSpace = 2,
        BaseJoint = 3,
        Max = 4
    };

    enum class EControlRigDrawSettings : uint8_t //Enum ControlRig.EControlRigDrawSettings
    {
        Points = 0,
        Lines = 1,
        LineStrip = 2,
        DynamicMesh = 3,
        EControlRigDrawSettings_MAX = 4
    };

    enum class EControlRigDrawHierarchyMode : uint8_t //Enum ControlRig.EControlRigDrawHierarchyMode
    {
        Axes = 0,
        Max = 1
    };

    enum class EControlRigAnimEasingType : uint8_t //Enum ControlRig.EControlRigAnimEasingType
    {
        Linear = 0,
        QuadraticEaseIn = 1,
        QuadraticEaseOut = 2,
        QuadraticEaseInOut = 3,
        CubicEaseIn = 4,
        CubicEaseOut = 5,
        CubicEaseInOut = 6,
        QuarticEaseIn = 7,
        QuarticEaseOut = 8,
        QuarticEaseInOut = 9,
        QuinticEaseIn = 10,
        QuinticEaseOut = 11,
        QuinticEaseInOut = 12,
        SineEaseIn = 13,
        SineEaseOut = 14,
        SineEaseInOut = 15,
        CircularEaseIn = 16,
        CircularEaseOut = 17,
        CircularEaseInOut = 18,
        ExponentialEaseIn = 19,
        ExponentialEaseOut = 20,
        ExponentialEaseInOut = 21,
        ElasticEaseIn = 22,
        ElasticEaseOut = 23,
        ElasticEaseInOut = 24,
        BackEaseIn = 25,
        BackEaseOut = 26,
        BackEaseInOut = 27,
        BounceEaseIn = 28,
        BounceEaseOut = 29,
        BounceEaseInOut = 30,
        EControlRigAnimEasingType_MAX = 31
    };

    enum class EControlRigRotationOrder : uint8_t //Enum ControlRig.EControlRigRotationOrder
    {
        XYZ = 0,
        XZY = 1,
        YXZ = 2,
        YZX = 3,
        ZXY = 4,
        ZYX = 5,
        EControlRigRotationOrder_MAX = 6
    };

    enum class ECRSimPointIntegrateType : uint8_t //Enum ControlRig.ECRSimPointIntegrateType
    {
        Verlet = 0,
        SemiExplicitEuler = 1,
        ECRSimPointIntegrateType_MAX = 2
    };

    enum class ECRSimConstraintType : uint8_t //Enum ControlRig.ECRSimConstraintType
    {
        Distance = 0,
        DistanceFromA = 1,
        DistanceFromB = 2,
        Plane = 3,
        ECRSimConstraintType_MAX = 4
    };

    enum class ECRSimPointForceType : uint8_t //Enum ControlRig.ECRSimPointForceType
    {
        Direction = 0,
        ECRSimPointForceType_MAX = 1
    };

    enum class ECRSimSoftCollisionType : uint8_t //Enum ControlRig.ECRSimSoftCollisionType
    {
        Plane = 0,
        Sphere = 1,
        Cone = 2,
        ECRSimSoftCollisionType_MAX = 3
    };

    enum class EControlRigFKRigExecuteMode : uint8_t //Enum ControlRig.EControlRigFKRigExecuteMode
    {
        Replace = 0,
        Additive = 1,
        Max = 2
    };

    enum class ERigBoneType : uint8_t //Enum ControlRig.ERigBoneType
    {
        Imported = 0,
        User = 1,
        ERigBoneType_MAX = 2
    };

    enum class ERigControlAxis : uint8_t //Enum ControlRig.ERigControlAxis
    {
        X = 0,
        Y = 1,
        Z = 2,
        ERigControlAxis_MAX = 3
    };

    enum class ERigControlValueType : uint8_t //Enum ControlRig.ERigControlValueType
    {
        Initial = 0,
        Current = 1,
        Minimum = 2,
        Maximum = 3,
        ERigControlValueType_MAX = 4
    };

    enum class ERigControlType : uint8_t //Enum ControlRig.ERigControlType
    {
        Bool = 0,
        Float = 1,
        Integer = 2,
        Vector2D = 3,
        Position = 4,
        Scale = 5,
        Rotator = 6,
        Transform = 7,
        TransformNoScale = 8,
        EulerTransform = 9,
        ERigControlType_MAX = 10
    };

    enum class ERigHierarchyImportMode : uint8_t //Enum ControlRig.ERigHierarchyImportMode
    {
        Append = 0,
        Replace = 1,
        ReplaceLocalTransform = 2,
        ReplaceGlobalTransform = 3,
        Max = 4
    };

    enum class EControlRigSetKey : uint8_t //Enum ControlRig.EControlRigSetKey
    {
        DoNotCare = 0,
        Always = 1,
        Never = 2,
        EControlRigSetKey_MAX = 3
    };

    enum class ERigEvent : uint8_t //Enum ControlRig.ERigEvent
    {
        None = 0,
        RequestAutoKey = 1,
        Max = 2
    };

    enum class ERigElementType : uint8_t //Enum ControlRig.ERigElementType
    {
        None = 0,
        Bone = 1,
        Space = 2,
        Control = 4,
        Curve = 8,
        All = 15,
        ERigElementType_MAX = 16
    };

    enum class ERigSpaceType : uint8_t //Enum ControlRig.ERigSpaceType
    {
        Global = 0,
        Bone = 1,
        Control = 2,
        Space = 3,
        ERigSpaceType_MAX = 4
    };

    enum class EAimMode : uint8_t //Enum ControlRig.EAimMode
    {
        AimAtTarget = 0,
        OrientToTarget = 1,
        MAX = 2
    };

    enum class EApplyTransformMode : uint8_t //Enum ControlRig.EApplyTransformMode
    {
        Override = 0,
        Additive = 1,
        Max = 2
    };

    enum class ERigUnitDebugPointMode : uint8_t //Enum ControlRig.ERigUnitDebugPointMode
    {
        Point = 0,
        Vector = 1,
        Max = 2
    };

    enum class ERigUnitDebugTransformMode : uint8_t //Enum ControlRig.ERigUnitDebugTransformMode
    {
        Point = 0,
        Axes = 1,
        Box = 2,
        Max = 3
    };

    enum class EControlRigCurveAlignment : uint8_t //Enum ControlRig.EControlRigCurveAlignment
    {
        Front = 0,
        Stretched = 1,
        EControlRigCurveAlignment_MAX = 2
    };

    enum class EControlRigVectorKind : uint8_t //Enum ControlRig.EControlRigVectorKind
    {
        Direction = 0,
        Location = 1,
        EControlRigVectorKind_MAX = 2
    };

    enum class ERBFVectorDistanceType : uint8_t //Enum ControlRig.ERBFVectorDistanceType
    {
        Euclidean = 0,
        Manhattan = 1,
        ArcLength = 2,
        ERBFVectorDistanceType_MAX = 3
    };

    enum class ERBFQuatDistanceType : uint8_t //Enum ControlRig.ERBFQuatDistanceType
    {
        Euclidean = 0,
        ArcLength = 1,
        SwingAngle = 2,
        TwistAngle = 3,
        ERBFQuatDistanceType_MAX = 4
    };

    enum class ERBFKernelType : uint8_t //Enum ControlRig.ERBFKernelType
    {
        Gaussian = 0,
        Exponential = 1,
        Linear = 2,
        Cubic = 3,
        Quintic = 4,
        ERBFKernelType_MAX = 5
    };

    enum class EControlRigModifyBoneMode : uint8_t //Enum ControlRig.EControlRigModifyBoneMode
    {
        OverrideLocal = 0,
        OverrideGlobal = 1,
        AdditiveLocal = 2,
        AdditiveGlobal = 3,
        Max = 4
    };

    enum class ERigUnitVisualDebugPointMode : uint8_t //Enum ControlRig.ERigUnitVisualDebugPointMode
    {
        Point = 0,
        Vector = 1,
        Max = 2
    };

    enum class EControlRigState : uint8_t //Enum ControlRig.EControlRigState
    {
        Init = 0,
        Update = 1,
        Invalid = 2,
        EControlRigState_MAX = 3
    };

    enum class EEffectorSpaceEnum : uint8_t //Enum PowerIKRuntime.EEffectorSpaceEnum
    {
        ES_Additive = 0,
        ES_World = 1,
        ES_Component = 2,
        ES_MAX = 3
    };

    enum class EPoleVectorModeEnum : uint8_t //Enum PowerIKRuntime.EPoleVectorModeEnum
    {
        PV_None = 0,
        PV_Position = 1,
        PV_Bone = 2,
        PV_AngleOffset = 3,
        PV_MAX = 4
    };

    enum class EImpactDamageOverride : uint8_t //Enum ApexDestruction.EImpactDamageOverride
    {
        IDO_None = 0,
        IDO_On = 1,
        IDO_Off = 2,
        IDO_MAX = 3
    };

    enum class EBuoyancyEvent : uint8_t //Enum Water.EBuoyancyEvent
    {
        EnteredWaterBody = 0,
        ExitedWaterBody = 1,
        EBuoyancyEvent_MAX = 2
    };

    enum class EWaveSpectrumType : uint8_t //Enum Water.EWaveSpectrumType
    {
        Phillips = 0,
        PiersonMoskowitz = 1,
        JONSWAP = 2,
        EWaveSpectrumType_MAX = 3
    };

    enum class EWaterBrushBlendType : uint8_t //Enum Water.EWaterBrushBlendType
    {
        AlphaBlend = 0,
        Min = 1,
        Max = 2,
        Additive = 3
    };

    enum class EWaterBodyType : uint8_t //Enum Water.EWaterBodyType
    {
        River = 0,
        Lake = 1,
        Ocean = 2,
        Transition = 3,
        Num = 4,
        EWaterBodyType_MAX = 5
    };

    enum class EWaterBrushFalloffMode : uint8_t //Enum Water.EWaterBrushFalloffMode
    {
        Angle = 0,
        Width = 1,
        EWaterBrushFalloffMode_MAX = 2
    };

    enum class EYInitializationRequestSettingTypes : uint8_t //Enum YInitializationPlugin.EYInitializationRequestSettingTypes
    {
        Invalid = 0,
        AllComplete = 1,
        IgnoreCharacterCustomization = 2,
        EYInitializationRequestSettingTypes_MAX = 3
    };

    enum class ESlopeWarpQuality : uint8_t //Enum Strider.ESlopeWarpQuality
    {
        Capsule = 0,
        PerFootRay = 1,
        PerFootShape = 2,
        LODBased = 3,
        ESlopeWarpQuality_MAX = 4
    };

    enum class ESlopeRollCompensation : uint8_t //Enum Strider.ESlopeRollCompensation
    {
        None = 0,
        AdjustHips = 1,
        AdjustFeet = 2,
        ESlopeRollCompensation_MAX = 3
    };

    enum class ESlopeDetectionMode : uint8_t //Enum Strider.ESlopeDetectionMode
    {
        ManualSlope = 0,
        AutomaticSlope = 1,
        ESlopeDetectionMode_MAX = 2
    };

    enum class EStrideVectorMethod : uint8_t //Enum Strider.EStrideVectorMethod
    {
        ManualVelocity = 0,
        ActorVelocity = 1,
        EStrideVectorMethod_MAX = 2
    };

    enum class EDLSSSettingOverride : uint8_t //Enum DLSS.EDLSSSettingOverride
    {
        Enabled = 0,
        Disabled = 1,
        UseProjectSettings = 2,
        EDLSSSettingOverride_MAX = 3
    };

    enum class UDLSSMode : uint8_t //Enum DLSSBlueprint.UDLSSMode
    {
        Off = 0,
        Auto = 1,
        UltraQuality = 2,
        Quality = 3,
        Balanced = 4,
        Performance = 5,
        UltraPerformance = 6,
        UDLSSMode_MAX = 7
    };

    enum class UDLSSSupport : uint8_t //Enum DLSSBlueprint.UDLSSSupport
    {
        Supported = 0,
        NotSupported = 1,
        NotSupportedIncompatibleHardware = 2,
        NotSupportedDriverOutOfDate = 3,
        NotSupportedOperatingSystemOutOfDate = 4,
        NotSupportedByPlatformAtBuildTime = 5,
        NotSupportedIncompatibleAPICaptureToolActive = 6,
        UDLSSSupport_MAX = 7
    };

    enum class EIplAudioEngine : uint8_t //Enum SteamAudio.EIplAudioEngine
    {
        UNREAL = 0,
        EIplAudioEngine_MAX = 1
    };

    enum class EIplRayTracerType : uint8_t //Enum SteamAudio.EIplRayTracerType
    {
        PHONON = 0,
        EMBREE = 1,
        RADEONRAYS = 2,
        EIplRayTracerType_MAX = 3
    };

    enum class EIplConvolutionType : uint8_t //Enum SteamAudio.EIplConvolutionType
    {
        PHONON = 0,
        TRUEAUDIONEXT = 1,
        EIplConvolutionType_MAX = 2
    };

    enum class EIplSimulationType : uint8_t //Enum SteamAudio.EIplSimulationType
    {
        REALTIME = 0,
        BAKED = 1,
        DISABLED = 2,
        EIplSimulationType_MAX = 3
    };

    enum class EIplDirectOcclusionMode : uint8_t //Enum SteamAudio.EIplDirectOcclusionMode
    {
        NONE = 0,
        DIRECTOCCLUSION_NOTRANSMISSION = 1,
        DIRECTOCCLUSION_TRANSMISSIONBYVOLUME = 2,
        DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY = 3,
        EIplDirectOcclusionMode_MAX = 4
    };

    enum class EIplDirectOcclusionMethod : uint8_t //Enum SteamAudio.EIplDirectOcclusionMethod
    {
        RAYCAST = 0,
        VOLUMETRIC = 1,
        EIplDirectOcclusionMethod_MAX = 2
    };

    enum class EIplHrtfInterpolationMethod : uint8_t //Enum SteamAudio.EIplHrtfInterpolationMethod
    {
        NEAREST = 0,
        BILINEAR = 1,
        EIplHrtfInterpolationMethod_MAX = 2
    };

    enum class EIplSpatializationMethod : uint8_t //Enum SteamAudio.EIplSpatializationMethod
    {
        PANNING = 0,
        HRTF = 1,
        EIplSpatializationMethod_MAX = 2
    };

    enum class EQualitySettings : uint8_t //Enum SteamAudio.EQualitySettings
    {
        LOW = 0,
        MEDIUM = 1,
        HIGH = 2,
        CUSTOM = 3,
        EQualitySettings_MAX = 4
    };

    enum class EPhononMaterial : uint8_t //Enum SteamAudio.EPhononMaterial
    {
        GENERIC = 0,
        BRICK = 1,
        CONCRETE = 2,
        CERAMIC = 3,
        GRAVEL = 4,
        CARPET = 5,
        GLASS = 6,
        PLASTER = 7,
        WOOD = 8,
        METAL = 9,
        ROCK = 10,
        CUSTOM = 11,
        EPhononMaterial_MAX = 12
    };

    enum class EPhononProbeMobility : uint8_t //Enum SteamAudio.EPhononProbeMobility
    {
        STATIC = 0,
        DYNAMIC = 1,
        EPhononProbeMobility_MAX = 2
    };

    enum class EPhononProbePlacementStrategy : uint8_t //Enum SteamAudio.EPhononProbePlacementStrategy
    {
        CENTROID = 0,
        UNIFORM_FLOOR = 1,
        EPhononProbePlacementStrategy_MAX = 2
    };

    enum class EYPlayerBattleEyeActionType : uint8_t //Enum YBattleEye.EYPlayerBattleEyeActionType
    {
        Ban = 0,
        Kick = 1,
        UnBan = 2,
        Message = 3,
        Invalid = 4,
        EYPlayerBattleEyeActionType_MAX = 5
    };

    enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t //Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
    {
        CancelAbilityImmediately = 0,
        RemoveAbilityOnEnd = 1,
        DoNothing = 2,
        EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
    };

    enum class EDataRegistryAcquireStatus : uint8_t //Enum DataRegistry.EDataRegistryAcquireStatus
    {
        NotStarted = 0,
        WaitingForInitialAcquire = 1,
        InitialAcquireFinished = 2,
        WaitingForResources = 3,
        AcquireFinished = 4,
        AcquireError = 5,
        DoesNotExist = 6,
        EDataRegistryAcquireStatus_MAX = 7
    };

    enum class EGameplayEffectAttributeCaptureSource : uint8_t //Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
    {
        Source = 0,
        Target = 1,
        EGameplayEffectAttributeCaptureSource_MAX = 2
    };

    enum class ETaskResourceOverlapPolicy : uint8_t //Enum GameplayTasks.ETaskResourceOverlapPolicy
    {
        StartOnTop = 0,
        StartAtEnd = 1,
        ETaskResourceOverlapPolicy_MAX = 2
    };

    enum class EGameplayTaskRunResult : uint8_t //Enum GameplayTasks.EGameplayTaskRunResult
    {
        Error = 0,
        Failed = 1,
        Success_Paused = 2,
        Success_Active = 3,
        Success_Finished = 4,
        EGameplayTaskRunResult_MAX = 5
    };

    enum class EGameplayAbilityActivationMode : uint8_t //Enum GameplayAbilities.EGameplayAbilityActivationMode
    {
        Authority = 0,
        NonAuthority = 1,
        Predicting = 2,
        Confirmed = 3,
        Rejected = 4,
        EGameplayAbilityActivationMode_MAX = 5
    };

    enum class EAbilityGenericReplicatedEvent : uint8_t //Enum GameplayAbilities.EAbilityGenericReplicatedEvent
    {
        GenericConfirm = 0,
        GenericCancel = 1,
        InputPressed = 2,
        InputReleased = 3,
        GenericSignalFromClient = 4,
        GenericSignalFromServer = 5,
        GameCustom1 = 6,
        GameCustom2 = 7,
        GameCustom3 = 8,
        GameCustom4 = 9,
        GameCustom5 = 10,
        GameCustom6 = 11,
        MAX = 12
    };

    enum class EFastArraySerializerDeltaFlags : uint8_t //Enum Engine.EFastArraySerializerDeltaFlags
    {
        None = 0,
        HasBeenSerialized = 1,
        HasDeltaBeenRequested = 2,
        IsUsingDeltaSerialization = 4,
        EFastArraySerializerDeltaFlags_MAX = 5
    };

    enum class EGameplayCueEvent : uint8_t //Enum GameplayAbilities.EGameplayCueEvent
    {
        OnActive = 0,
        WhileActive = 1,
        Executed = 2,
        Removed = 3,
        EGameplayCueEvent_MAX = 4
    };

    enum class EGameplayEffectReplicationMode : uint8_t //Enum GameplayAbilities.EGameplayEffectReplicationMode
    {
        Minimal = 0,
        Mixed = 1,
        Full = 2,
        EGameplayEffectReplicationMode_MAX = 3
    };

    enum class EAbilityTaskWaitState : uint8_t //Enum GameplayAbilities.EAbilityTaskWaitState
    {
        WaitingOnGame = 1,
        WaitingOnUser = 2,
        WaitingOnAvatar = 4,
        EAbilityTaskWaitState_MAX = 5
    };

    enum class ERootMotionMoveToActorTargetOffsetType : uint8_t //Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
    {
        AlignFromTargetToSource = 0,
        AlignToTargetForward = 1,
        AlignToWorldSpace = 2,
        ERootMotionMoveToActorTargetOffsetType_MAX = 3
    };

    enum class EAbilityTaskNetSyncType : uint8_t //Enum GameplayAbilities.EAbilityTaskNetSyncType
    {
        BothWait = 0,
        OnlyServerWait = 1,
        OnlyClientWait = 2,
        EAbilityTaskNetSyncType_MAX = 3
    };

    enum class EWaitAttributeChangeComparison : uint8_t //Enum GameplayAbilities.EWaitAttributeChangeComparison
    {
        None = 0,
        GreaterThan = 1,
        LessThan = 2,
        GreaterThanOrEqualTo = 3,
        LessThanOrEqualTo = 4,
        NotEqualTo = 5,
        ExactlyEqualTo = 6,
        MAX = 7
    };

    enum class EGameplayAbilityInputBinds : uint8_t //Enum GameplayAbilities.EGameplayAbilityInputBinds
    {
        Ability1 = 0,
        Ability2 = 1,
        Ability3 = 2,
        Ability4 = 3,
        Ability5 = 4,
        Ability6 = 5,
        Ability7 = 6,
        Ability8 = 7,
        Ability9 = 8,
        EGameplayAbilityInputBinds_MAX = 9
    };

    enum class ETargetDataFilterSelf : uint8_t //Enum GameplayAbilities.ETargetDataFilterSelf
    {
        TDFS_Any = 0,
        TDFS_NoSelf = 1,
        TDFS_NoOthers = 2,
        TDFS_MAX = 3
    };

    enum class EGameplayAbilityTargetingLocationType : uint8_t //Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
    {
        LiteralTransform = 0,
        ActorTransform = 1,
        SocketTransform = 2,
        EGameplayAbilityTargetingLocationType_MAX = 3
    };

    enum class EGameplayTargetingConfirmation : uint8_t //Enum GameplayAbilities.EGameplayTargetingConfirmation
    {
        Instant = 0,
        UserConfirmed = 1,
        Custom = 2,
        CustomMulti = 3,
        EGameplayTargetingConfirmation_MAX = 4
    };

    enum class ERepAnimPositionMethod : uint8_t //Enum GameplayAbilities.ERepAnimPositionMethod
    {
        Position = 0,
        CurrentSectionId = 1,
        ERepAnimPositionMethod_MAX = 2
    };

    enum class EGameplayAbilityTriggerSource : uint8_t //Enum GameplayAbilities.EGameplayAbilityTriggerSource
    {
        GameplayEvent = 0,
        OwnedTagAdded = 1,
        OwnedTagPresent = 2,
        EGameplayAbilityTriggerSource_MAX = 3
    };

    enum class EGameplayAbilityReplicationPolicy : uint8_t //Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
    {
        ReplicateNo = 0,
        ReplicateYes = 1,
        EGameplayAbilityReplicationPolicy_MAX = 2
    };

    enum class EGameplayAbilityNetSecurityPolicy : uint8_t //Enum GameplayAbilities.EGameplayAbilityNetSecurityPolicy
    {
        ClientOrServer = 0,
        ServerOnlyExecution = 1,
        ServerOnlyTermination = 2,
        ServerOnly = 3,
        EGameplayAbilityNetSecurityPolicy_MAX = 4
    };

    enum class EGameplayAbilityNetExecutionPolicy : uint8_t //Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
    {
        LocalPredicted = 0,
        LocalOnly = 1,
        ServerInitiated = 2,
        ServerOnly = 3,
        EGameplayAbilityNetExecutionPolicy_MAX = 4
    };

    enum class EGameplayAbilityInstancingPolicy : uint8_t //Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
    {
        NonInstanced = 0,
        InstancedPerActor = 1,
        InstancedPerExecution = 2,
        EGameplayAbilityInstancingPolicy_MAX = 3
    };

    enum class EGameplayCuePayloadType : uint8_t //Enum GameplayAbilities.EGameplayCuePayloadType
    {
        CueParameters = 0,
        FromSpec = 1,
        EGameplayCuePayloadType_MAX = 2
    };

    enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t //Enum GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
    {
        NeverReset = 0,
        ResetPeriod = 1,
        ExecuteAndResetPeriod = 2,
        EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3
    };

    enum class EGameplayEffectStackingExpirationPolicy : uint8_t //Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
    {
        ClearEntireStack = 0,
        RemoveSingleStackAndRefreshDuration = 1,
        RefreshDuration = 2,
        EGameplayEffectStackingExpirationPolicy_MAX = 3
    };

    enum class EGameplayEffectStackingPeriodPolicy : uint8_t //Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
    {
        ResetOnSuccessfulApplication = 0,
        NeverReset = 1,
        EGameplayEffectStackingPeriodPolicy_MAX = 2
    };

    enum class EGameplayEffectStackingDurationPolicy : uint8_t //Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
    {
        RefreshOnSuccessfulApplication = 0,
        NeverRefresh = 1,
        EGameplayEffectStackingDurationPolicy_MAX = 2
    };

    enum class EGameplayEffectDurationType : uint8_t //Enum GameplayAbilities.EGameplayEffectDurationType
    {
        Instant = 0,
        Infinite = 1,
        HasDuration = 2,
        EGameplayEffectDurationType_MAX = 3
    };

    enum class EGameplayEffectScopedModifierAggregatorType : uint8_t //Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
    {
        CapturedAttributeBacked = 0,
        Transient = 1,
        EGameplayEffectScopedModifierAggregatorType_MAX = 2
    };

    enum class EAttributeBasedFloatCalculationType : uint8_t //Enum GameplayAbilities.EAttributeBasedFloatCalculationType
    {
        AttributeMagnitude = 0,
        AttributeBaseValue = 1,
        AttributeBonusMagnitude = 2,
        AttributeMagnitudeEvaluatedUpToChannel = 3,
        EAttributeBasedFloatCalculationType_MAX = 4
    };

    enum class EGameplayEffectMagnitudeCalculation : uint8_t //Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
    {
        ScalableFloat = 0,
        AttributeBased = 1,
        CustomCalculationClass = 2,
        SetByCaller = 3,
        EGameplayEffectMagnitudeCalculation_MAX = 4
    };

    enum class EGameplayTagEventType : uint8_t //Enum GameplayAbilities.EGameplayTagEventType
    {
        NewOrRemoved = 0,
        AnyCountChange = 1,
        EGameplayTagEventType_MAX = 2
    };

    enum class EGameplayEffectStackingType : uint8_t //Enum GameplayAbilities.EGameplayEffectStackingType
    {
        None = 0,
        AggregateBySource = 1,
        AggregateByTarget = 2,
        EGameplayEffectStackingType_MAX = 3
    };

    enum class EGameplayModOp : uint8_t //Enum GameplayAbilities.EGameplayModOp
    {
        Additive = 0,
        Multiplicitive = 1,
        Division = 2,
        Override = 3,
        Max = 4
    };

    enum class EGameplayModEvaluationChannel : uint8_t //Enum GameplayAbilities.EGameplayModEvaluationChannel
    {
        Channel0 = 0,
        Channel1 = 1,
        Channel2 = 2,
        Channel3 = 3,
        Channel4 = 4,
        Channel5 = 5,
        Channel6 = 6,
        Channel7 = 7,
        Channel8 = 8,
        Channel9 = 9,
        Channel_MAX = 10,
        EGameplayModEvaluationChannel_MAX = 11
    };

    enum class EMetaDataRegistrySourceAssetUsage : uint8_t //Enum DataRegistry.EMetaDataRegistrySourceAssetUsage
    {
        NoAssets = 0,
        SearchAssets = 1,
        RegisterAssets = 2,
        SearchAndRegisterAssets = 3,
        EMetaDataRegistrySourceAssetUsage_MAX = 4
    };

    enum class EDataRegistrySubsystemGetItemResult : uint8_t //Enum DataRegistry.EDataRegistrySubsystemGetItemResult
    {
        Found = 0,
        NotFound = 1,
        EDataRegistrySubsystemGetItemResult_MAX = 2
    };

    enum class EDataRegistryAvailability : uint8_t //Enum DataRegistry.EDataRegistryAvailability
    {
        DoesNotExist = 0,
        Unknown = 1,
        Remote = 2,
        OnDisk = 3,
        LocalAsset = 4,
        PreCached = 5,
        EDataRegistryAvailability_MAX = 6
    };

    enum class ESlateAccessibleBehavior : uint8_t //Enum UMG.ESlateAccessibleBehavior
    {
        NotAccessible = 0,
        Auto = 1,
        Summary = 2,
        Custom = 3,
        ToolTip = 4,
        ESlateAccessibleBehavior_MAX = 5
    };

    enum class EUINavigation : uint8_t //Enum SlateCore.EUINavigation
    {
        Left = 0,
        Right = 1,
        Up = 2,
        Down = 3,
        Next = 4,
        Previous = 5,
        Num = 6,
        Invalid = 7,
        EUINavigation_MAX = 8
    };

    enum class ECheckBoxState : uint8_t //Enum SlateCore.ECheckBoxState
    {
        Unchecked = 0,
        Checked = 1,
        Undetermined = 2,
        ECheckBoxState_MAX = 3
    };

    enum class EWidgetClipping : uint8_t //Enum SlateCore.EWidgetClipping
    {
        Inherit = 0,
        ClipToBounds = 1,
        ClipToBoundsWithoutIntersecting = 2,
        ClipToBoundsAlways = 3,
        OnDemand = 4,
        EWidgetClipping_MAX = 5
    };

    enum class EMouseCursor : uint8_t //Enum CoreUObject.EMouseCursor
    {
        None = 0,
        Default = 1,
        TextEditBeam = 2,
        ResizeLeftRight = 3,
        ResizeUpDown = 4,
        ResizeSouthEast = 5,
        ResizeSouthWest = 6,
        CardinalCross = 7,
        Crosshairs = 8,
        Hand = 9,
        GrabHand = 10,
        GrabHandClosed = 11,
        SlashedCircle = 12,
        EyeDropper = 13,
        EMouseCursor_MAX = 14
    };

    enum class ESlateBrushImageType : uint8_t //Enum SlateCore.ESlateBrushImageType
    {
        NoImage = 0,
        FullColor = 1,
        Linear = 2,
        ESlateBrushImageType_MAX = 3
    };

    enum class ESlateBrushMirrorType : uint8_t //Enum SlateCore.ESlateBrushMirrorType
    {
        NoMirror = 0,
        Horizontal = 1,
        Vertical = 2,
        Both = 3,
        ESlateBrushMirrorType_MAX = 4
    };

    enum class ESlateBrushTileType : uint8_t //Enum SlateCore.ESlateBrushTileType
    {
        NoTile = 0,
        Horizontal = 1,
        Vertical = 2,
        Both = 3,
        ESlateBrushTileType_MAX = 4
    };

    enum class ESlateBrushDrawType : uint8_t //Enum SlateCore.ESlateBrushDrawType
    {
        NoDrawType = 0,
        Box = 1,
        Border = 2,
        Image = 3,
        ESlateBrushDrawType_MAX = 4
    };

    enum class ESlateColorStylingMode : uint8_t //Enum SlateCore.ESlateColorStylingMode
    {
        UseColor_Specified = 0,
        UseColor_Specified_Link = 1,
        UseColor_Foreground = 2,
        UseColor_Foreground_Subdued = 3,
        UseColor_MAX = 4
    };

    enum class ESlateVisibility : uint8_t //Enum UMG.ESlateVisibility
    {
        Visible = 0,
        Collapsed = 1,
        Hidden = 2,
        HitTestInvisible = 3,
        SelfHitTestInvisible = 4,
        ESlateVisibility_MAX = 5
    };

    enum class EUINavigationRule : uint8_t //Enum SlateCore.EUINavigationRule
    {
        Escape = 0,
        Explicit = 1,
        Wrap = 2,
        Stop = 3,
        Custom = 4,
        CustomBoundary = 5,
        Invalid = 6,
        EUINavigationRule_MAX = 7
    };

    enum class EFlowDirectionPreference : uint8_t //Enum SlateCore.EFlowDirectionPreference
    {
        Inherit = 0,
        Culture = 1,
        LeftToRight = 2,
        RightToLeft = 3,
        EFlowDirectionPreference_MAX = 4
    };

    enum class EColorVisionDeficiency : uint8_t //Enum SlateCore.EColorVisionDeficiency
    {
        NormalVision = 0,
        Deuteranope = 1,
        Protanope = 2,
        Tritanope = 3,
        EColorVisionDeficiency_MAX = 4
    };

    enum class EMouseLockMode : uint8_t //Enum Engine.EMouseLockMode
    {
        DoNotLock = 0,
        LockOnCapture = 1,
        LockAlways = 2,
        LockInFullscreen = 3,
        EMouseLockMode_MAX = 4
    };

    enum class EWindowTitleBarMode : uint8_t //Enum Engine.EWindowTitleBarMode
    {
        Overlay = 0,
        VerticalBox = 1,
        EWindowTitleBarMode_MAX = 2
    };

    enum class ESelectInfo : uint8_t //Enum SlateCore.ESelectInfo
    {
        OnKeyPress = 0,
        OnNavigation = 1,
        OnMouseClick = 2,
        Direct = 3,
        ESelectInfo_MAX = 4
    };

    enum class ETextCommit : uint8_t //Enum SlateCore.ETextCommit
    {
        Default = 0,
        OnEnter = 1,
        OnUserMovedFocus = 2,
        OnCleared = 3,
        ETextCommit_MAX = 4
    };

    enum class ETextJustify : uint8_t //Enum Slate.ETextJustify
    {
        Left = 0,
        Center = 1,
        Right = 2,
        ETextJustify_MAX = 3
    };

    enum class ETextFlowDirection : uint8_t //Enum Slate.ETextFlowDirection
    {
        Auto = 0,
        LeftToRight = 1,
        RightToLeft = 2,
        ETextFlowDirection_MAX = 3
    };

    enum class ETextShapingMethod : uint8_t //Enum SlateCore.ETextShapingMethod
    {
        Auto = 0,
        KerningOnly = 1,
        FullShaping = 2,
        ETextShapingMethod_MAX = 3
    };

    enum class EVirtualKeyboardDismissAction : uint8_t //Enum Slate.EVirtualKeyboardDismissAction
    {
        TextChangeOnDismiss = 0,
        TextCommitOnAccept = 1,
        TextCommitOnDismiss = 2,
        EVirtualKeyboardDismissAction_MAX = 3
    };

    enum class EVirtualKeyboardTrigger : uint8_t //Enum Slate.EVirtualKeyboardTrigger
    {
        OnFocusByPointer = 0,
        OnAllFocusEvents = 1,
        EVirtualKeyboardTrigger_MAX = 2
    };

    enum class EVirtualKeyboardType : uint8_t //Enum UMG.EVirtualKeyboardType
    {
        Default = 0,
        Number = 1,
        Web = 2,
        Email = 3,
        Password = 4,
        AlphaNumeric = 5,
        EVirtualKeyboardType_MAX = 6
    };

    enum class EMenuPlacement : uint8_t //Enum SlateCore.EMenuPlacement
    {
        MenuPlacement_BelowAnchor = 0,
        MenuPlacement_CenteredBelowAnchor = 1,
        MenuPlacement_BelowRightAnchor = 2,
        MenuPlacement_ComboBox = 3,
        MenuPlacement_ComboBoxRight = 4,
        MenuPlacement_MenuRight = 5,
        MenuPlacement_AboveAnchor = 6,
        MenuPlacement_CenteredAboveAnchor = 7,
        MenuPlacement_AboveRightAnchor = 8,
        MenuPlacement_MenuLeft = 9,
        MenuPlacement_Center = 10,
        MenuPlacement_RightLeftCenter = 11,
        MenuPlacement_MatchBottomLeft = 12,
        MenuPlacement_MAX = 13
    };

    enum class ETextWrappingPolicy : uint8_t //Enum Slate.ETextWrappingPolicy
    {
        DefaultWrapping = 0,
        AllowPerCharacterWrapping = 1,
        ETextWrappingPolicy_MAX = 2
    };

    enum class EWidgetAnimationEvent : uint8_t //Enum UMG.EWidgetAnimationEvent
    {
        Started = 0,
        Finished = 1,
        EWidgetAnimationEvent_MAX = 2
    };

    enum class EInputEvent : uint8_t //Enum Engine.EInputEvent
    {
        IE_Pressed = 0,
        IE_Released = 1,
        IE_Repeat = 2,
        IE_DoubleClick = 3,
        IE_Axis = 4,
        IE_MAX = 5
    };

    enum class EUMGSequencePlayMode : uint8_t //Enum UMG.EUMGSequencePlayMode
    {
        Forward = 0,
        Reverse = 1,
        PingPong = 2,
        EUMGSequencePlayMode_MAX = 3
    };

    enum class EWidgetTickFrequency : uint8_t //Enum UMG.EWidgetTickFrequency
    {
        Never = 0,
        Auto = 1,
        EWidgetTickFrequency_MAX = 2
    };

    enum class EYRootZLayer : uint8_t //Enum ScreenSystem.EYRootZLayer
    {
        Screens = 0,
        NavigationScreen = 1,
        ServerUnavailableScreen = 2,
        Escape = 3,
        Dialogs = 4,
        EYRootZLayer_MAX = 5
    };

    enum class EYButtonsLayout : uint8_t //Enum ScreenSystem.EYButtonsLayout
    {
        None = 0,
        OK = 1,
        OKAndCancel = 2,
        EYButtonsLayout_MAX = 3
    };

    enum class EYScreenType : uint8_t //Enum ScreenSystem.EYScreenType
    {
        None = 0,
        LaunchBay = 1,
        FortunaPass = 2,
        Loadout = 3,
        Crafting = 4,
        Factions = 5,
        Apperence = 6,
        Shop = 7,
        Inventory = 8,
        EYScreenType_MAX = 9
    };

    enum class EYCodeConventionStandardEnum : uint8_t //Enum YConventionPlugin.EYCodeConventionStandardEnum
    {
        ValueA = 0,
        ValueB = 1,
        ValueC = 2,
        Count = 3,
        EYCodeConventionStandardEnum_MAX = 4
    };

    enum class EYMetaConverterTypes : uint8_t //Enum YExcelDataConverter.EYMetaConverterTypes
    {
        None = 0,
        ItemToGame = 1,
        Items = 2,
        Upgrading = 3,
        Crafting = 4,
        Contracts = 5,
        PlayerQuarters = 6,
        UpgradeNodes = 7,
        KMarkGeneratorRate = 8,
        AurumGeneratorRate = 9,
        StashIncrease = 10,
        SafetyPockedIncrease = 11,
        WorkbenchTimeReduction = 12,
        DailyCrateUpgradeCosts = 13,
        FortunaPassActions = 14,
        FortunaPassSeasonLevels = 15,
        All = 16,
        EYMetaConverterTypes_MAX = 17
    };

    enum class EYAccountLinkingResultCode : uint8_t //Enum YPlatformUtils.EYAccountLinkingResultCode
    {
        Success = 0,
        Failure_InvalidTargetPlatform = 1,
        Failure_WontLoginToCurrentPlatform = 2,
        Failure_NoPlayFabAccountExists = 3,
        Failure_TooManyPlayFabAccountsExist = 4,
        Failure_PlatformAccountAlreadyLinked = 5,
        Failure_CouldNotMergeAccountData = 6,
        Failure_Internal = 7,
        Failure_Azure = 8,
        Failure_PlayFab = 9,
        Failure_Timeout = 10,
        Failure_Unknown = 11,
        EYAccountLinkingResultCode_MAX = 12
    };

    enum class EYFriendsImportResultCode : uint8_t //Enum YPlatformUtils.EYFriendsImportResultCode
    {
        Success = 0,
        Failure_NoUsersToImport = 1,
        Failure_UnsupportedPlatform = 2,
        Failure_Internal = 3,
        Failure_Azure = 4,
        Failure_PlayFab = 5,
        Failure_Unknown = 6,
        Failure_InvalidRequest = 7,
        Failure_EgsRequest = 8,
        EYFriendsImportResultCode_MAX = 9
    };

    enum class EYRollbackCheckResult : uint8_t //Enum YPlatformUtils.EYRollbackCheckResult
    {
        Invalid = 0,
        NoRollbackNeeded = 1,
        RollbackCompleted = 2,
        RollbackCheckFailure = 3,
        RollbackNoBackupsFoundFailure = 4,
        RollbackApplyFailure = 5,
        RollbackStoreFailure = 6,
        EYRollbackCheckResult_MAX = 7
    };

    enum class EYAuthenticationState : uint8_t //Enum YPlatformUtils.EYAuthenticationState
    {
        Init = 0,
        LegalAgreementsNotAccepted = 1,
        NotLoggedInToPlayFab = 2,
        ServerNotLoggedInToPlayFab = 3,
        DisconnectedFromBackend = 4,
        MaintenanceMode = 5,
        CompletelyLoggedIn = 6,
        EYAuthenticationState_MAX = 7
    };

    enum class EYGamePlatform : uint8_t //Enum YPlatformUtils.EYGamePlatform
    {
        NONE = 0,
        EPIC = 1,
        STEAM = 2,
        ALL = 3,
        EYGamePlatform_MAX = 4
    };

    enum class EFlipbookCollisionMode : uint8_t //Enum Paper2D.EFlipbookCollisionMode
    {
        NoCollision = 0,
        FirstFrameCollision = 1,
        EachFrameCollision = 2,
        EFlipbookCollisionMode_MAX = 3
    };

    enum class EPaperSpriteAtlasPadding : uint8_t //Enum Paper2D.EPaperSpriteAtlasPadding
    {
        DilateBorder = 0,
        PadWithZero = 1,
        EPaperSpriteAtlasPadding_MAX = 2
    };

    enum class ETileMapProjectionMode : uint8_t //Enum Paper2D.ETileMapProjectionMode
    {
        Orthogonal = 0,
        IsometricDiamond = 1,
        IsometricStaggered = 2,
        HexagonalStaggered = 3,
        ETileMapProjectionMode_MAX = 4
    };

    enum class ESpritePivotMode : uint8_t //Enum Paper2D.ESpritePivotMode
    {
        Top_Left = 0,
        Top_Center = 1,
        Top_Right = 2,
        Center_Left = 3,
        Center_Center = 4,
        Center_Right = 5,
        Bottom_Left = 6,
        Bottom_Center = 7,
        Bottom_Right = 8,
        Custom = 9,
        ESpritePivotMode_MAX = 10
    };

    enum class ESpritePolygonMode : uint8_t //Enum Paper2D.ESpritePolygonMode
    {
        SourceBoundingBox = 0,
        TightBoundingBox = 1,
        ShrinkWrapped = 2,
        FullyCustom = 3,
        Diced = 4,
        ESpritePolygonMode_MAX = 5
    };

    enum class ESpriteShapeType : uint8_t //Enum Paper2D.ESpriteShapeType
    {
        Box = 0,
        Circle = 1,
        Polygon = 2,
        ESpriteShapeType_MAX = 3
    };

    enum class ESpriteCollisionMode : uint8_t //Enum Paper2D.ESpriteCollisionMode
    {
        None = 0,
        Use2DPhysics = 1,
        Use3DPhysics = 2,
        ESpriteCollisionMode_MAX = 3
    };

    enum class EInitialOscillatorOffset : uint8_t //Enum GameplayCameras.EInitialOscillatorOffset
    {
        EOO_OffsetRandom = 0,
        EOO_OffsetZero = 1,
        EOO_MAX = 2
    };

    enum class EOscillatorWaveform : uint8_t //Enum GameplayCameras.EOscillatorWaveform
    {
        SineWave = 0,
        PerlinNoise = 1,
        EOscillatorWaveform_MAX = 2
    };

    enum class EInitialWaveOscillatorOffsetType : uint8_t //Enum GameplayCameras.EInitialWaveOscillatorOffsetType
    {
        Random = 0,
        Zero = 1,
        EInitialWaveOscillatorOffsetType_MAX = 2
    };

    enum class ETemplateSectionPropertyScaleType : uint8_t //Enum TemplateSequence.ETemplateSectionPropertyScaleType
    {
        FloatProperty = 0,
        TransformPropertyLocationOnly = 1,
        TransformPropertyRotationOnly = 2,
        ETemplateSectionPropertyScaleType_MAX = 3
    };

    enum class EOodleEnableMode : uint8_t //Enum OodleNetworkHandlerComponent.EOodleEnableMode
    {
        AlwaysEnabled = 0,
        WhenCompressedPacketReceived = 1,
        EOodleEnableMode_MAX = 2
    };

    enum class EChaosClothTetherMode : uint8_t //Enum ChaosCloth.EChaosClothTetherMode
    {
        FastTetherFastLength = 0,
        AccurateTetherFastLength = 1,
        AccurateTetherAccurateLength = 2,
        MaxChaosClothTetherMode = 3,
        EChaosClothTetherMode_MAX = 4
    };

    enum class EChaosWeightMapTarget : uint8_t //Enum ChaosCloth.EChaosWeightMapTarget
    {
        None = 0,
        MaxDistance = 1,
        BackstopDistance = 2,
        BackstopRadius = 3,
        AnimDriveStiffness = 4,
        AnimDriveDamping = 5,
        TetherStiffness = 6,
        EChaosWeightMapTarget_MAX = 7
    };

    enum class ELocationZToSpawnEnum : uint8_t //Enum ChaosNiagara.ELocationZToSpawnEnum
    {
        ChaosNiagara_LocationZToSpawn_None = 0,
        ChaosNiagara_LocationZToSpawn_Min = 1,
        ChaosNiagara_LocationZToSpawn_Max = 2,
        ChaosNiagara_LocationZToSpawn_MinMax = 3,
        ChaosNiagara_Max = 4
    };

    enum class ELocationYToSpawnEnum : uint8_t //Enum ChaosNiagara.ELocationYToSpawnEnum
    {
        ChaosNiagara_LocationYToSpawn_None = 0,
        ChaosNiagara_LocationYToSpawn_Min = 1,
        ChaosNiagara_LocationYToSpawn_Max = 2,
        ChaosNiagara_LocationYToSpawn_MinMax = 3,
        ChaosNiagara_Max = 4
    };

    enum class ELocationXToSpawnEnum : uint8_t //Enum ChaosNiagara.ELocationXToSpawnEnum
    {
        ChaosNiagara_LocationXToSpawn_None = 0,
        ChaosNiagara_LocationXToSpawn_Min = 1,
        ChaosNiagara_LocationXToSpawn_Max = 2,
        ChaosNiagara_LocationXToSpawn_MinMax = 3,
        ChaosNiagara_Max = 4
    };

    enum class ELocationFilteringModeEnum : uint8_t //Enum ChaosNiagara.ELocationFilteringModeEnum
    {
        ChaosNiagara_LocationFilteringMode_Inclusive = 0,
        ChaosNiagara_LocationFilteringMode_Exclusive = 1,
        ChaosNiagara_Max = 2
    };

    enum class EDataSourceTypeEnum : uint8_t //Enum ChaosNiagara.EDataSourceTypeEnum
    {
        ChaosNiagara_DataSourceType_Collision = 0,
        ChaosNiagara_DataSourceType_Breaking = 1,
        ChaosNiagara_DataSourceType_Trailing = 2,
        ChaosNiagara_Max = 3
    };

    enum class EDebugTypeEnum : uint8_t //Enum ChaosNiagara.EDebugTypeEnum
    {
        ChaosNiagara_DebugType_NoDebug = 0,
        ChaosNiagara_DebugType_ColorBySolver = 1,
        ChaosNiagara_DebugType_ColorByParticleIndex = 2,
        ChaosNiagara_Max = 3
    };

    enum class ERandomVelocityGenerationTypeEnum : uint8_t //Enum ChaosNiagara.ERandomVelocityGenerationTypeEnum
    {
        ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
        ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
        ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
        ChaosNiagara_Max = 3
    };

    enum class EDataSortTypeEnum : uint8_t //Enum ChaosNiagara.EDataSortTypeEnum
    {
        ChaosNiagara_DataSortType_NoSorting = 0,
        ChaosNiagara_DataSortType_RandomShuffle = 1,
        ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
        ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
        ChaosNiagara_Max = 4
    };

    enum class EPrefabricatorPivotPosition : uint8_t //Enum PrefabricatorRuntime.EPrefabricatorPivotPosition
    {
        ExtremeLeft = 0,
        ExtremeRight = 1,
        Center = 2,
        EPrefabricatorPivotPosition_MAX = 3
    };

    enum class EConstructionSystemToolType : uint8_t //Enum ConstructionSystemRuntime.EConstructionSystemToolType
    {
        BuildTool = 0,
        RemoveTool = 1,
        EConstructionSystemToolType_MAX = 2
    };

    enum class EConstructionSystemCursorVisiblity : uint8_t //Enum ConstructionSystemRuntime.EConstructionSystemCursorVisiblity
    {
        Visible = 0,
        VisibleInvalid = 1,
        Hidden = 2,
        EConstructionSystemCursorVisiblity_MAX = 3
    };

    enum class EPrefabricatorConstructionSnapType : uint8_t //Enum ConstructionSystemRuntime.EPrefabricatorConstructionSnapType
    {
        Floor = 0,
        Wall = 1,
        Object = 2,
        EPrefabricatorConstructionSnapType_MAX = 3
    };

    enum class EUdpMessageFormat : uint8_t //Enum UdpMessaging.EUdpMessageFormat
    {
        None = 0,
        Json = 1,
        TaggedProperty = 2,
        CborPlatformEndianness = 3,
        CborStandardEndianness = 4,
        EUdpMessageFormat_MAX = 5
    };

    enum class EActorSequenceObjectReferenceType : uint8_t //Enum ActorSequence.EActorSequenceObjectReferenceType
    {
        ContextActor = 0,
        ExternalActor = 1,
        Component = 2,
        EActorSequenceObjectReferenceType_MAX = 3
    };

    enum class EAppleTextureType : uint8_t //Enum AppleImageUtils.EAppleTextureType
    {
        Unknown = 0,
        Image = 1,
        PixelBuffer = 2,
        Surface = 3,
        MetalTexture = 4,
        EAppleTextureType_MAX = 5
    };

    enum class ETextureRotationDirection : uint8_t //Enum AppleImageUtils.ETextureRotationDirection
    {
        None = 0,
        Left = 1,
        Right = 2,
        Down = 3,
        LeftMirrored = 4,
        RightMirrored = 5,
        DownMirrored = 6,
        UpMirrored = 7,
        ETextureRotationDirection_MAX = 8
    };

    enum class ECollectionScriptingShareType : uint8_t //Enum AssetTags.ECollectionScriptingShareType
    {
        Local = 0,
        Private = 1,
        Shared = 2,
        ECollectionScriptingShareType_MAX = 3
    };

    enum class EQuatSwizzleAxisB : uint8_t //Enum OpenXRHandTracking.EQuatSwizzleAxisB
    {
        X = 0,
        Y = 1,
        Z = 2,
        W = 3,
        MinusX = 4,
        MinusY = 5,
        MinusZ = 6,
        MinusW = 7,
        EQuatSwizzleAxisB_MAX = 8
    };

    enum class ELiveLinkAxis : uint8_t //Enum LiveLink.ELiveLinkAxis
    {
        X = 0,
        Y = 1,
        Z = 2,
        XNeg = 3,
        YNeg = 4,
        ZNeg = 5,
        ELiveLinkAxis_MAX = 6
    };

    enum class ELiveLinkTimecodeProviderEvaluationType : uint8_t //Enum LiveLink.ELiveLinkTimecodeProviderEvaluationType
    {
        Lerp = 0,
        Nearest = 1,
        Latest = 2,
        ELiveLinkTimecodeProviderEvaluationType_MAX = 3
    };

    enum class EWheelSweepType : uint8_t //Enum PhysXVehicles.EWheelSweepType
    {
        SimpleAndComplex = 0,
        Simple = 1,
        Complex = 2,
        EWheelSweepType_MAX = 3
    };

    enum class EVehicleDifferential4W : uint8_t //Enum PhysXVehicles.EVehicleDifferential4W
    {
        LimitedSlip_4W = 0,
        LimitedSlip_FrontDrive = 1,
        LimitedSlip_RearDrive = 2,
        Open_4W = 3,
        Open_FrontDrive = 4,
        Open_RearDrive = 5,
        EVehicleDifferential4W_MAX = 6
    };

    enum class EAutoPossessAI : uint8_t //Enum Engine.EAutoPossessAI
    {
        Disabled = 0,
        PlacedInWorld = 1,
        Spawned = 2,
        PlacedInWorldOrSpawned = 3,
        EAutoPossessAI_MAX = 4
    };

    enum class EYTurretState : uint8_t //Enum Prospect.EYTurretState
    {
        Deploying = 0,
        Active = 1,
        Destroyed = 2,
        EYTurretState_MAX = 3
    };

    enum class EYAbilityState : uint8_t //Enum Prospect.EYAbilityState
    {
        Invalid = 0,
        Ready = 1,
        SpinningUp = 2,
        Activating = 3,
        Active = 4,
        Finished = 5,
        Cooldown = 6,
        EYAbilityState_MAX = 7
    };

    enum class EYActivityType : uint8_t //Enum Prospect.EYActivityType
    {
        None = 0,
        Area = 1,
        AI_Guardians = 2,
        AI_Spawning = 3,
        BigDrill = 4,
        BossHunt = 5,
        DataRetrieval = 6,
        Delivery = 7,
        Deposit = 8,
        Dungeon = 9,
        Escape = 10,
        Flora = 11,
        Flora_WaterPlant = 12,
        Flora_IvyPlant = 13,
        Flora_DesertPlant = 14,
        Hunt = 15,
        Mineral_AlienCrystals = 16,
        Mineral_BasicOres = 17,
        Mineral_HeavyMetals = 18,
        Mineral_Radioactive = 19,
        Mineral_Veltecite = 20,
        MonsterNest = 21,
        NoiseTrap_Birds = 22,
        OilPump_Tier0 = 23,
        OilPump_Tier1 = 24,
        OilPump_Tier2 = 25,
        OilPump_Tier3 = 26,
        OilPump_Tier4 = 27,
        PowerUp = 28,
        StormSurge = 29,
        Tracking = 30,
        Train = 31,
        Meteor = 32,
        Uplink = 33,
        LootContainers = 34,
        LootPoints = 35,
        All = 36,
        MAX = 37
    };

    enum class EYMeshViewState : uint8_t //Enum Prospect.EYMeshViewState
    {
        NoneAssigned = 0,
        FirstPerson = 1,
        ThirdPerson = 2,
        EYMeshViewState_MAX = 3
    };

    enum class EYPlayerInitializationType : uint8_t //Enum Prospect.EYPlayerInitializationType
    {
        None = 0,
        InventoryData = 1,
        PlayerActorsInitialized = 2,
        CharacterCustomizationInitialized = 3,
        GlobalVanityLoaded = 4,
        ServerInitialized = 5,
        LevelsLoaded = 6,
        EYPlayerInitializationType_MAX = 7
    };

    enum class EYClimbingStateInternal : uint8_t //Enum Prospect.EYClimbingStateInternal
    {
        None = 0,
        MovingUp = 1,
        MovingForward = 2,
        MovingDown = 3,
        EYClimbingStateInternal_MAX = 4
    };

    enum class EYMoveType : uint8_t //Enum Prospect.EYMoveType
    {
        None = 0,
        Climb = 1,
        Vault = 2,
        EYMoveType_MAX = 3
    };

    enum class EYObstacleType : uint8_t //Enum Prospect.EYObstacleType
    {
        None = 0,
        WaistHigh = 1,
        ShoulderHigh = 2,
        AboveHead = 3,
        Max = 4
    };

    enum class ECameraShakePlaySpace : uint8_t //Enum Engine.ECameraShakePlaySpace
    {
        CameraLocal = 0,
        World = 1,
        UserDefined = 2,
        ECameraShakePlaySpace_MAX = 3
    };

    enum class EViewTargetBlendFunction : uint8_t //Enum Engine.EViewTargetBlendFunction
    {
        VTBlend_Linear = 0,
        VTBlend_Cubic = 1,
        VTBlend_EaseIn = 2,
        VTBlend_EaseOut = 3,
        VTBlend_EaseInOut = 4,
        VTBlend_PreBlended = 5,
        VTBlend_MAX = 6
    };

    enum class ETravelType : uint8_t //Enum Engine.ETravelType
    {
        TRAVEL_Absolute = 0,
        TRAVEL_Partial = 1,
        TRAVEL_Relative = 2,
        TRAVEL_MAX = 3
    };

    enum class ECollisionChannel : uint8_t //Enum Engine.ECollisionChannel
    {
        ECC_WorldStatic = 0,
        ECC_WorldDynamic = 1,
        ECC_Pawn = 2,
        ECC_Visibility = 3,
        ECC_Camera = 4,
        ECC_PhysicsBody = 5,
        ECC_Vehicle = 6,
        ECC_Destructible = 7,
        ECC_EngineTraceChannel1 = 8,
        ECC_EngineTraceChannel2 = 9,
        ECC_EngineTraceChannel3 = 10,
        ECC_EngineTraceChannel4 = 11,
        ECC_EngineTraceChannel5 = 12,
        ECC_EngineTraceChannel6 = 13,
        ECC_GameTraceChannel1 = 14,
        ECC_GameTraceChannel2 = 15,
        ECC_GameTraceChannel3 = 16,
        ECC_GameTraceChannel4 = 17,
        ECC_GameTraceChannel5 = 18,
        ECC_GameTraceChannel6 = 19,
        ECC_GameTraceChannel7 = 20,
        ECC_GameTraceChannel8 = 21,
        ECC_GameTraceChannel9 = 22,
        ECC_GameTraceChannel10 = 23,
        ECC_GameTraceChannel11 = 24,
        ECC_GameTraceChannel12 = 25,
        ECC_GameTraceChannel13 = 26,
        ECC_GameTraceChannel14 = 27,
        ECC_GameTraceChannel15 = 28,
        ECC_GameTraceChannel16 = 29,
        ECC_GameTraceChannel17 = 30,
        ECC_GameTraceChannel18 = 31,
        ECC_OverlapAll_Deprecated = 32,
        ECC_MAX = 33
    };

    enum class EControllerAnalogStick : uint8_t //Enum Engine.EControllerAnalogStick
    {
        CAS_LeftStick = 0,
        CAS_RightStick = 1,
        CAS_MAX = 2
    };

    enum class EDynamicForceFeedbackAction : uint8_t //Enum Engine.EDynamicForceFeedbackAction
    {
        Start = 0,
        Update = 1,
        Stop = 2,
        EDynamicForceFeedbackAction_MAX = 3
    };

    enum class EControllerHand : uint8_t //Enum InputCore.EControllerHand
    {
        Left = 0,
        Right = 1,
        AnyHand = 2,
        Pad = 3,
        ExternalCamera = 4,
        Gun = 5,
        Special_2 = 6,
        Special_3 = 7,
        Special_4 = 8,
        Special_5 = 9,
        Special_6 = 10,
        Special_7 = 11,
        Special_8 = 12,
        Special_9 = 13,
        Special_10 = 14,
        Special_11 = 15,
        Special_12 = 16,
        ControllerHand_Count = 17,
        EControllerHand_MAX = 18
    };

    enum class EYInputUIStackType : uint8_t //Enum Prospect.EYInputUIStackType
    {
        Invalid = 0,
        None = 1,
        Scene = 2,
        GearStore = 3,
        SocialInteraction = 4,
        InputWidget = 5,
        Chat = 6,
        EYInputUIStackType_MAX = 7
    };

    enum class EYInputActionName : uint8_t //Enum Prospect.EYInputActionName
    {
        Turn = 0,
        LookUp = 1,
        SwitchWeapon1 = 2,
        SwitchWeapon2 = 3,
        SwitchWeapon3 = 4,
        SwitchWeapon4 = 5,
        SwitchWeapon5 = 6,
        SwitchWeapon6 = 7,
        SwitchWeapon7 = 8,
        SwitchWeapon8 = 9,
        SwitchWeapon9 = 10,
        NextWeapon = 11,
        PrevWeapon = 12,
        Fire = 13,
        Targeting = 14,
        Reload = 15,
        ActivateAbility1 = 16,
        ActivateAbility2 = 17,
        Interact = 18,
        Team = 19,
        MatchInventory = 20,
        ToggleMap = 21,
        Chat = 22,
        SpectateNext = 23,
        SpectatePrev = 24,
        SpectateZoomIn = 25,
        SpectateZoomOut = 26,
        SpectateCamera = 27,
        Debug_ToggleMasterDebugWidget = 28,
        Social = 29,
        Social_GoThere = 30,
        Social_Enemies = 31,
        DamageRecap = 32,
        Challenge = 33,
        ToggleLobbyHUD = 34,
        Emote = 35,
        Banner = 36,
        QuickBuy1 = 37,
        QuickBuy2 = 38,
        QuickBuy3 = 39,
        QuickBuy4 = 40,
        Debug_BugIt = 41,
        PushToTalk = 42,
        ToggleStationMap = 43,
        QuickMenu = 44,
        ActivateConsumable = 45,
        ToolWheel = 46,
        ConsumableWheel = 47,
        Melee = 48,
        HideHud = 49,
        OpenAttachmentScreen = 50,
        AnyKey = 51,
        LookUpController = 52,
        TurnController = 53,
        UiNextSortingMethod = 54,
        MuteIncomingVOIP = 55,
        None = 56,
        EYInputActionName_MAX = 57
    };

    enum class EYPlayerSetType : uint8_t //Enum Prospect.EYPlayerSetType
    {
        None = 0,
        WeaponOne = 1,
        WeaponTwo = 2,
        WeaponMax = 3,
        Shield = 4,
        BagItem = 5,
        StashItem = 6,
        SafeItem = 7,
        CorpseContainer = 8,
        Bag = 9,
        Helmet = 10,
        MeleeWeapon = 11,
        MAX = 12
    };

    enum class EYFriendOnlineStatus : uint8_t //Enum Prospect.EYFriendOnlineStatus
    {
        None = 0,
        PlayingThisGame = 1,
        Online = 2,
        PlayingOtherGame = 3,
        EYFriendOnlineStatus_MAX = 4
    };

    enum class EYMatchState : uint8_t //Enum Prospect.EYMatchState
    {
        EnteringMap = 0,
        WaitingToStart = 1,
        PreMatch = 2,
        LaunchingMatch = 3,
        SeamlessTravel = 4,
        MatchIntro = 5,
        MatchInProgress = 6,
        MatchEnding = 7,
        MatchOver = 8,
        DisconnectedPlayers = 9,
        LeavingMap = 10,
        None = 11,
        EYMatchState_MAX = 12
    };

    enum class EYPlayerMatchState : uint8_t //Enum Prospect.EYPlayerMatchState
    {
        MatchLevelsLoaded = 0,
        ReadiedUp = 1,
        InMatch = 2,
        FinishedMatch = 3,
        InEndOfMatch = 4,
        EYPlayerMatchState_MAX = 5
    };

    enum class EYNotificationPlacement : uint8_t //Enum Prospect.EYNotificationPlacement
    {
        Center = 0,
        RightMiddle = 1,
        RightTop = 2,
        LeftMiddle = 3,
        EYNotificationPlacement_MAX = 4
    };

    enum class EYNotificationType : uint8_t //Enum Prospect.EYNotificationType
    {
        Invalid = 0,
        SimpleText = 1,
        ImportantText = 2,
        ImmidateText = 3,
        EYNotificationType_MAX = 4
    };

    enum class EYAIState : uint8_t //Enum Prospect.EYAIState
    {
        None = 0,
        Idle = 1,
        Investigate = 2,
        Combat = 3,
        Reseting = 4,
        Dead = 5,
        Suspicious = 6,
        Resting = 7,
        Test = 8,
        EYAIState_MAX = 9
    };

    enum class EYEnemyType : uint8_t //Enum Prospect.EYEnemyType
    {
        None = 0,
        DebugAutomationTest = 1,
        DirtBeast_Melee = 2,
        DirtBeast_RangedShort = 3,
        DirtBeast_RangedMedium = 4,
        DirtBeast_RangedLong = 5,
        DirtBeast_MeleeHeavy = 6,
        DirtBeast_RangedHeavy = 7,
        DirtBeast_FlyingHeavy = 8,
        DirtBeast_Boss = 9,
        Orobot_Melee = 10,
        Orobot_RangedShort = 11,
        Orobot_RangedMedium = 12,
        Orobot_Walker = 13,
        Orobot_Platform = 14,
        Plunderbot_RangedShort = 15,
        Plunderbot_RangedMedium = 16,
        Plunderbot_RangedLong = 17,
        GlowBeetle_Blast = 18,
        GlowBeetle_Acid = 19,
        GlowBeetle_Summon = 20,
        Strider = 21,
        Rattler = 22,
        Weremole = 23,
        Crusher = 24,
        EYEnemyType_MAX = 25
    };

    enum class EYSpawnRequestStatus : uint8_t //Enum Prospect.EYSpawnRequestStatus
    {
        RequiresCharacter = 0,
        RequiresController = 1,
        RequiresBehavior = 2,
        Completed = 3,
        Failed = 4,
        EYSpawnRequestStatus_MAX = 5
    };

    enum class EYStateChangeType : uint8_t //Enum Prospect.EYStateChangeType
    {
        None = 0,
        Deactivated = 1,
        Activated = 2,
        Both = 3,
        EYStateChangeType_MAX = 4
    };

    enum class EYLeanTarget : uint8_t //Enum Prospect.EYLeanTarget
    {
        Middle = 0,
        Left = 1,
        Right = 2,
        EYLeanTarget_MAX = 3
    };

    enum class EYWeaponVisualState : uint8_t //Enum Prospect.EYWeaponVisualState
    {
        Normal = 0,
        PendingTransportRelease = 1,
        EYWeaponVisualState_MAX = 2
    };

    enum class EYPlayerMatchFinishedResult : uint8_t //Enum Prospect.EYPlayerMatchFinishedResult
    {
        None = 0,
        Dead = 1,
        Escaped = 2,
        EYPlayerMatchFinishedResult_MAX = 3
    };

    enum class EYTeam : uint32_t //Enum Prospect.EYTeam
    {
        Compilexfix = 0,
        Player = 100,
        AI = 200,
        PlayerAI = 201,
        NoTeamId = 255,
        EYTeam_MAX = 256
    };

    enum class EPhysicalSurface : uint8_t //Enum PhysicsCore.EPhysicalSurface
    {
        SurfaceType_Default = 0,
        SurfaceType1 = 1,
        SurfaceType2 = 2,
        SurfaceType3 = 3,
        SurfaceType4 = 4,
        SurfaceType5 = 5,
        SurfaceType6 = 6,
        SurfaceType7 = 7,
        SurfaceType8 = 8,
        SurfaceType9 = 9,
        SurfaceType10 = 10,
        SurfaceType11 = 11,
        SurfaceType12 = 12,
        SurfaceType13 = 13,
        SurfaceType14 = 14,
        SurfaceType15 = 15,
        SurfaceType16 = 16,
        SurfaceType17 = 17,
        SurfaceType18 = 18,
        SurfaceType19 = 19,
        SurfaceType20 = 20,
        SurfaceType21 = 21,
        SurfaceType22 = 22,
        SurfaceType23 = 23,
        SurfaceType24 = 24,
        SurfaceType25 = 25,
        SurfaceType26 = 26,
        SurfaceType27 = 27,
        SurfaceType28 = 28,
        SurfaceType29 = 29,
        SurfaceType30 = 30,
        SurfaceType31 = 31,
        SurfaceType32 = 32,
        SurfaceType33 = 33,
        SurfaceType34 = 34,
        SurfaceType35 = 35,
        SurfaceType36 = 36,
        SurfaceType37 = 37,
        SurfaceType38 = 38,
        SurfaceType39 = 39,
        SurfaceType40 = 40,
        SurfaceType41 = 41,
        SurfaceType42 = 42,
        SurfaceType43 = 43,
        SurfaceType44 = 44,
        SurfaceType45 = 45,
        SurfaceType46 = 46,
        SurfaceType47 = 47,
        SurfaceType48 = 48,
        SurfaceType49 = 49,
        SurfaceType50 = 50,
        SurfaceType51 = 51,
        SurfaceType52 = 52,
        SurfaceType53 = 53,
        SurfaceType54 = 54,
        SurfaceType55 = 55,
        SurfaceType56 = 56,
        SurfaceType57 = 57,
        SurfaceType58 = 58,
        SurfaceType59 = 59,
        SurfaceType60 = 60,
        SurfaceType61 = 61,
        SurfaceType62 = 62,
        SurfaceType_Max = 63,
        EPhysicalSurface_MAX = 64
    };

    enum class EPathFollowingResult : uint8_t //Enum AIModule.EPathFollowingResult
    {
        Success = 0,
        Blocked = 1,
        OffPath = 2,
        Aborted = 3,
        Skipped_DEPRECATED = 4,
        Invalid = 5,
        EPathFollowingResult_MAX = 6
    };

    enum class EEnvQueryStatus : uint8_t //Enum AIModule.EEnvQueryStatus
    {
        Processing = 0,
        Success = 1,
        Failed = 2,
        Aborted = 3,
        OwnerLost = 4,
        MissingParam = 5,
        EEnvQueryStatus_MAX = 6
    };

    enum class EYDamageApplication : uint8_t //Enum Prospect.EYDamageApplication
    {
        Damage = 0,
        Heal = 1,
        HealAndDamage = 2,
        EYDamageApplication_MAX = 3
    };

    enum class EYGameplayContextType : uint8_t //Enum Prospect.EYGameplayContextType
    {
        Unknown = 0,
        Weapon = 1,
        Ability = 2,
        Melee = 3,
        Storm = 4,
        Vehicle = 5,
        Armor = 6,
        Fall = 7,
        All = 8,
        EYGameplayContextType_MAX = 9
    };

    enum class EYAnnouncementType : uint8_t //Enum Prospect.EYAnnouncementType
    {
        Play2D = 0,
        SpawnAtLocation = 1,
        SpawnAttached = 2,
        EYAnnouncementType_MAX = 3
    };

    enum class EYVoRowType : uint8_t //Enum Prospect.EYVoRowType
    {
        Regular = 0,
        FactionOverride = 1,
        PlayerBodyTypeOverride = 2,
        EYVoRowType_MAX = 3
    };

    enum class EYCharacterVanityResetRequest : uint8_t //Enum Prospect.EYCharacterVanityResetRequest
    {
        Invalid = 0,
        Category = 1,
        Customization = 2,
        EYCharacterVanityResetRequest_MAX = 3
    };

    enum class EYItemRarityType : uint8_t //Enum Prospect.EYItemRarityType
    {
        Invalid = 0,
        Common = 1,
        Uncommon = 2,
        Rare = 3,
        Epic = 4,
        Exotic = 5,
        Legendary = 6,
        MAX = 7
    };

    enum class EYCharacterCustomizationColorType : uint8_t //Enum Prospect.EYCharacterCustomizationColorType
    {
        Red = 0,
        Blue = 1,
        Green = 2,
        Black = 3,
        Silver = 4,
        Gold = 5,
        Purple = 6,
        Pink = 7,
        Cyan = 8,
        Bronze = 9,
        PrototypeColor_01 = 10,
        PrototypeColor_02 = 11,
        PrototypeColor_03 = 12,
        PrototypeColor_04 = 13,
        PrototypeColor_05 = 14,
        PrototypeColor_06 = 15,
        Invalid = 16,
        EYCharacterCustomizationColorType_MAX = 17
    };

    enum class EYEquipedWeaponPoseType : uint8_t //Enum Prospect.EYEquipedWeaponPoseType
    {
        Invalid = 0,
        PistolPose = 1,
        RiflePose = 2,
        ScannerPose = 3,
        ConsumableSelfApplicationPose = 4,
        ConsumableThrowablePose = 5,
        ConsumableDeployablePose = 6,
        CustomNonUsedPose_01 = 7,
        HeavyPose = 8,
        CustomNonUsedPose_03 = 9,
        CustomNonUsedPose_04 = 10,
        CustomNonUsedPose_05 = 11,
        CustomNonUsedPose_06 = 12,
        CustomNonUsedPose_07 = 13,
        CustomNonUsedPose_08 = 14,
        CustomNonUsedPose_09 = 15,
        CustomNonUsedPose_11 = 16,
        CustomNonUsedPose_12 = 17,
        CustomNonUsedPose_13 = 18,
        CustomNonUsedPose_14 = 19,
        CustomNonUsedPose_15 = 20,
        CustomNonUsedPose_16 = 21,
        CustomNonUsedPose_17 = 22,
        CustomNonUsedPose_18 = 23,
        EYEquipedWeaponPoseType_MAX = 24
    };

    enum class EYContractStatus : uint8_t //Enum Prospect.EYContractStatus
    {
        Invalid = 0,
        Locked = 1,
        Inactive = 2,
        Active = 3,
        Completed = 4,
        RewardsClaimed = 5,
        Cancelled = 6,
        MAX = 7
    };

    enum class EYDeadDropDepositResult : uint8_t //Enum Prospect.EYDeadDropDepositResult
    {
        UnknownError = 0,
        Success = 1,
        WrongItems = 2,
        WrongDeadDropLocation = 3,
        NoDeadDropContract = 4,
        MAX = 5
    };

    enum class EYMapMarkerState : uint8_t //Enum Prospect.EYMapMarkerState
    {
        INACTIVE = 0,
        ACTIVE = 1,
        POSTLOBBY = 2,
        DESTROYED = 3,
        HIDDEN = 4,
        REMOVED = 5,
        ACTIVE_ANIMATED = 6,
        MAX = 7
    };

    enum class EYHighlightStateChangeType : uint8_t //Enum Prospect.EYHighlightStateChangeType
    {
        Added = 0,
        Removed = 1,
        Notified = 2,
        EYHighlightStateChangeType_MAX = 3
    };

    enum class EYContainerType : uint8_t //Enum Prospect.EYContainerType
    {
        CustomItem = 0,
        StandardItem = 1,
        Offer = 2,
        EYContainerType_MAX = 3
    };

    enum class EYWheelType : uint8_t //Enum Prospect.EYWheelType
    {
        None = 0,
        Comm = 1,
        Vanity = 2,
        Social = 3,
        Tool = 4,
        Consumable = 5,
        VanitySelection = 6,
        EYWheelType_MAX = 7
    };

    enum class EYDBNOTeleportState : uint8_t //Enum Prospect.EYDBNOTeleportState
    {
        None = 0,
        Teleporting = 1,
        TeleportCompleted = 2,
        EYDBNOTeleportState_MAX = 3
    };

    enum class EYLandingType : uint8_t //Enum Prospect.EYLandingType
    {
        Soft = 0,
        Medium = 1,
        Hard = 2,
        EYLandingType_MAX = 3
    };

    enum class EYLootSourceType : uint8_t //Enum Prospect.EYLootSourceType
    {
        None = 0,
        Generic = 1,
        MapLoot = 2,
        Removed = 3,
        AILootDrop = 4,
        PlayerItem = 5,
        PlayerItemDroppedOnDeath = 6,
        Debug = 7,
        EYLootSourceType_MAX = 8
    };

    enum class EYCachedSpawnLocationType : uint8_t //Enum Prospect.EYCachedSpawnLocationType
    {
        Invalid = 0,
        InMatch = 1,
        EYCachedSpawnLocationType_MAX = 2
    };

    enum class EYServicePingTypes : uint8_t //Enum Prospect.EYServicePingTypes
    {
        Station = 0,
        Matchmaking = 1,
        EYServicePingTypes_MAX = 2
    };

    enum class EYGPAModifierType : uint8_t //Enum Prospect.EYGPAModifierType
    {
        Additive = 0,
        Multiplicitive_PreAdd = 1,
        Division_PreAdd = 2,
        Multiplicitive_PostAdd = 3,
        Division_PostAdd = 4,
        Override = 5,
        EYGPAModifierType_MAX = 6
    };

    enum class EYGameplayAttribute : uint8_t //Enum Prospect.EYGameplayAttribute
    {
        None = 0,
        AbilityCooldownTime = 1,
        AIAmountAttackPhaseCount = 2,
        AIAmountOfShots = 3,
        AIRefireTime = 4,
        AIStabilityDamageReceived = 5,
        BombardmentDamage = 6,
        CurrentHealth = 7,
        CurrentShield = 8,
        DamageEnemyMultiplier = 9,
        DamageEnemyWeakAreaMultiplier = 10,
        DamageOverTimeEnabled = 11,
        DamagePlayerMultiplier = 12,
        DamageRadius = 13,
        DamageScalingDealt = 14,
        DamageScalingDealtAgainstAI = 15,
        DamageScalingDealtAgainstPlayers = 16,
        DamageScalingReceived = 17,
        DamageScalingReceivedFromAI = 18,
        DamageScalingReceivedFromPlayers = 19,
        DamageSelf = 20,
        DamageSelfInvincibility = 21,
        FallingDamageReduction = 22,
        FallingVelocityReduction = 23,
        GravityScaling = 24,
        HardLandingDistance = 25,
        HealingWardPower = 26,
        HealthDegenerationRate = 27,
        HealthPlateSightAngle = 28,
        HealthRegenerationDelay = 29,
        HealthRegenerationRate = 30,
        InteractionInteruptTime = 31,
        HelmetNV = 32,
        HelmetThermal = 33,
        KineticShieldHealth = 34,
        MaxHealth = 35,
        MaxShield = 36,
        MaxSlideSpeed = 37,
        MaxSpeed = 38,
        MaxSprintSpeed = 39,
        OverallMovementSpeed = 40,
        Piercing = 41,
        ProjectileAcceleration = 42,
        ProjectileAccelerationDelay = 43,
        ProjectileAccelerationMovementSpeed = 44,
        ProjectileArmingTime = 45,
        ProjectileGravityScale = 46,
        ProjectileInitialSpeed = 47,
        ProjectileLifeSpan = 48,
        ProjectileMaxSpeed = 49,
        RadialFalloffMultiplier = 50,
        RadialStartFalloffRange = 51,
        SpinupDuration = 52,
        SprintWhileReloading = 53,
        StaminaConsumptionPerWeaponFire = 54,
        SuperJumpCooldown = 55,
        SuperJumpSpeed = 56,
        TargetingFOVSpeed = 57,
        TargetingTime = 58,
        TargetingTimeFOV = 59,
        VehicleBoostCooldown = 60,
        VehicleBoostDuration = 61,
        VehicleHealth = 62,
        VehicleMovementSpeed = 63,
        WeakAreaDamageScaling = 64,
        WeaponAmmoOnSwitch = 65,
        WeaponAmmoConsumptionOnShot = 66,
        WeaponAmountOfShots = 67,
        WeaponBurstCount = 68,
        WeaponBurstInterval = 69,
        WeaponClipSize = 70,
        WeaponCrouchingRecoil = 71,
        WeaponDamageDirect = 72,
        WeaponDamageFalloffMultiplier = 73,
        WeaponDamageRadial = 74,
        WeaponDamageRange = 75,
        WeaponDotDamage = 76,
        WeaponDotDuration = 77,
        WeaponDotInterval = 78,
        WeaponEquipTime = 79,
        WeaponHideFullScreenWidget = 80,
        WeaponIsLooping = 81,
        WeaponMaxTraceRange = 82,
        WeaponPenetration = 83,
        WeaponRecoilCompenstationAmountX = 84,
        WeaponRecoilCompenstationAmountY = 85,
        WeaponRecoilCompenstationSpeedX = 86,
        WeaponRecoilCompenstationSpeedY = 87,
        WeaponRecoilCompenstationStartTime = 88,
        WeaponRecoilHorizontal = 89,
        WeaponRecoilVertical = 90,
        WeaponRecoilIncreaseRate = 91,
        WeaponRefireAnimationRateScaleMultiplier = 92,
        WeaponRefireTime = 93,
        WeaponReloadTime = 94,
        WeaponScaleOffset = 95,
        WeaponSpreadDecreaseRate = 96,
        WeaponSpreadIncreaseRate = 97,
        WeaponSpreadMax = 98,
        WeaponSpreadUnaimed = 99,
        WeaponSprintBufferTime = 100,
        WeaponTargetingFOV = 101,
        WeaponTargetingInterp = 102,
        WeaponTargetingRecoil = 103,
        WeaponTargetingSpreadMultiplier = 104,
        WeaponTargetingMaxSpreadMultiplier = 105,
        WeaponTargetingSpreadIncreaseMultiplier = 106,
        WeaponUnequipTime = 107,
        WeaponRadialDamageImpulse = 108,
        WeaponRadialDamageSelfImpulseMultiplier = 109,
        WeaponIsSilenced = 110,
        WorldTargetingFOV = 111,
        ScopeThermal = 112,
        ScopeNV = 113,
        XPIncrease = 114,
        StaminaConsumptionRate = 115,
        MaxStamina = 116,
        GPA_HAS_BEEN_REMOVED = 117,
        EYGameplayAttribute_MAX = 118
    };

    enum class EYKeybindingInputDeviceType : uint8_t //Enum Prospect.EYKeybindingInputDeviceType
    {
        None = 0,
        Keyboard = 1,
        GamepadGeneric = 2,
        PS4 = 3,
        XB1 = 4,
        PS5 = 5,
        XBS = 6,
        EYKeybindingInputDeviceType_MAX = 7
    };

    enum class EYInputBindingCategory : uint8_t //Enum Prospect.EYInputBindingCategory
    {
        MatchGeneral = 0,
        MatchSpectate = 1,
        MatchGearStore = 2,
        Station = 3,
        General = 4,
        MAX = 5
    };

    enum class EYWeaponTransportType : uint8_t //Enum Prospect.EYWeaponTransportType
    {
        Invalid = 0,
        Hitscan = 1,
        Projectile = 2,
        Sphere = 3,
        PhysicsActor = 4,
        Capsule = 5,
        EYWeaponTransportType_MAX = 6
    };

    enum class EYInteractionUpdateType : uint8_t //Enum Prospect.EYInteractionUpdateType
    {
        Start = 0,
        Successful = 1,
        Interrupted = 2,
        MAX = 3
    };

    enum class EYInteractionType : uint8_t //Enum Prospect.EYInteractionType
    {
        None = 0,
        ExtractionActivation = 1,
        Extraction = 2,
        PickUp = 3,
        DBNO_Revive = 4,
        DBNO_Execute = 5,
        Trophy = 6,
        LootCrate = 7,
        StationSocial = 8,
        MAX = 9
    };

    enum class EYWeaponSlotType : uint8_t //Enum Prospect.EYWeaponSlotType
    {
        Starter = 0,
        Primary = 1,
        Invalid = 2,
        EYWeaponSlotType_MAX = 3
    };

    enum class EYPerkTarget : uint8_t //Enum Prospect.EYPerkTarget
    {
        Source = 0,
        Target = 1,
        EYPerkTarget_MAX = 2
    };

    enum class EYPerkBool : uint8_t //Enum Prospect.EYPerkBool
    {
        None = 0,
        LessThan = 1,
        LessThanOrEqualTo = 2,
        EqualTo = 3,
        GreaterThanOrEqualTo = 4,
        GreaterThan = 5,
        EYPerkBool_MAX = 6
    };

    enum class EYPerkTrigger : uint8_t //Enum Prospect.EYPerkTrigger
    {
        GameplayAttribute = 0,
        AlwaysOn = 1,
        OnHit = 2,
        OnKill = 3,
        OnBeingHit = 4,
        OnTargeting = 5,
        OnWeaponSwitch = 6,
        OnSprinting = 7,
        OnFalling = 8,
        OnDealingDamageModification = 9,
        OnHealthChanged = 10,
        OnTargetingAndFalling = 11,
        OnSpinUp = 12,
        OnMeleeLight = 13,
        OnMeleeHeavy = 14,
        EYPerkTrigger_MAX = 15
    };

    enum class EYStatValueComparison : uint8_t //Enum Prospect.EYStatValueComparison
    {
        NONE = 0,
        LOWER_IS_BETTER = 1,
        HIGHER_IS_BETTER = 2,
        MAX = 3
    };

    enum class EYStatValueDisplayMethod : uint8_t //Enum Prospect.EYStatValueDisplayMethod
    {
        NONE = 0,
        INT = 1,
        DECIMAL = 2,
        PERCENTAGE = 3,
        MAX = 4
    };

    enum class EYFaction : uint8_t //Enum Prospect.EYFaction
    {
        Invalid = 0,
        ICA = 1,
        Korolev = 2,
        Osiris = 3,
        MAX = 4
    };

    enum class EYPlayerGameDataStateType : uint8_t //Enum Prospect.EYPlayerGameDataStateType
    {
        Normal = 0,
        MAX = 1
    };

    enum class EYProgressState : uint8_t //Enum Prospect.EYProgressState
    {
        Idle = 0,
        Running = 1,
        Finished = 2,
        Stopped = 3,
        Paused = 4,
        Resumed = 5,
        ReverseRunning = 6,
        EYProgressState_MAX = 7
    };

    enum class EYChannelContext : uint8_t //Enum Prospect.EYChannelContext
    {
        None = 0,
        Text = 1,
        Voice = 2,
        All = 4,
        EYChannelContext_MAX = 5
    };

    enum class EYGetErrorHandling : uint8_t //Enum Prospect.EYGetErrorHandling
    {
        LogAndReturnNull = 0,
        ReturnNull = 1,
        EYGetErrorHandling_MAX = 2
    };

    enum class EYInventoryPlayerTypes : uint8_t //Enum Prospect.EYInventoryPlayerTypes
    {
        Undefined = 0,
        Stash = 1,
        Set = 2,
        Inventory = 3,
        Info = 4,
        EYInventoryPlayerTypes_MAX = 5
    };

    enum class EYSortingMethod : uint8_t //Enum Prospect.EYSortingMethod
    {
        Alphabetical = 0,
        Rarity = 1,
        ItemType = 2,
        Priority = 3,
        Count = 4,
        EYSortingMethod_MAX = 5
    };

    enum class EYInventoryListType : uint8_t //Enum Prospect.EYInventoryListType
    {
        None = 0,
        CurrentEquipped = 1,
        FullList = 2,
        EYInventoryListType_MAX = 3
    };

    enum class EYCameraIntentionType : uint8_t //Enum Prospect.EYCameraIntentionType
    {
        None = 0,
        Shop = 1,
        Customization = 2,
        Seasons = 3,
        Launch = 4,
        All = 5,
        EYCameraIntentionType_MAX = 6
    };

    enum class EYApperenceCategoriesTypes : uint8_t //Enum Prospect.EYApperenceCategoriesTypes
    {
        Overview = 0,
        Archetype = 1,
        Banner = 2,
        Emote = 3,
        Vehicle = 4,
        Droppod = 5,
        Spray = 6,
        Pet = 7,
        Invalid = 8,
        EYApperenceCategoriesTypes_MAX = 9
    };

    enum class EYAuthorizationState : uint8_t //Enum Prospect.EYAuthorizationState
    {
        Init = 0,
        LegalAgreementsNotAccepted = 1,
        InvalidGamePlatform = 2,
        NotLoggedIntoPlatform = 3,
        LoggingIntoPlayFab = 4,
        NotLoggedInToPlayFab = 5,
        ServerNotLoggedInToPlayFab = 6,
        DisconnectedFromBackendRetry = 7,
        ClientUpdateCheck = 8,
        ClientOutdated = 9,
        MaintenanceModeCheck = 10,
        MaintenanceModeRetry = 11,
        AllowCommunicationWithBackend = 12,
        NewLegalAgreementsCheck = 13,
        NewLegalAgreementsNotAccepted = 14,
        AccountBanned = 15,
        RollbackCheck = 16,
        RollbackRetry = 17,
        StationPingCheck = 18,
        StationPingRetry = 19,
        LoginQueueCheck = 20,
        LoginQueueRetry = 21,
        IsPlayerStillOnBattleServerCheck = 22,
        IsPlayerStillOnBattleServerRetry = 23,
        CompletelyLoggedIn = 24,
        EYAuthorizationState_MAX = 25
    };

    enum class EYInterruptionCause : uint8_t //Enum Prospect.EYInterruptionCause
    {
        Undefined = 0,
        ServerCrash = 1,
        BackendDown = 2,
        SignalRDown = 4,
        NoInternet = 7,
        MAX = 16
    };

    enum class EFullyLoadPackageType : uint8_t //Enum Engine.EFullyLoadPackageType
    {
        FULLYLOAD_Map = 0,
        FULLYLOAD_Game_PreLoadClass = 1,
        FULLYLOAD_Game_PostLoadClass = 2,
        FULLYLOAD_Always = 3,
        FULLYLOAD_Mutator = 4,
        FULLYLOAD_MAX = 5
    };

    enum class EYCustomizationMode : uint8_t //Enum Prospect.EYCustomizationMode
    {
        None = 0,
        Weapon = 1,
        PlayerCharacter = 2,
        CharacterExplicitVisualization = 3,
        CharacterCustomizationPreview = 4,
        NewCharacterExplicitVisualization = 5,
        Emote = 6,
        Banner = 7,
        Vehicle = 8,
        Droppod = 9,
        Spray = 10,
        Pet = 11,
        Melee = 12,
        Item = 13,
        GenericItem = 14,
        Bag = 15,
        Consumable = 16,
        Helmet = 17,
        Shield = 18,
        XpBoost = 19,
        MAX = 20
    };

    enum class EYLevelStreamingType : uint8_t //Enum Prospect.EYLevelStreamingType
    {
        LobbyOnly = 0,
        LobbyCritical = 1,
        BeforeMatch = 2,
        DuringMatch = 3,
        EndOfMatch = 4,
        MAX = 5
    };

    enum class EBlendMode : uint8_t //Enum Engine.EBlendMode
    {
        BLEND_Opaque = 0,
        BLEND_Masked = 1,
        BLEND_Translucent = 2,
        BLEND_Additive = 3,
        BLEND_Modulate = 4,
        BLEND_AlphaComposite = 5,
        BLEND_AlphaHoldout = 6,
        BLEND_MAX = 7
    };

    enum class EYMapMarkerType : uint8_t //Enum Prospect.EYMapMarkerType
    {
        NONE = 0,
        PLAYER_MARKER = 1,
        EXTRACTION_STATION = 2,
        HUNT = 3,
        UPLINK = 4,
        MINERALS = 5,
        ESCAPE_POD = 6,
        SETTLEMENT = 7,
        AREA_NAME = 8,
        RESOURCE_FARMING = 9,
        OB_ALPHA = 10,
        OB_BETTA = 11,
        OB_GAMMA = 12,
        MA_ALPHA = 13,
        MA_BETTA = 14,
        MA_GAMMA = 15,
        OB_POWERUP = 16,
        MONSTER_DEN = 17,
        GEAR_STORE_PURCHASE = 18,
        NOISE_SOURCE = 19,
        OB_TROPHY = 20,
        OB_REDTROPHY = 21,
        OB_YELLOWTROPHY = 22,
        OB_GREENTROPHY = 23,
        OB_BLUETROPHY = 24,
        OB_PURPLETROPHY = 25,
        OB_WHITETROPHY = 26,
        OB_BLACKTROPHY = 27,
        OB_CURSEDTROPHY = 28,
        OB_COLLECT = 29,
        OB_BOSSHUNT = 30,
        OB_SUPERPOWERUP = 31,
        OB_DELIVERY = 32,
        OB_DELIVERYSTATION = 33,
        MA_DATARETRIVAL = 34,
        AREABUBBLE = 35,
        PLAYER_START = 36,
        SOCIAL = 37,
        TRACKING = 38,
        MOVEMENT_NOISE = 39,
        OB_DEPOSIT = 40,
        OB_DEPOSITFIELD = 41,
        OB_DEPOSITSTATION = 42,
        SURVEILLANCE_WARD = 43,
        OB_SALVAGE = 44,
        OB_SALVAGE_SUB_ACTOR = 45,
        OB_SABOTAGE = 46,
        OB_STORMSURGE = 47,
        OB_STORMSURGE_SUB_ACTOR = 48,
        OB_BIGDRILL = 49,
        OB_Train = 50,
        DEBUG_ACTITYLOCATION = 51,
        VEHICLE = 52,
        KILLCONTRACT = 53,
        MISSION = 54,
        MA_TUTORIALIZATIONACTIVITY = 55,
        OB_DEPOSIT_EASTER = 56,
        OB_DEPOSIT_STATION_EASTER = 57,
        MA_RecallRecharge = 58,
        MA_VPExtraction = 59,
        MAX = 60
    };

    enum class EYMissionResultType : uint8_t //Enum Prospect.EYMissionResultType
    {
        Active = 0,
        Failed = 1,
        StepCompleted = 2,
        MissionCompleted = 3,
        Succeeded = 4,
        EYMissionResultType_MAX = 5
    };

    enum class EYTechtreeCategoryType : uint8_t //Enum Prospect.EYTechtreeCategoryType
    {
        None = 0,
        Korolev = 1,
        Osiris = 2,
        ICA = 3,
        Crafting = 4,
        Mining = 5,
        Inventory = 6,
        Generators = 7,
        Workbench = 8,
        MAX = 9
    };

    enum class EYReportPlayerType : uint8_t //Enum Prospect.EYReportPlayerType
    {
        Cheating = 0,
        AFK = 1,
        Toxic = 2,
        Griefing = 3,
        Invalid = 4,
        EYReportPlayerType_MAX = 5
    };

    enum class EYCustomerServiceRequestType : uint8_t //Enum Prospect.EYCustomerServiceRequestType
    {
        BanAppeal = 0,
        CheatReport = 1,
        OpenQuestion = 2,
        TechnicalSupport = 3,
        ReportPlayer = 4,
        Invalid = 5,
        EYCustomerServiceRequestType_MAX = 6
    };

    enum class EYPlayerSupportResult : uint8_t //Enum Prospect.EYPlayerSupportResult
    {
        Succeeded = 0,
        Failed = 1,
        Timeout = 2,
        EYPlayerSupportResult_MAX = 3
    };

    enum class EYReportType : uint8_t //Enum Prospect.EYReportType
    {
        None = 0,
        ReportPlayer = 1,
        CustomerService = 2,
        EYReportType_MAX = 3
    };

    enum class EYTravelState : uint8_t //Enum Prospect.EYTravelState
    {
        None = 0,
        PendingSession = 1,
        ServerValdiation = 2,
        ResourceCleanup = 3,
        Travel = 4,
        PendingServerTravel = 5,
        Failure = 6,
        Success = 7,
        EYTravelState_MAX = 8
    };

    enum class EYMatchmakingStatus : uint8_t //Enum Prospect.EYMatchmakingStatus
    {
        WaitingForMatchmakingResult = 0,
        TravelingToServer = 1,
        WaitingForServerToSpinUp = 2,
        Failure = 3,
        FailureTimeout = 4,
        EYMatchmakingStatus_MAX = 5
    };

    enum class EYSessionEventType : uint8_t //Enum Prospect.EYSessionEventType
    {
        Invalid = 0,
        Warning = 1,
        Finishing = 2,
        MAX = 3
    };

    enum class EWindowMode : uint8_t //Enum Engine.EWindowMode
    {
        Fullscreen = 0,
        WindowedFullscreen = 1,
        Windowed = 2,
        EWindowMode_MAX = 3
    };

    enum class EYGfxQualityPreset : uint8_t //Enum Prospect.EYGfxQualityPreset
    {
        Low = 0,
        Medium = 1,
        High = 2,
        Epic = 3,
        Custom = 4,
        EYGfxQualityPreset_MAX = 5
    };

    enum class EYSquadID : uint8_t //Enum Prospect.EYSquadID
    {
        SQUAD_2 = 0,
        SQUAD_3 = 1,
        SQUAD_4 = 2,
        SQUAD_5 = 3,
        SQUAD_6 = 4,
        SQUAD_7 = 5,
        SQUAD_8 = 6,
        SQUAD_9 = 7,
        SQUAD_10 = 8,
        SQUAD_11 = 9,
        SQUAD_MAX = 10
    };

    enum class EYHUDInfoMessageState : uint8_t //Enum Prospect.EYHUDInfoMessageState
    {
        None = 0,
        Active = 1,
        Resting = 2,
        Disabled = 3,
        MAX = 4
    };

    enum class EYHUDInfoPriorityCategory : uint8_t //Enum Prospect.EYHUDInfoPriorityCategory
    {
        None = 0,
        EvacInteraction = 1,
        Interaction = 2,
        AreaAnnouncement = 3,
        MAX = 4
    };

    enum class EYInsuranceStatus : uint8_t //Enum Prospect.EYInsuranceStatus
    {
        None = 0,
        Pending = 1,
        InsuredByOwnerInsideInventory = 2,
        InsuredByOwnerOutsideInventory = 3,
        InsuredByAnotherPlayer = 4,
        InsuredBySquadmate = 5,
        EYInsuranceStatus_MAX = 6
    };

    enum class EYItemActionType : uint8_t //Enum Prospect.EYItemActionType
    {
        None = 0,
        Equip = 1,
        CloseEquip = 2,
        Unequip = 3,
        Scrap = 4,
        Craft = 5,
        CancelCrafting = 6,
        GoToItemDetails = 7,
        Purchase = 8,
        PurchasePending = 9,
        MAX = 10
    };

    enum class EYSeasonCategory : uint8_t //Enum Prospect.EYSeasonCategory
    {
        SeasonOverview = 0,
        Challenges = 1,
        SeasonChallenges = 2,
        DailyWeeklyChallenges = 3,
        EYSeasonCategory_MAX = 4
    };

    enum class EYShopOfferPurchaseDialogState : uint8_t //Enum Prospect.EYShopOfferPurchaseDialogState
    {
        AskingForConfirmation = 0,
        PurchasePending = 1,
        PurchaseSuccessful = 2,
        PurchaseFailed = 3,
        EYShopOfferPurchaseDialogState_MAX = 4
    };

    enum class EYNotificationAction : uint8_t //Enum Prospect.EYNotificationAction
    {
        None = 0,
        Accept = 1,
        Decline = 2,
        Remove = 3,
        EYNotificationAction_MAX = 4
    };

    enum class EYNotificationMessageType : uint8_t //Enum Prospect.EYNotificationMessageType
    {
        None = 0,
        SquadLeft = 1,
        SquadJoined = 2,
        SquadDisbanded = 3,
        SquadFailed = 4,
        SquadInvite = 5,
        FriendAdded = 6,
        FriendOnline = 7,
        FriendOffline = 8,
        FriendInviteSent = 9,
        FriendInvite = 10,
        GenericSquad = 11,
        GenericFriend = 12,
        GenericNotificationMessage = 13,
        EYNotificationMessageType_MAX = 14
    };

    enum class EYNotifcationType : uint8_t //Enum Prospect.EYNotifcationType
    {
        None = 0,
        Invite = 1,
        Message = 2,
        EYNotifcationType_MAX = 3
    };

    enum class EYPlayerSetTypeSimplified : uint8_t //Enum Prospect.EYPlayerSetTypeSimplified
    {
        Invalid = 0,
        StashItem = 1,
        BagItem = 2,
        ActiveSlot = 3,
        EYPlayerSetTypeSimplified_MAX = 4
    };

    enum class EYItemImprovementScreenSlotType : uint8_t //Enum Prospect.EYItemImprovementScreenSlotType
    {
        Invalid = 0,
        SellScreen = 1,
        StashScreen = 2,
        MAX = 3
    };

    enum class EYContractDifficulty : uint8_t //Enum Prospect.EYContractDifficulty
    {
        Invalid = 0,
        Easy = 1,
        Medium = 2,
        Hard = 3,
        MAX = 4
    };

    enum class EYObjectivesProgressProcessing : uint8_t //Enum Prospect.EYObjectivesProgressProcessing
    {
        Invalid = 0,
        Sequential = 1,
        Parallel = 2,
        MAX = 3
    };

    enum class EYKillTypeAction : uint8_t //Enum Prospect.EYKillTypeAction
    {
        Invalid = 0,
        Players = 1,
        Creatures = 2,
        All = 3,
        MAX = 4
    };

    enum class EYContractObjectiveType : uint8_t //Enum Prospect.EYContractObjectiveType
    {
        Invalid = 0,
        Kills = 1,
        OwnNumOfItem = 2,
        DeadDrop = 3,
        VisitArea = 4,
        MAX = 5
    };

    enum class EYCustomizationModelType : uint8_t //Enum Prospect.EYCustomizationModelType
    {
        None = 0,
        Persistent = 1,
        Pending = 2,
        EYCustomizationModelType_MAX = 3
    };

    enum class EYCharacterItemColumnType : uint8_t //Enum Prospect.EYCharacterItemColumnType
    {
        Invalid = 0,
        Item = 1,
        Color = 2,
        Archetype = 3,
        EYCharacterItemColumnType_MAX = 4
    };

    enum class EYVehicleStateType : uint8_t //Enum Prospect.EYVehicleStateType
    {
        Invalid = 0,
        Landing = 1,
        Possesed = 2,
        Idle = 3,
        Destroyed = 4,
        EYVehicleStateType_MAX = 5
    };

    enum class EYShopTabType : uint8_t //Enum Prospect.EYShopTabType
    {
        Buy = 0,
        Sell = 1,
        MAX = 2
    };

    enum class EYFadeDirection : uint8_t //Enum Prospect.EYFadeDirection
    {
        FadeIn = 0,
        FadeOut = 1,
        EYFadeDirection_MAX = 2
    };

    enum class EYPlayerStateBlueprint : uint8_t //Enum Prospect.EYPlayerStateBlueprint
    {
        None = 0,
        Crouching = 1,
        Sprinting = 2,
        Targeting = 3,
        Reloading = 4,
        Firing = 5,
        WeaponSwitch = 6,
        SpiningUp = 7,
        Interacting = 8,
        Death = 9,
        ReloadAnimation = 10,
        NOTUSED4 = 11,
        Melee = 12,
        Emote = 13,
        Inventory = 14,
        Slide = 15,
        NOTUSED5 = 16,
        NOTUSED6 = 17,
        Use = 18,
        NOTUSED7 = 19,
        NOTUSED8 = 20,
        DBNO = 21,
        Revive = 22,
        ReloadAmmo = 23,
        NOTUSED9 = 24,
        HardLanding = 25,
        Prototype = 26,
        Vehicle = 27,
        VehicleLeaving = 28,
        Banner = 29,
        NOTUSED3 = 30,
        ChargingAttack = 31,
        Ability = 32,
        NOTUSED1 = 33,
        Carrying = 34,
        Climbing = 35,
        Prone = 36,
        NOTUSED10 = 37,
        NOTUSED2 = 38,
        MeleeHeavy = 39,
        MAX = 40
    };

    enum class EYCustomMovementMode : uint8_t //Enum Prospect.EYCustomMovementMode
    {
        CMOVE_Droppod = 0,
        CMOVE_LedgeClimbing = 1,
        CMOVE_MAX = 2
    };

    enum class EYDebugActivitySpawnMode : uint8_t //Enum Prospect.EYDebugActivitySpawnMode
    {
        None = 0,
        DebugSet = 1,
        DebugActivities = 2,
        EYDebugActivitySpawnMode_MAX = 3
    };

    enum class EYActivityLocationStatus : uint8_t //Enum Prospect.EYActivityLocationStatus
    {
        Free = 0,
        SpawnRequestPending = 1,
        Occupied = 2,
        Depleted = 3,
        OnCooldown = 4,
        EYActivityLocationStatus_MAX = 5
    };

    enum class EYEnvQueryHightlightMode : uint8_t //Enum Prospect.EYEnvQueryHightlightMode
    {
        All = 0,
        Best5Pct = 1,
        Best25Pct = 2,
        EYEnvQueryHightlightMode_MAX = 3
    };

    enum class EYLinkType : uint8_t //Enum Prospect.EYLinkType
    {
        Evaluation = 0,
        Area = 1,
        EYLinkType_MAX = 2
    };

    enum class EYUIComponentType : uint8_t //Enum Prospect.EYUIComponentType
    {
        Normal = 0,
        Helper = 1,
        EYUIComponentType_MAX = 2
    };

    enum class EYAIAnalyticsTrigger : uint8_t //Enum Prospect.EYAIAnalyticsTrigger
    {
        Invalid = 0,
        Died = 1,
        Reset = 2,
        KilledPlayer = 3,
        EYAIAnalyticsTrigger_MAX = 4
    };

    enum class EYAIAttackStatus : uint8_t //Enum Prospect.EYAIAttackStatus
    {
        Running = 0,
        Finished = 1,
        Cancelled = 2,
        EYAIAttackStatus_MAX = 3
    };

    enum class EYAIBehaviorReaction : uint8_t //Enum Prospect.EYAIBehaviorReaction
    {
        None = 0,
        Rotate = 1,
        LowFeedback = 2,
        HighFeedback = 3,
        Investigate = 4,
        EYAIBehaviorReaction_MAX = 5
    };

    enum class EYAIReactionContext : uint8_t //Enum Prospect.EYAIReactionContext
    {
        None = 0,
        DamageReaction = 1,
        EYAIReactionContext_MAX = 2
    };

    enum class EYAIDetailAggroType : uint8_t //Enum Prospect.EYAIDetailAggroType
    {
        Distance = 0,
        Token = 1,
        Visibility = 2,
        DBNO = 3,
        TargetType = 4,
        DamageReceived = 5,
        Shared = 6,
        Hearing = 7,
        FarSight = 8,
        Max = 9
    };

    enum class EYAISenseType : uint8_t //Enum Prospect.EYAISenseType
    {
        None = 0,
        Hearing = 1,
        Shared = 2,
        Damage = 3,
        Sight = 4,
        FarSight = 5,
        EYAISenseType_MAX = 6
    };

    enum class EYAIWeakSpotDeathAnimType : uint8_t //Enum Prospect.EYAIWeakSpotDeathAnimType
    {
        None = 0,
        Head = 1,
        TorsoFront = 2,
        TorsoBack = 3,
        ArmLeft = 4,
        ArmRight = 5,
        LegLeft = 6,
        LegRight = 7,
        EYAIWeakSpotDeathAnimType_MAX = 8
    };

    enum class EYAIGameModesDebugReference : uint8_t //Enum Prospect.EYAIGameModesDebugReference
    {
        Solo = 0,
        Duo = 1,
        Squad = 2,
        EYAIGameModesDebugReference_MAX = 3
    };

    enum class EYAIFactions : uint8_t //Enum Prospect.EYAIFactions
    {
        DirtBeasts = 0,
        Droids = 1,
        Neutral = 2,
        Player = 3,
        EYAIFactions_MAX = 4
    };

    enum class EYAISpawnContexts : uint8_t //Enum Prospect.EYAISpawnContexts
    {
        Normal = 0,
        Stormy = 1,
        Thunderous = 2,
        Hunt = 3,
        Weak = 4,
        Alpha = 5,
        Season = 6,
        EYAISpawnContexts_MAX = 7
    };

    enum class EYAISquadGenerationTypesToggle : uint8_t //Enum Prospect.EYAISquadGenerationTypesToggle
    {
        Enabled = 0,
        Disabled = 1,
        Forced = 2,
        EYAISquadGenerationTypesToggle_MAX = 3
    };

    enum class EYGenericValues : uint8_t //Enum Prospect.EYGenericValues
    {
        I = 0,
        II = 1,
        III = 2,
        IV = 3,
        EYGenericValues_MAX = 4
    };

    enum class EYNavMeshType : uint8_t //Enum Prospect.EYNavMeshType
    {
        Normal = 0,
        Medium = 1,
        Large = 2,
        EYNavMeshType_MAX = 3
    };

    enum class EYAggroUpdateState : uint8_t //Enum Prospect.EYAggroUpdateState
    {
        None = 0,
        DataPrepared = 1,
        InitialAggroCalculated = 2,
        TargetAggroMapSorted = 3,
        WeightedAggroCalculated = 4,
        CharacterAggroDataPrepared = 5,
        UpdateFinished = 6,
        EYAggroUpdateState_MAX = 7
    };

    enum class EYBrightcapDropReason : uint8_t //Enum Prospect.EYBrightcapDropReason
    {
        player_damage = 0,
        ai_damage = 1,
        fall_damage = 2,
        delivered = 3,
        EYBrightcapDropReason_MAX = 4
    };

    enum class EYBrightcapPickupSource : uint8_t //Enum Prospect.EYBrightcapPickupSource
    {
        spawn = 0,
        player_drop = 1,
        enemy_drop = 2,
        EYBrightcapPickupSource_MAX = 3
    };

    enum class EYLootAnalyticsAction : uint8_t //Enum Prospect.EYLootAnalyticsAction
    {
        Dropped = 0,
        PickedUp = 1,
        Expired = 2,
        EYLootAnalyticsAction_MAX = 3
    };

    enum class EYAudioEffectZoneBoundsType : uint8_t //Enum Prospect.EYAudioEffectZoneBoundsType
    {
        Sphere = 0,
        Box = 1,
        MAX = 2
    };

    enum class EYAudioEffectZoneEffectType : uint8_t //Enum Prospect.EYAudioEffectZoneEffectType
    {
        Movement = 0,
        Reload = 1,
        MAX = 2
    };

    enum class EYMetricsType : uint8_t //Enum Prospect.EYMetricsType
    {
        Unknown = 0,
        Editor = 1,
        Client = 2,
        Server = 3,
        EYMetricsType_MAX = 4
    };

    enum class EYAutomationTestResult : uint8_t //Enum Prospect.EYAutomationTestResult
    {
        Failed = 0,
        Succeeded = 1,
        Warning = 2,
        Log = 3,
        EYAutomationTestResult_MAX = 4
    };

    enum class EYBackendValidation : uint8_t //Enum Prospect.EYBackendValidation
    {
        Enabled = 0,
        Disabled = 1,
        EYBackendValidation_MAX = 2
    };

    enum class EYPlayerEncounterType : uint8_t //Enum Prospect.EYPlayerEncounterType
    {
        None = 0,
        DamageTo = 1,
        DamagedBy = 2,
        Evacuated = 3,
        VoiceOverIP = 4,
        Distance = 5,
        EYPlayerEncounterType_MAX = 6
    };

    enum class EYEscapeBIHookStep : uint8_t //Enum Prospect.EYEscapeBIHookStep
    {
        Undefined = 0,
        Created = 1,
        Triggered = 2,
        ShipLanded = 3,
        Escaped = 4,
        CooldownBegin = 5,
        CooldownEnded = 6,
        EYEscapeBIHookStep_MAX = 7
    };

    enum class EYPainTrainStatus : uint8_t //Enum Prospect.EYPainTrainStatus
    {
        Captured = 0,
        Lost = 1,
        Finished = 2,
        EYPainTrainStatus_MAX = 3
    };

    enum class EYLogObjectContext : uint8_t //Enum Prospect.EYLogObjectContext
    {
        ClassName = 0,
        ObjectName = 1,
        FullName = 2,
        EYLogObjectContext_MAX = 3
    };

    enum class EYLogVerbosity : uint8_t //Enum Prospect.EYLogVerbosity
    {
        NoLogging = 0,
        Fatal = 1,
        Error = 2,
        Warning = 3,
        Display = 4,
        Log = 5,
        Verbose = 6,
        VeryVerbose = 7,
        EYLogVerbosity_MAX = 8
    };

    enum class EYLogCategory : uint8_t //Enum Prospect.EYLogCategory
    {
        None = 0,
        LogYAI = 1,
        LogYAbilities = 2,
        LogYActivities = 3,
        LogYAnalytics = 4,
        LogYAudio = 5,
        LogYAutomation = 6,
        LogYContracts = 7,
        LogYCrafting = 8,
        LogYCustomization = 9,
        LogYFactions = 10,
        LogYFortunaPass = 11,
        LogYGenerators = 12,
        LogYInitialization = 13,
        LogYInterruptionManager = 14,
        LogYInventory = 15,
        LogYMatch = 16,
        LogYMission = 17,
        LogYNotifications = 18,
        LogYPlayer = 19,
        LogYTechTree = 20,
        LogYUI = 21,
        LogYVehicle = 22,
        EYLogCategory_MAX = 23
    };

    enum class EYAnimTaskFinishCondition : uint8_t //Enum Prospect.EYAnimTaskFinishCondition
    {
        MontageEnds = 0,
        MontageBlendsOut = 1,
        TimeBeforeMontageEnds = 2,
        BlackboardBoolValueChanged = 3,
        EYAnimTaskFinishCondition_MAX = 4
    };

    enum class EYCameraDistanceType : uint8_t //Enum Prospect.EYCameraDistanceType
    {
        None = 0,
        Close = 1,
        Middle = 2,
        Far = 3,
        EYCameraDistanceType_MAX = 4
    };

    enum class EYStateCancelationBehavior : uint8_t //Enum Prospect.EYStateCancelationBehavior
    {
        Nothing = 0,
        FirstPerson = 1,
        ThirdPerson = 2,
        EYStateCancelationBehavior_MAX = 3
    };

    enum class EYDeathType : uint8_t //Enum Prospect.EYDeathType
    {
        Normal = 0,
        PlayerExecutionWhileDBNO = 1,
        Exploding = 2,
        EYDeathType_MAX = 3
    };

    enum class EYAssetLoadRetrivalRequestType : uint8_t //Enum Prospect.EYAssetLoadRetrivalRequestType
    {
        OnlyFirstPerson = 0,
        OnlyThirdPerson = 1,
        All = 2,
        EYAssetLoadRetrivalRequestType_MAX = 3
    };

    enum class EYVivoxAudioFadeModel : uint8_t //Enum Prospect.EYVivoxAudioFadeModel
    {
        None = 0,
        InverseByDistance = 1,
        LinearByDistance = 2,
        ExponentialByDistance = 3,
        EYVivoxAudioFadeModel_MAX = 4
    };

    enum class EYMissionStatus : uint8_t //Enum Prospect.EYMissionStatus
    {
        Started = 0,
        Paused = 1,
        Reset = 2,
        EYMissionStatus_MAX = 3
    };

    enum class EYCommWheelEntryTutorialSetting : uint8_t //Enum Prospect.EYCommWheelEntryTutorialSetting
    {
        Always = 0,
        ShowOnlyInTutorial = 1,
        HideInTutorial = 2,
        EYCommWheelEntryTutorialSetting_MAX = 3
    };

    enum class EYLerpBehavior : uint8_t //Enum Prospect.EYLerpBehavior
    {
        Constant = 0,
        MaxToNone = 1,
        NoneToMax = 2,
        IntervalLerp = 3,
        Blinking = 4,
        EYLerpBehavior_MAX = 5
    };

    enum class EYInputBlockingAssociation : uint8_t //Enum Prospect.EYInputBlockingAssociation
    {
        Interaction = 0,
        DBNO = 1,
        Banner = 2,
        Intro = 3,
        EYInputBlockingAssociation_MAX = 4
    };

    enum class EYQuickMenuSubScreen : uint8_t //Enum Prospect.EYQuickMenuSubScreen
    {
        Invalid = 0,
        Play = 1,
        FortunaPass = 2,
        Inventory = 3,
        Character = 4,
        Shop = 5,
        Objectives = 6,
        AurumShop = 7,
        MAX = 8
    };

    enum class EYTravelInstanceType : uint8_t //Enum Prospect.EYTravelInstanceType
    {
        Invalid = 0,
        Match = 1,
        Station = 2,
        EYTravelInstanceType_MAX = 3
    };

    enum class EYStringVisualizationType : uint8_t //Enum Prospect.EYStringVisualizationType
    {
        CHAR_PER_CHAR = 0,
        RANDOM = 1,
        MAX = 2
    };

    enum class EYActorStorageIntention : uint8_t //Enum Prospect.EYActorStorageIntention
    {
        None = 0,
        Store = 1,
        Remove = 2,
        EYActorStorageIntention_MAX = 3
    };

    enum class EYDamageComponentType : uint8_t //Enum Prospect.EYDamageComponentType
    {
        Normal = 0,
        Player = 1,
        Enemy = 2,
        Invincible = 3,
        Everything = 4,
        EYDamageComponentType_MAX = 5
    };

    enum class EYPlayFabStoreCategory : uint8_t //Enum Prospect.EYPlayFabStoreCategory
    {
        None = 0,
        SpecialOffers = 1,
        StarterPacks = 2,
        Aurum = 3,
        EYPlayFabStoreCategory_MAX = 4
    };

    enum class EYBlueprintCraftingPriceType : uint8_t //Enum Prospect.EYBlueprintCraftingPriceType
    {
        Material = 0,
        Currency = 1,
        Invalid = 2,
        EYBlueprintCraftingPriceType_MAX = 3
    };

    enum class EYCraftingUnavailableReason : uint8_t //Enum Prospect.EYCraftingUnavailableReason
    {
        None = 0,
        ItemOwned = 1,
        NotEnoughFunds = 2,
        FactionLevelNotReached = 3,
        MissionNotConcluded = 4,
        RequirredItemNotOwned = 5,
        Unknown = 6,
        MAX = 7
    };

    enum class EYBlueprintAvailability : uint8_t //Enum Prospect.EYBlueprintAvailability
    {
        Locked = 0,
        Unlocked = 1,
        Purchasable = 2,
        PurchasePending = 3,
        Obtained = 4,
        Craftable = 5,
        CreatedButNotCraftable = 6,
        CreatedAndCraftable = 7,
        CreatedCraftedCantCraftAgain = 8,
        MAX = 9
    };

    enum class EYExperienceType : uint8_t //Enum Prospect.EYExperienceType
    {
        None = 0,
        SeasonXP = 1,
        MAX = 2
    };

    enum class EYExtractionActorState : uint8_t //Enum Prospect.EYExtractionActorState
    {
        Inactive = 0,
        Activating = 1,
        Active = 2,
        EYExtractionActorState_MAX = 3
    };

    enum class EYSlideAnimationState : uint8_t //Enum Prospect.EYSlideAnimationState
    {
        Into = 0,
        Loop = 1,
        Out = 2,
        EYSlideAnimationState_MAX = 3
    };

    enum class EYFeet : uint8_t //Enum Prospect.EYFeet
    {
        FrontLeft = 0,
        FrontRight = 1,
        BackLeft = 2,
        BackRight = 3,
        EYFeet_MAX = 4
    };

    enum class EYActionType : uint8_t //Enum Prospect.EYActionType
    {
        Invalid = 0,
        Kills = 1,
        Contracts = 2,
        Evac = 3,
        FactionLevelUp = 4,
        PlayerQuartersUpgradeFinished = 5,
        TechtreeNodeUpgradeFinished = 6,
        MAX = 7
    };

    enum class EYTransitionOption : uint8_t //Enum Prospect.EYTransitionOption
    {
        None = 0,
        ScreenChange = 1,
        MapTravel = 2,
        EYTransitionOption_MAX = 3
    };

    enum class EYEndOfMatchView : uint8_t //Enum Prospect.EYEndOfMatchView
    {
        None = 0,
        EscapeSequence = 1,
        DeathCamera = 2,
        Spectating = 3,
        Results = 4,
        Rewards = 5,
        EYEndOfMatchView_MAX = 6
    };

    enum class EYModifierAllowed : uint8_t //Enum Prospect.EYModifierAllowed
    {
        All = 0,
        OnlyAdditions = 1,
        OnlyMultipliers = 2,
        EYModifierAllowed_MAX = 3
    };

    enum class EYGearGroup : uint8_t //Enum Prospect.EYGearGroup
    {
        None = 0,
        GearSet = 1,
        Loadout = 2,
        MAX = 3
    };

    enum class EYPickupType : uint8_t //Enum Prospect.EYPickupType
    {
        None = 0,
        Currency = 1,
        CurrencyBox = 2,
        CurrencyPlayerDrop = 3,
        Crafting = 4,
        Weapon = 5,
        Ability = 6,
        Ammo = 7,
        HuntItem = 8,
        TrackingItem = 9,
        LootCrate = 10,
        Vehicle = 11,
        Consumable = 12,
        AmmoPlayerDrop = 13,
        Collectible = 14,
        QuestItem = 15,
        Shield = 16,
        Helmet = 17,
        MAX = 18
    };

    enum class EYGASAbilityInputID : uint8_t //Enum Prospect.EYGASAbilityInputID
    {
        None = 0,
        Confirm = 1,
        Cancel = 2,
        Ability1 = 3,
        EYGASAbilityInputID_MAX = 4
    };

    enum class EYPassiveGeneratorRewardType : uint8_t //Enum Prospect.EYPassiveGeneratorRewardType
    {
        None = 0,
        Aurum = 1,
        SoftCurrency = 2,
        Ammo = 3,
        Material = 4,
        Crate = 5,
        InsuranceClaim = 6,
        SpecialDeliveries = 7,
        MAX = 8
    };

    enum class EYHitZone : uint8_t //Enum Prospect.EYHitZone
    {
        None = 0,
        Default = 1,
        Head = 2,
        ArmRight = 3,
        ArmLeft = 4,
        LegRight = 5,
        LegLeft = 6,
        EYHitZone_MAX = 7
    };

    enum class EYImpactActorRotation : uint8_t //Enum Prospect.EYImpactActorRotation
    {
        UpVector_ImpactNormal = 0,
        UpVector_OwnerForwardVector = 1,
        UpVector_MAX = 2
    };

    enum class EYInputKeyType : uint8_t //Enum Prospect.EYInputKeyType
    {
        ActionKey = 0,
        AxisKey = 1,
        EYInputKeyType_MAX = 2
    };

    enum class EYStackManagement : uint8_t //Enum Prospect.EYStackManagement
    {
        Pop = 0,
        Handled = 1,
        Invalid = 2,
        EYStackManagement_MAX = 3
    };

    enum class EYInsuranceClaimResult : uint8_t //Enum Prospect.EYInsuranceClaimResult
    {
        Success = 0,
        UnknownError = 1,
        ClaimPending = 2,
        NoAvailablePackage = 3,
        StashFull = 4,
        EYInsuranceClaimResult_MAX = 5
    };

    enum class EYInventoryAudioActionPerformed : uint8_t //Enum Prospect.EYInventoryAudioActionPerformed
    {
        Moved = 0,
        Swapped = 1,
        Dropped = 2,
        Attached = 3,
        EYInventoryAudioActionPerformed_MAX = 4
    };

    enum class EYInventoryPlace : uint8_t //Enum Prospect.EYInventoryPlace
    {
        None = 0,
        Stash = 1,
        ActiveSet = 2,
        Safe = 3,
        EYInventoryPlace_MAX = 4
    };

    enum class EYItemChangeContext : uint8_t //Enum Prospect.EYItemChangeContext
    {
        Normal = 0,
        Cheat = 1,
        EYItemChangeContext_MAX = 2
    };

    enum class EYSortingResultCode : uint8_t //Enum Prospect.EYSortingResultCode
    {
        LessThen = 0,
        Equal = 1,
        GreaterThen = 2,
        EYSortingResultCode_MAX = 3
    };

    enum class EYItemStatsCategory : uint8_t //Enum Prospect.EYItemStatsCategory
    {
        None = 0,
        Weapon = 1,
        Gadget = 2,
        Ability = 3,
        Mod = 4,
        MeleeWeapon = 5,
        EYItemStatsCategory_MAX = 6
    };

    enum class EYItemStatsType : uint8_t //Enum Prospect.EYItemStatsType
    {
        None = 0,
        AttachToOwner = 1,
        Accuracy = 2,
        Ammo = 3,
        Armor = 4,
        BurstInterval = 5,
        Burst = 6,
        BagCapacity = 7,
        Cooldown = 8,
        DamageApplication = 9,
        DamageAgainstEnemy = 10,
        DamageAgainstPlayer = 11,
        DamageResistancePlayer = 12,
        DamageResistanceEnemy = 13,
        DamageSelfInvincibility = 14,
        Durability = 15,
        Duration = 16,
        DefaultSpread = 17,
        DPS = 18,
        DirectCloseRange = 19,
        DirectMaximumDistance = 20,
        DirectDamageFalloff = 21,
        Equip = 22,
        Health = 23,
        MaxSpread = 24,
        MaximumDistanceByActivation = 25,
        MaximumDistance = 26,
        MovementSpeedChange = 27,
        NumberApplied = 28,
        PerShotDamage = 29,
        ProjectileSpeed = 30,
        ProjectileLifetime = 31,
        ProjectileGravityScale = 32,
        Piercing = 33,
        Penetration = 34,
        ExplosiveCorpse = 35,
        RadialDamage = 36,
        Radius = 37,
        RadiusDamageEnabled = 38,
        Range = 39,
        RefireTime = 40,
        Reload = 41,
        Recoil = 42,
        RecoilVariance = 43,
        RoundsPerMinute = 44,
        RoundsPerSecond = 45,
        Spinup = 46,
        Speed = 47,
        Stability = 48,
        Shield = 49,
        TargetingSpeed = 50,
        TimeToActivateFromReady = 51,
        TotalDamage = 52,
        WeakAreaDamage = 53,
        WeaponSprintBufferTime = 54,
        WeaponBurstInterval = 55,
        WeaponRecoilCompenstationStartTime = 56,
        WeaponRecoilCompensationAmountX = 57,
        WeaponRecoilCompensationAmountY = 58,
        WeaponRecoilCompensationSpeedX = 59,
        WeaponRecoilCompensationSpeedY = 60,
        WeaponScaleOffset = 61,
        WeaponSpreadIncrease = 62,
        WeaponSpreadDecrease = 63,
        RadialDamageFalloffMultiplier = 64,
        RadialDamageStartFalloffRange = 65,
        VehicleBoostCooldown = 66,
        VehicleBoostSpeed = 67,
        VehicleBoostDuration = 68,
        AccelerationMultiplier = 69,
        EYItemStatsType_MAX = 70
    };

    enum class EYItemTooltipType : uint8_t //Enum Prospect.EYItemTooltipType
    {
        None = 0,
        Weapon = 1,
        Ability = 2,
        Gadget = 3,
        Kit = 4,
        Mod = 5,
        Vanity = 6,
        Material = 7,
        Blueprint = 8,
        Consumable = 9,
        EYItemTooltipType_MAX = 10
    };

    enum class EYInputKeybindingType : uint8_t //Enum Prospect.EYInputKeybindingType
    {
        Primary = 0,
        Secondary = 1,
        Gamepad = 2,
        EYInputKeybindingType_MAX = 3
    };

    enum class EYLootContainerWidgetType : uint8_t //Enum Prospect.EYLootContainerWidgetType
    {
        Undefined = 0,
        Bag = 1,
        Corpse = 2,
        DeadDrop = 3,
        EYLootContainerWidgetType_MAX = 4
    };

    enum class EYLootTier : uint8_t //Enum Prospect.EYLootTier
    {
        Tier_01 = 0,
        Tier_02 = 1,
        Tier_03 = 2,
        Tier_04 = 3,
        Tier_05 = 4,
        Tier_MAX = 5
    };

    enum class EYLootVelocityType : uint8_t //Enum Prospect.EYLootVelocityType
    {
        Regular = 0,
        ViewDirectionDependant = 1,
        EYLootVelocityType_MAX = 2
    };

    enum class EYLootContainerTier : uint8_t //Enum Prospect.EYLootContainerTier
    {
        Tier_01 = 0,
        Tier_02 = 1,
        Tier_03 = 2,
        Tier_04 = 3,
        Tier_05 = 4,
        Tier_MAX = 5
    };

    enum class EYMatchMapDifficulty : uint8_t //Enum Prospect.EYMatchMapDifficulty
    {
        Invalid = 0,
        Unknown = 1,
        VeryEasy = 2,
        Easy = 3,
        Normal = 4,
        Hard = 5,
        VeryHard = 6,
        Extreme = 7,
        MAX = 8
    };

    enum class EYMapType : uint8_t //Enum Prospect.EYMapType
    {
        None = 0,
        Map01 = 1,
        Map02 = 2,
        Map03 = 3,
        Map04 = 4,
        MAX = 5
    };

    enum class EYMatchmakingCountryOverrideOptions : uint8_t //Enum Prospect.EYMatchmakingCountryOverrideOptions
    {
        Allow = 0,
        ForceRedirect = 1,
        MAX = 2
    };

    enum class EYMatchmakingRegionOverrideOptions : uint8_t //Enum Prospect.EYMatchmakingRegionOverrideOptions
    {
        Allow = 0,
        Redirect = 1,
        Default = 2,
        MAX = 3
    };

    enum class EYMatchmakingUsersSplitOptions : uint8_t //Enum Prospect.EYMatchmakingUsersSplitOptions
    {
        None = 0,
        SplitNewUsers = 1,
        MAX = 2
    };

    enum class EYMatchmakingUsersAmountOptions : uint8_t //Enum Prospect.EYMatchmakingUsersAmountOptions
    {
        None = 0,
        FullestFirst = 1,
        EmptiestFirst = 2,
        MAX = 3
    };

    enum class EYMatchmakingMapOptions : uint8_t //Enum Prospect.EYMatchmakingMapOptions
    {
        None = 0,
        Strict = 1,
        Flexible = 2,
        MAX = 3
    };

    enum class EYEndOfMatchWidgetType : uint8_t //Enum Prospect.EYEndOfMatchWidgetType
    {
        EvacFailed = 0,
        EvacSuccess = 1,
        Missions = 2,
        Contracts = 3,
        Encounters = 4,
        Honors = 5,
        PlayerProgression = 6,
        SeasonProgression = 7,
        MAX = 8
    };

    enum class EYMineralTier : uint8_t //Enum Prospect.EYMineralTier
    {
        Low = 0,
        Medium = 1,
        High = 2,
        EYMineralTier_MAX = 3
    };

    enum class EYUnlockedTypes : uint8_t //Enum Prospect.EYUnlockedTypes
    {
        None = 0,
        Attachment = 1,
        Upgrade = 2,
        MAX = 3
    };

    enum class EYOverrideShowWeapon : uint8_t //Enum Prospect.EYOverrideShowWeapon
    {
        DontChangeDefaultWeaponSetting = 0,
        OverrideWithShowWeapon = 1,
        OverrideWithHideWeapon = 2,
        EYOverrideShowWeapon_MAX = 3
    };

    enum class EYNotificationsDisplayType : uint8_t //Enum Prospect.EYNotificationsDisplayType
    {
        None = 0,
        StationOnly = 1,
        StationWithPermanence = 2,
        MatchAndStation = 3,
        MAX = 4
    };

    enum class EYNotificationsCategory : uint8_t //Enum Prospect.EYNotificationsCategory
    {
        None = 0,
        Workbench = 1,
        PlayerQuarters = 2,
        FriendsStatus = 3,
        FriendInvites = 4,
        SquadUpdates = 5,
        SquadInvites = 6,
        FortunaPass = 7,
        Service = 8,
        Account = 9,
        MAX = 10
    };

    enum class EYNotificationsPriority : uint8_t //Enum Prospect.EYNotificationsPriority
    {
        None = 0,
        Low = 1,
        Medium = 2,
        Warning = 3,
        High = 4,
        MAX = 5
    };

    enum class EYNPCType : uint8_t //Enum Prospect.EYNPCType
    {
        Environment = 0,
        Loadout = 1,
        Shop = 2,
        Appearence = 3,
        FortunaPass = 4,
        Play = 5,
        ICA = 6,
        Korolev = 7,
        Osiris = 8,
        Badum = 9,
        EYNPCType_MAX = 10
    };

    enum class EYOnboardingQuestType : uint8_t //Enum Prospect.EYOnboardingQuestType
    {
        None = 0,
        TalkToNPC = 1,
        Kill = 2,
        GoTo = 3,
        Buy = 4,
        Craft = 5,
        Scrap = 6,
        EYOnboardingQuestType_MAX = 7
    };

    enum class EYPlayerAwarenessNotificationType : uint8_t //Enum Prospect.EYPlayerAwarenessNotificationType
    {
        NONE = 0,
        TeamMateDBNO = 1,
        TeamMateTakeDamageByHostilePlayer = 2,
        TeamMateDealDamageToHostilePlayer = 3,
        TeamMateShieldBroken = 4,
        LocalPlayerTargeted = 5,
        MAX = 6
    };

    enum class EYDebugServerRetrievalType : uint8_t //Enum Prospect.EYDebugServerRetrievalType
    {
        None = 0,
        Initialization = 1,
        EYDebugServerRetrievalType_MAX = 2
    };

    enum class EYDebugEventType : uint8_t //Enum Prospect.EYDebugEventType
    {
        AudioMixModifiers = 0,
        Announcements = 1,
        InputMode = 2,
        PlayerInitialization = 3,
        EYDebugEventType_MAX = 4
    };

    enum class EYUICursorVisibility : uint8_t //Enum Prospect.EYUICursorVisibility
    {
        NotVisible = 0,
        Visible = 1,
        EYUICursorVisibility_MAX = 2
    };

    enum class EYUIOptionExclusiveOption : uint8_t //Enum Prospect.EYUIOptionExclusiveOption
    {
        NotExclusive = 0,
        Exclusive = 1,
        EYUIOptionExclusiveOption_MAX = 2
    };

    enum class EYPodSpawningTypeContext : uint8_t //Enum Prospect.EYPodSpawningTypeContext
    {
        NoneAssigned = 0,
        Customization = 1,
        Lobby = 2,
        Intro = 3,
        InGame = 4,
        EYPodSpawningTypeContext_MAX = 5
    };

    enum class EYMatchInstanceType : uint8_t //Enum Prospect.EYMatchInstanceType
    {
        None = 0,
        Room = 1,
        Station = 2,
        EYMatchInstanceType_MAX = 3
    };

    enum class EYProspectorLevelRewardType : uint8_t //Enum Prospect.EYProspectorLevelRewardType
    {
        None = 0,
        Border = 1,
        Icon = 2,
        BorderAndIcon = 3,
        EYProspectorLevelRewardType_MAX = 4
    };

    enum class EYClassRepNodeMapping : uint8_t //Enum Prospect.EYClassRepNodeMapping
    {
        Undefined = 0,
        NotRouted = 1,
        RelevantAllConnections = 2,
        PlayerCharacter = 3,
        Spatialize_Static = 4,
        Spatialize_Dynamic = 5,
        Spatialize_Dormancy = 6,
        EYClassRepNodeMapping_MAX = 7
    };

    enum class EYResourceAtomicState : uint8_t //Enum Prospect.EYResourceAtomicState
    {
        None = 0,
        Pending = 1,
        Completed = 2,
        EYResourceAtomicState_MAX = 3
    };

    enum class EYRetentionBonusEntryType : uint8_t //Enum Prospect.EYRetentionBonusEntryType
    {
        None = 0,
        Item = 1,
        Archetype = 2,
        Virtual = 3,
        EYRetentionBonusEntryType_MAX = 4
    };

    enum class EYRewardType : uint8_t //Enum Prospect.EYRewardType
    {
        None = 0,
        Currency = 1,
        Material = 2,
        Reputation = 3,
        SeasonXP = 4,
        ProspectorLevel = 5,
        Ammo = 6,
        Weapon = 7,
        Consumable = 8,
        Armor = 9,
        Bag = 10,
        MAX = 11
    };

    enum class EYSceneState : uint8_t //Enum Prospect.EYSceneState
    {
        None = 0,
        Normal = 1,
        Detail = 2,
        MAX = 3
    };

    enum class EYActionMuteHistoryResult : uint8_t //Enum Prospect.EYActionMuteHistoryResult
    {
        Ok = 0,
        Mute = 1,
        SpecificUserMute = 2,
        EYActionMuteHistoryResult_MAX = 3
    };

    enum class EYPendingResolveType : uint8_t //Enum Prospect.EYPendingResolveType
    {
        None = 0,
        Pending = 1,
        Resolved = 2,
        EYPendingResolveType_MAX = 3
    };

    enum class EYSocialUICategory : uint8_t //Enum Prospect.EYSocialUICategory
    {
        FriendInvites = 0,
        SquadInvites = 1,
        Online = 2,
        Offline = 3,
        Blocked = 4,
        SearchResults = 5,
        EYSocialUICategory_MAX = 6
    };

    enum class EYUserInviteStatus : uint8_t //Enum Prospect.EYUserInviteStatus
    {
        Unknown = 0,
        Friends = 1,
        PendingInbound = 2,
        PendingOutbound = 3,
        Blocked = 4,
        EYUserInviteStatus_MAX = 5
    };

    enum class EYSortingRequestType : uint8_t //Enum Prospect.EYSortingRequestType
    {
        None = 0,
        Owned = 1,
        FactionReputation = 2,
        EYSortingRequestType_MAX = 3
    };

    enum class EYSplineMovementInitBPType : uint8_t //Enum Prospect.EYSplineMovementInitBPType
    {
        NONE = 0,
        SplineComponentSet = 1,
        MovementActorSet = 2,
        MAX = 3
    };

    enum class EYStatOperator : uint8_t //Enum Prospect.EYStatOperator
    {
        NONE = 0,
        ADD = 1,
        SUBTRACT = 2,
        MULTIPLY = 3,
        DIVIDE = 4,
        LOWEST = 5,
        HIGHEST = 6,
        MAX = 7
    };

    enum class EYTechTreeNodePerkType : uint8_t //Enum Prospect.EYTechTreeNodePerkType
    {
        None = 0,
        IncreaseStashSize = 1,
        IncreaseBagSize = 2,
        PassiveKMarkGenHour = 3,
        PassiveAurumGenDay = 4,
        IncreasePassiveKMarkGenCap = 5,
        IncreasePassiveAurumGenCap = 6,
        DailyCrate = 7,
        ReduceUpgradingTimePerc = 8,
        MAX = 9
    };

    enum class EYTransitionRequest : uint8_t //Enum Prospect.EYTransitionRequest
    {
        None = 0,
        Reset = 1,
        FindCamera = 2,
        ExplicitViewTarget = 3,
        EYTransitionRequest_MAX = 4
    };

    enum class EYTransponderMode : uint8_t //Enum Prospect.EYTransponderMode
    {
        Friendly = 0,
        Hostile = 1,
        EYTransponderMode_MAX = 2
    };

    enum class EYDebugAutoEquipSlots : uint8_t //Enum Prospect.EYDebugAutoEquipSlots
    {
        Kit = 0,
        Weapon = 1,
        AbilityOne = 2,
        AbilityTwo = 3,
        EYDebugAutoEquipSlots_MAX = 4
    };

    enum class EYSensitivityMode : uint8_t //Enum Prospect.EYSensitivityMode
    {
        Regular = 0,
        AimingDownSights = 1,
        Scoped = 2,
        PerScope = 3,
        EYSensitivityMode_MAX = 4
    };

    enum class EYWeaponVanityItemDisplayType : uint8_t //Enum Prospect.EYWeaponVanityItemDisplayType
    {
        Invalid = 0,
        CanBeApplied = 1,
        UsedOnSpecificItem = 2,
        IsLocked = 3,
        EYWeaponVanityItemDisplayType_MAX = 4
    };

    enum class EYCustomizationPreviewScreen : uint8_t //Enum Prospect.EYCustomizationPreviewScreen
    {
        None = 0,
        CharacterCustomization = 1,
        FortunaPass = 2,
        PremiumShop = 3,
        EYCustomizationPreviewScreen_MAX = 4
    };

    enum class EYVehicleSoundType : uint8_t //Enum Prospect.EYVehicleSoundType
    {
        Movement = 0,
        Boost = 1,
        Idle = 2,
        EYVehicleSoundType_MAX = 3
    };

    enum class EYVirtualCursorState : uint8_t //Enum Prospect.EYVirtualCursorState
    {
        None = 0,
        Idle = 1,
        Hovering = 2,
        EYVirtualCursorState_MAX = 3
    };

    enum class EYVivoxChannelState : uint8_t //Enum Prospect.EYVivoxChannelState
    {
        None = 0,
        Disconnected = 1,
        PendingVivoxDisconnection = 2,
        Logout = 3,
        PendingBackendTokenJoin = 4,
        PendingVivoxExecutionState = 5,
        PendingVivoxChannelJoin = 6,
        Connected = 7,
        EYVivoxChannelState_MAX = 8
    };

    enum class EYVolumeBusType : uint8_t //Enum Prospect.EYVolumeBusType
    {
        Master = 0,
        Music = 1,
        Sfx = 2,
        VO = 3,
        UI = 4,
        HitMarker = 5,
        MAX = 6
    };

    enum class EYVoPlayerBodyType : uint8_t //Enum Prospect.EYVoPlayerBodyType
    {
        Default = 0,
        Male1 = 1,
        Female1 = 2,
        EYVoPlayerBodyType_MAX = 3
    };

    enum class EYScopeType : uint8_t //Enum Prospect.EYScopeType
    {
        None = 0,
        ADS = 1,
        TwoTimes = 2,
        FourTimes = 3,
        SixTimes = 4,
        EightTimes = 5,
        MAX = 6
    };

    enum class EYWeaponAnimationPlayState : uint8_t //Enum Prospect.EYWeaponAnimationPlayState
    {
        None = 0,
        FirstPerson = 1,
        ThirdPerson = 2,
        Weapon = 3,
        WeaponThirdPerson = 4,
        EYWeaponAnimationPlayState_MAX = 5
    };

    enum class EYEquipedAnimationWeaponType : uint8_t //Enum Prospect.EYEquipedAnimationWeaponType
    {
        Invalid = 0,
        Pistol = 1,
        SMG = 2,
        Rifle = 3,
        Scanner = 4,
        Sniper = 5,
        Shotgun = 6,
        HuntingRifle = 7,
        CustonNotUsedWeapon_03 = 8,
        CustonNotUsedWeapon_04 = 9,
        CustonNotUsedWeapon_05 = 10,
        CustonNotUsedWeapon_06 = 11,
        CustonNotUsedWeapon_07 = 12,
        CustonNotUsedWeapon_08 = 13,
        CustonNotUsedWeapon_09 = 14,
        CustonNotUsedWeapon_11 = 15,
        CustonNotUsedWeapon_12 = 16,
        CustonNotUsedWeapon_13 = 17,
        CustonNotUsedWeapon_14 = 18,
        CustonNotUsedWeapon_15 = 19,
        CustonNotUsedWeapon_16 = 20,
        CustonNotUsedWeapon_17 = 21,
        CustonNotUsedWeapon_18 = 22,
        CustonNotUsedWeapon_19 = 23,
        CustonNotUsedWeapon_20 = 24,
        CustonNotUsedWeapon_21 = 25,
        EYEquipedAnimationWeaponType_MAX = 26
    };

    enum class EYWeaponPlayState : uint8_t //Enum Prospect.EYWeaponPlayState
    {
        Invalid = 0,
        Equip = 1,
        Fire = 2,
        FireMiss = 3,
        Unequip = 4,
        Reload = 5,
        StopFire = 6,
        Spinup = 7,
        Use = 8,
        FireTargeting = 9,
        StopFireTargeting = 10,
        ReloadFirstAmmo = 11,
        ReloadLoop = 12,
        ReloadOut = 13,
        ReloadOutEmpty = 14,
        MeleeLight = 15,
        MeleeLightImpact = 16,
        MeleeHeavy = 17,
        MeleeHeavyImpact = 18,
        MAX = 19
    };

    enum class EYTraceShapeType : uint8_t //Enum Prospect.EYTraceShapeType
    {
        LineTrace = 0,
        Capsule = 1,
        EYTraceShapeType_MAX = 2
    };

    enum class EYLimitType : uint8_t //Enum Prospect.EYLimitType
    {
        Min = 0,
        Max = 1
    };

    enum class EYVFX_WeaponType : uint8_t //Enum Prospect.EYVFX_WeaponType
    {
        None = 0,
        Pistol = 1,
        SMG = 2,
        LMG = 3,
        Assault = 4,
        SemiAuto = 5,
        Shotgun = 6,
        EYVFX_MAX = 7
    };

    enum class EYTransportHitType : uint8_t //Enum Prospect.EYTransportHitType
    {
        All = 0,
        Enemy = 1,
        Friendly = 2,
        None = 3,
        EYTransportHitType_MAX = 4
    };

    enum class EYWeaponTransportHitResultType : uint8_t //Enum Prospect.EYWeaponTransportHitResultType
    {
        NormalBehavior = 0,
        NoImpactRetrace = 1,
        NotifyTransportComponentIgnoreImpact = 2,
        ImpactRetrace = 3,
        EYWeaponTransportHitResultType_MAX = 4
    };

    enum class EYWheelInputResponse : uint8_t //Enum Prospect.EYWheelInputResponse
    {
        Denied = 0,
        Accepted = 1,
        TabAction = 2,
        EYWheelInputResponse_MAX = 3
    };

    enum class EYRequeueingState : uint8_t //Enum Prospect.EYRequeueingState
    {
        NoRequeuing = 0,
        WaitingForPremadeTeammates = 1,
        NotMatchmaking = 2,
        Matchmaking = 3,
        PlayerMatched = 4,
        EYRequeueingState_MAX = 5
    };

    enum class EYItemStatsState : uint8_t //Enum Prospect.EYItemStatsState
    {
        Invalid = 0,
        Basic = 1,
        Detailed = 2,
        EYItemStatsState_MAX = 3
    };

    enum class EYItemDetailWidgets : uint8_t //Enum Prospect.EYItemDetailWidgets
    {
        None = 0,
        InventoryItem = 1,
        BlueprintItem = 2,
        EYItemDetailWidgets_MAX = 3
    };

    enum class EYMapLayerIndex : uint8_t //Enum Prospect.EYMapLayerIndex
    {
        BACKGROUND = 0,
        ACTIVITIES = 1,
        PLAYERS = 2,
        SOCIALACTOR = 3,
        MAX = 4
    };

    enum class EYQuickActionClick : uint8_t //Enum Prospect.EYQuickActionClick
    {
        None = 0,
        MuteChat = 1,
        MuteVoice = 2,
        ReportPlayer = 3,
        AddFriend = 4,
        BlockPlayer = 5,
        EYQuickActionClick_MAX = 6
    };

    enum class EYVanityViewDialogOptions : uint8_t //Enum Prospect.EYVanityViewDialogOptions
    {
        None = 0,
        ConfirmChanges = 1,
        SceneChange = 2,
        EYVanityViewDialogOptions_MAX = 3
    };

    enum class EYVanitySelectionState : uint8_t //Enum Prospect.EYVanitySelectionState
    {
        None = 0,
        Categories = 1,
        Items = 2,
        EYVanitySelectionState_MAX = 3
    };

    enum class EYVisibilityBranch : uint8_t //Enum Prospect.EYVisibilityBranch
    {
        Visible = 0,
        NotVisible = 1,
        EYVisibilityBranch_MAX = 2
    };

    enum class EYTimerDisplayType : uint8_t //Enum Prospect.EYTimerDisplayType
    {
        Custom = 0,
        HoursMinutesSeconds = 1,
        DaysHoursMinutes = 2,
        DaysHoursMinutesSeconds = 3,
        EYTimerDisplayType_MAX = 4
    };

    enum class ELifetimeCondition : uint8_t //Enum CoreUObject.ELifetimeCondition
    {
        COND_None = 0,
        COND_InitialOnly = 1,
        COND_OwnerOnly = 2,
        COND_SkipOwner = 3,
        COND_SimulatedOnly = 4,
        COND_AutonomousOnly = 5,
        COND_SimulatedOrPhysics = 6,
        COND_InitialOrOwner = 7,
        COND_Custom = 8,
        COND_ReplayOrOwner = 9,
        COND_ReplayOnly = 10,
        COND_SimulatedOnlyNoReplay = 11,
        COND_SimulatedOrPhysicsNoReplay = 12,
        COND_SkipReplay = 13,
        COND_Never = 15,
        COND_Max = 16
    };

    enum class EDataValidationResult : uint8_t //Enum CoreUObject.EDataValidationResult
    {
        Invalid = 0,
        Valid = 1,
        NotValidated = 2,
        EDataValidationResult_MAX = 3
    };

    enum class EAppMsgType : uint8_t //Enum CoreUObject.EAppMsgType
    {
        Ok = 0,
        YesNo = 1,
        OkCancel = 2,
        YesNoCancel = 3,
        CancelRetryContinue = 4,
        YesNoYesAllNoAll = 5,
        YesNoYesAllNoAllCancel = 6,
        YesNoYesAll = 7,
        EAppMsgType_MAX = 8
    };

    enum class EAppReturnType : uint8_t //Enum CoreUObject.EAppReturnType
    {
        No = 0,
        Yes = 1,
        YesAll = 2,
        NoAll = 3,
        Cancel = 4,
        Ok = 5,
        Retry = 6,
        Continue = 7,
        EAppReturnType_MAX = 8
    };

    enum class EPropertyAccessChangeNotifyMode : uint8_t //Enum CoreUObject.EPropertyAccessChangeNotifyMode
    {
        Default = 0,
        Never = 1,
        Always = 2,
        EPropertyAccessChangeNotifyMode_MAX = 3
    };

    enum class EUnit : uint8_t //Enum CoreUObject.EUnit
    {
        Micrometers = 0,
        Millimeters = 1,
        Centimeters = 2,
        Meters = 3,
        Kilometers = 4,
        Inches = 5,
        Feet = 6,
        Yards = 7,
        Miles = 8,
        Lightyears = 9,
        Degrees = 10,
        Radians = 11,
        MetersPerSecond = 12,
        KilometersPerHour = 13,
        MilesPerHour = 14,
        Celsius = 15,
        Farenheit = 16,
        Kelvin = 17,
        Micrograms = 18,
        Milligrams = 19,
        Grams = 20,
        Kilograms = 21,
        MetricTons = 22,
        Ounces = 23,
        Pounds = 24,
        Stones = 25,
        Newtons = 26,
        PoundsForce = 27,
        KilogramsForce = 28,
        Hertz = 29,
        Kilohertz = 30,
        Megahertz = 31,
        Gigahertz = 32,
        RevolutionsPerMinute = 33,
        Bytes = 34,
        Kilobytes = 35,
        Megabytes = 36,
        Gigabytes = 37,
        Terabytes = 38,
        Lumens = 39,
        Milliseconds = 43,
        Seconds = 44,
        Minutes = 45,
        Hours = 46,
        Days = 47,
        Months = 48,
        Years = 49,
        Multiplier = 52,
        Percentage = 51,
        Unspecified = 53,
        EUnit_MAX = 54
    };

    enum class EPixelFormat : uint8_t //Enum CoreUObject.EPixelFormat
    {
        PF_Unknown = 0,
        PF_A32B32G32R32F = 1,
        PF_B8G8R8A8 = 2,
        PF_G8 = 3,
        PF_G16 = 4,
        PF_DXT1 = 5,
        PF_DXT3 = 6,
        PF_DXT5 = 7,
        PF_UYVY = 8,
        PF_FloatRGB = 9,
        PF_FloatRGBA = 10,
        PF_DepthStencil = 11,
        PF_ShadowDepth = 12,
        PF_R32_FLOAT = 13,
        PF_G16R16 = 14,
        PF_G16R16F = 15,
        PF_G16R16F_FILTER = 16,
        PF_G32R32F = 17,
        PF_A2B10G10R10 = 18,
        PF_A16B16G16R16 = 19,
        PF_D24 = 20,
        PF_R16F = 21,
        PF_R16F_FILTER = 22,
        PF_BC5 = 23,
        PF_V8U8 = 24,
        PF_A1 = 25,
        PF_FloatR11G11B10 = 26,
        PF_A8 = 27,
        PF_R32_UINT = 28,
        PF_R32_SINT = 29,
        PF_PVRTC2 = 30,
        PF_PVRTC4 = 31,
        PF_R16_UINT = 32,
        PF_R16_SINT = 33,
        PF_R16G16B16A16_UINT = 34,
        PF_R16G16B16A16_SINT = 35,
        PF_R5G6B5_UNORM = 36,
        PF_R8G8B8A8 = 37,
        PF_A8R8G8B8 = 38,
        PF_BC4 = 39,
        PF_R8G8 = 40,
        PF_ATC_RGB = 41,
        PF_ATC_RGBA_E = 42,
        PF_ATC_RGBA_I = 43,
        PF_X24_G8 = 44,
        PF_ETC1 = 45,
        PF_ETC2_RGB = 46,
        PF_ETC2_RGBA = 47,
        PF_R32G32B32A32_UINT = 48,
        PF_R16G16_UINT = 49,
        PF_ASTC_4x4 = 50,
        PF_ASTC_6x6 = 51,
        PF_ASTC_8x8 = 52,
        PF_ASTC_10x10 = 53,
        PF_ASTC_12x12 = 54,
        PF_BC6H = 55,
        PF_BC7 = 56,
        PF_R8_UINT = 57,
        PF_L8 = 58,
        PF_XGXR8 = 59,
        PF_R8G8B8A8_UINT = 60,
        PF_R8G8B8A8_SNORM = 61,
        PF_R16G16B16A16_UNORM = 62,
        PF_R16G16B16A16_SNORM = 63,
        PF_PLATFORM_HDR_1 = 64,
        PF_PLATFORM_HDR_2 = 65,
        PF_PLATFORM_HDR_3 = 66,
        PF_NV12 = 67,
        PF_R32G32_UINT = 68,
        PF_ETC2_R11_EAC = 69,
        PF_ETC2_RG11_EAC = 70,
        PF_MAX = 72
    };

    enum class EAxis : uint8_t //Enum CoreUObject.EAxis
    {
        None = 0,
        X = 1,
        Y = 2,
        Z = 3,
        EAxis_MAX = 4
    };

    enum class ELogTimes : uint8_t //Enum CoreUObject.ELogTimes
    {
        None = 0,
        UTC = 1,
        SinceGStartTime = 2,
        Local = 3,
        ELogTimes_MAX = 4
    };

    enum class ESearchDir : uint8_t //Enum CoreUObject.ESearchDir
    {
        FromStart = 0,
        FromEnd = 1,
        ESearchDir_MAX = 2
    };

    enum class ESearchCase : uint8_t //Enum CoreUObject.ESearchCase
    {
        CaseSensitive = 0,
        IgnoreCase = 1,
        ESearchCase_MAX = 2
    };

    enum class ETouchType : uint8_t //Enum InputCore.ETouchType
    {
        Began = 0,
        Moved = 1,
        Stationary = 2,
        ForceChanged = 3,
        FirstMove = 4,
        Ended = 5,
        NumTypes = 6,
        ETouchType_MAX = 7
    };

    enum class EConsoleForGamepadLabels : uint8_t //Enum InputCore.EConsoleForGamepadLabels
    {
        None = 0,
        XBoxOne = 1,
        PS4 = 2,
        EConsoleForGamepadLabels_MAX = 3
    };

    enum class EFontLayoutMethod : uint8_t //Enum SlateCore.EFontLayoutMethod
    {
        Metrics = 0,
        BoundingBox = 1,
        EFontLayoutMethod_MAX = 2
    };

    enum class EFontLoadingPolicy : uint8_t //Enum SlateCore.EFontLoadingPolicy
    {
        LazyLoad = 0,
        Stream = 1,
        Inline = 2,
        EFontLoadingPolicy_MAX = 3
    };

    enum class EFontHinting : uint8_t //Enum SlateCore.EFontHinting
    {
        Default = 0,
        Auto = 1,
        AutoLight = 2,
        Monochrome = 3,
        None = 4,
        EFontHinting_MAX = 5
    };

    enum class EFocusCause : uint8_t //Enum SlateCore.EFocusCause
    {
        Mouse = 0,
        Navigation = 1,
        SetDirectly = 2,
        Cleared = 3,
        OtherWidgetLostFocus = 4,
        WindowActivate = 5,
        EFocusCause_MAX = 6
    };

    enum class ESlateDebuggingFocusEvent : uint8_t //Enum SlateCore.ESlateDebuggingFocusEvent
    {
        FocusChanging = 0,
        FocusLost = 1,
        FocusReceived = 2,
        MAX = 3
    };

    enum class ESlateDebuggingNavigationMethod : uint8_t //Enum SlateCore.ESlateDebuggingNavigationMethod
    {
        Unknown = 0,
        Explicit = 1,
        CustomDelegateBound = 2,
        CustomDelegateUnbound = 3,
        NextOrPrevious = 4,
        HitTestGrid = 5,
        ESlateDebuggingNavigationMethod_MAX = 6
    };

    enum class ESlateDebuggingStateChangeEvent : uint8_t //Enum SlateCore.ESlateDebuggingStateChangeEvent
    {
        MouseCaptureGained = 0,
        MouseCaptureLost = 1,
        ESlateDebuggingStateChangeEvent_MAX = 2
    };

    enum class ESlateDebuggingInputEvent : uint8_t //Enum SlateCore.ESlateDebuggingInputEvent
    {
        MouseMove = 0,
        MouseEnter = 1,
        MouseLeave = 2,
        PreviewMouseButtonDown = 3,
        MouseButtonDown = 4,
        MouseButtonUp = 5,
        MouseButtonDoubleClick = 6,
        MouseWheel = 7,
        TouchStart = 8,
        TouchEnd = 9,
        TouchForceChanged = 10,
        TouchFirstMove = 11,
        TouchMoved = 12,
        DragDetected = 13,
        DragEnter = 14,
        DragLeave = 15,
        DragOver = 16,
        DragDrop = 17,
        DropMessage = 18,
        PreviewKeyDown = 19,
        KeyDown = 20,
        KeyUp = 21,
        KeyChar = 22,
        AnalogInput = 23,
        TouchGesture = 24,
        MotionDetected = 25,
        MAX = 26
    };

    enum class EScrollDirection : uint8_t //Enum SlateCore.EScrollDirection
    {
        Scroll_Down = 0,
        Scroll_Up = 1,
        Scroll_MAX = 2
    };

    enum class EOrientation : uint8_t //Enum SlateCore.EOrientation
    {
        Orient_Horizontal = 0,
        Orient_Vertical = 1,
        Orient_MAX = 2
    };

    enum class EVerticalAlignment : uint8_t //Enum SlateCore.EVerticalAlignment
    {
        VAlign_Fill = 0,
        VAlign_Top = 1,
        VAlign_Center = 2,
        VAlign_Bottom = 3,
        VAlign_MAX = 4
    };

    enum class EHorizontalAlignment : uint8_t //Enum SlateCore.EHorizontalAlignment
    {
        HAlign_Fill = 0,
        HAlign_Left = 1,
        HAlign_Center = 2,
        HAlign_Right = 3,
        HAlign_MAX = 4
    };

    enum class ENavigationGenesis : uint8_t //Enum SlateCore.ENavigationGenesis
    {
        Keyboard = 0,
        Controller = 1,
        User = 2,
        ENavigationGenesis_MAX = 3
    };

    enum class ENavigationSource : uint8_t //Enum SlateCore.ENavigationSource
    {
        FocusedWidget = 0,
        WidgetUnderCursor = 1,
        ENavigationSource_MAX = 2
    };

    enum class EUINavigationAction : uint8_t //Enum SlateCore.EUINavigationAction
    {
        Accept = 0,
        Back = 1,
        Num = 2,
        Invalid = 3,
        EUINavigationAction_MAX = 4
    };

    enum class EButtonPressMethod : uint8_t //Enum SlateCore.EButtonPressMethod
    {
        DownAndUp = 0,
        ButtonPress = 1,
        ButtonRelease = 2,
        EButtonPressMethod_MAX = 3
    };

    enum class EButtonTouchMethod : uint8_t //Enum SlateCore.EButtonTouchMethod
    {
        DownAndUp = 0,
        Down = 1,
        PreciseTap = 2,
        EButtonTouchMethod_MAX = 3
    };

    enum class EButtonClickMethod : uint8_t //Enum SlateCore.EButtonClickMethod
    {
        DownAndUp = 0,
        MouseDown = 1,
        MouseUp = 2,
        PreciseClick = 3,
        EButtonClickMethod_MAX = 4
    };

    enum class ESlateCheckBoxType : uint8_t //Enum SlateCore.ESlateCheckBoxType
    {
        CheckBox = 0,
        ToggleButton = 1,
        ESlateCheckBoxType_MAX = 2
    };

    enum class ESlateParentWindowSearchMethod : uint8_t //Enum SlateCore.ESlateParentWindowSearchMethod
    {
        ActiveWindow = 0,
        MainWindow = 1,
        ESlateParentWindowSearchMethod_MAX = 2
    };

    enum class EConsumeMouseWheel : uint8_t //Enum SlateCore.EConsumeMouseWheel
    {
        WhenScrollingPossible = 0,
        Always = 1,
        Never = 2,
        EConsumeMouseWheel_MAX = 3
    };

    enum class EBitmapCSType : uint32_t //Enum ImageWrapper.EBitmapCSType
    {
        BCST_BLCS_CALIBRATED_RGB = 0,
        BCST_LCS_sRGB = 1934772034,
        BCST_LCS_WINDOWS_COLOR_SPACE = 1466527264,
        BCST_PROFILE_LINKED = 1279872587,
        BCST_PROFILE_EMBEDDED = 1296188740,
        BCST_MAX = 1934772035
    };

    enum class EBitmapHeaderVersion : uint8_t //Enum ImageWrapper.EBitmapHeaderVersion
    {
        BHV_BITMAPINFOHEADER = 0,
        BHV_BITMAPV2INFOHEADER = 1,
        BHV_BITMAPV3INFOHEADER = 2,
        BHV_BITMAPV4HEADER = 3,
        BHV_BITMAPV5HEADER = 4,
        BHV_MAX = 5
    };

    enum class ETableViewMode : uint8_t //Enum Slate.ETableViewMode
    {
        List = 0,
        Tile = 1,
        Tree = 2,
        ETableViewMode_MAX = 3
    };

    enum class ESelectionMode : uint8_t //Enum Slate.ESelectionMode
    {
        None = 0,
        Single = 1,
        SingleToggle = 2,
        Multi = 3,
        ESelectionMode_MAX = 4
    };

    enum class EMultiBlockType : uint8_t //Enum Slate.EMultiBlockType
    {
        None = 0,
        ButtonRow = 1,
        EditableText = 2,
        Heading = 3,
        MenuEntry = 4,
        Separator = 5,
        ToolBarButton = 6,
        ToolBarComboButton = 7,
        Widget = 8,
        EMultiBlockType_MAX = 9
    };

    enum class EMultiBoxType : uint8_t //Enum Slate.EMultiBoxType
    {
        MenuBar = 0,
        ToolBar = 1,
        VerticalToolBar = 2,
        UniformToolBar = 3,
        Menu = 4,
        ButtonRow = 5,
        EMultiBoxType_MAX = 6
    };

    enum class EProgressBarFillType : uint8_t //Enum Slate.EProgressBarFillType
    {
        LeftToRight = 0,
        RightToLeft = 1,
        FillFromCenter = 2,
        TopToBottom = 3,
        BottomToTop = 4,
        EProgressBarFillType_MAX = 5
    };

    enum class EStretch : uint8_t //Enum Slate.EStretch
    {
        None = 0,
        Fill = 1,
        ScaleToFit = 2,
        ScaleToFitX = 3,
        ScaleToFitY = 4,
        ScaleToFill = 5,
        ScaleBySafeZone = 6,
        UserSpecified = 7,
        EStretch_MAX = 8
    };

    enum class EStretchDirection : uint8_t //Enum Slate.EStretchDirection
    {
        Both = 0,
        DownOnly = 1,
        UpOnly = 2,
        EStretchDirection_MAX = 3
    };

    enum class EScrollWhenFocusChanges : uint8_t //Enum Slate.EScrollWhenFocusChanges
    {
        NoScroll = 0,
        InstantScroll = 1,
        AnimatedScroll = 2,
        EScrollWhenFocusChanges_MAX = 3
    };

    enum class EDescendantScrollDestination : uint8_t //Enum Slate.EDescendantScrollDestination
    {
        IntoView = 0,
        TopOrLeft = 1,
        Center = 2,
        BottomOrRight = 3,
        EDescendantScrollDestination_MAX = 4
    };

    enum class EListItemAlignment : uint8_t //Enum Slate.EListItemAlignment
    {
        EvenlyDistributed = 0,
        EvenlySize = 1,
        EvenlyWide = 2,
        LeftAligned = 3,
        RightAligned = 4,
        CenterAligned = 5,
        Fill = 6,
        EListItemAlignment_MAX = 7
    };

    enum class ETextTransformPolicy : uint8_t //Enum Slate.ETextTransformPolicy
    {
        None = 0,
        ToLower = 1,
        ToUpper = 2,
        ETextTransformPolicy_MAX = 3
    };

    enum class ECustomizedToolMenuVisibility : uint8_t //Enum Slate.ECustomizedToolMenuVisibility
    {
        None = 0,
        Visible = 1,
        Hidden = 2,
        ECustomizedToolMenuVisibility_MAX = 3
    };

    enum class EMultipleKeyBindingIndex : uint8_t //Enum Slate.EMultipleKeyBindingIndex
    {
        Primary = 0,
        Secondary = 1,
        NumChords = 2,
        EMultipleKeyBindingIndex_MAX = 3
    };

    enum class EUserInterfaceActionType : uint8_t //Enum Slate.EUserInterfaceActionType
    {
        None = 0,
        Button = 1,
        ToggleButton = 2,
        RadioButton = 3,
        Check = 4,
        CollapsedButton = 5,
        EUserInterfaceActionType_MAX = 6
    };

    enum class EDesiredImageFormat : uint8_t //Enum ImageWriteQueue.EDesiredImageFormat
    {
        PNG = 0,
        JPG = 1,
        BMP = 2,
        EXR = 3,
        EDesiredImageFormat_MAX = 4
    };

    enum class EMobileShadowQuality : uint8_t //Enum MaterialShaderQualitySettings.EMobileShadowQuality
    {
        NoFiltering = 0,
        PCF_1x1 = 1,
        PCF_2x2 = 2,
        PCF_3x3 = 3,
        EMobileShadowQuality_MAX = 4
    };

    enum class EEyeTrackerStatus : uint8_t //Enum EyeTracker.EEyeTrackerStatus
    {
        NotConnected = 0,
        NotTracking = 1,
        Tracking = 2,
        EEyeTrackerStatus_MAX = 3
    };

    enum class ESubLevelStripMode : uint8_t //Enum EngineSettings.ESubLevelStripMode
    {
        ExactClass = 0,
        IsChildOf = 1,
        ESubLevelStripMode_MAX = 2
    };

    enum class EFourPlayerSplitScreenType : uint8_t //Enum EngineSettings.EFourPlayerSplitScreenType
    {
        Grid = 0,
        Vertical = 1,
        Horizontal = 2,
        EFourPlayerSplitScreenType_MAX = 3
    };

    enum class EThreePlayerSplitScreenType : uint8_t //Enum EngineSettings.EThreePlayerSplitScreenType
    {
        FavorTop = 0,
        FavorBottom = 1,
        Vertical = 2,
        Horizontal = 3,
        EThreePlayerSplitScreenType_MAX = 4
    };

    enum class ETwoPlayerSplitScreenType : uint8_t //Enum EngineSettings.ETwoPlayerSplitScreenType
    {
        Horizontal = 0,
        Vertical = 1,
        ETwoPlayerSplitScreenType_MAX = 2
    };

    enum class EClusterUnionMethod : uint8_t //Enum Chaos.EClusterUnionMethod
    {
        PointImplicit = 0,
        DelaunayTriangulation = 1,
        MinimalSpanningSubsetDelaunayTriangulation = 2,
        PointImplicitAugmentedWithMinimalDelaunay = 3,
        None = 4,
        EClusterUnionMethod_MAX = 5
    };

    enum class EFieldPhysicsDefaultFields : uint8_t //Enum Chaos.EFieldPhysicsDefaultFields
    {
        Field_RadialIntMask = 0,
        Field_RadialFalloff = 1,
        Field_UniformVector = 2,
        Field_RadialVector = 3,
        Field_RadialVectorFalloff = 4,
        Field_EFieldPhysicsDefaultFields_Max = 5,
        Field_MAX = 6
    };

    enum class EFieldOutputType : uint8_t //Enum Chaos.EFieldOutputType
    {
        Field_Output_Vector = 0,
        Field_Output_Scalar = 1,
        Field_Output_Integer = 2,
        Field_Output_Max = 3
    };

    enum class EFieldIntegerType : uint8_t //Enum Chaos.EFieldIntegerType
    {
        Integer_DynamicState = 0,
        Integer_ActivateDisabled = 1,
        Integer_CollisionGroup = 2,
        Integer_PositionAnimated = 3,
        Integer_PositionStatic = 4,
        Integer_TargetMax = 5,
        Integer_MAX = 6
    };

    enum class EFieldScalarType : uint8_t //Enum Chaos.EFieldScalarType
    {
        Scalar_ExternalClusterStrain = 0,
        Scalar_Kill = 1,
        Scalar_DisableThreshold = 2,
        Scalar_SleepingThreshold = 3,
        Scalar_InternalClusterStrain = 4,
        Scalar_DynamicConstraint = 5,
        Scalar_TargetMax = 6,
        Scalar_MAX = 7
    };

    enum class EFieldVectorType : uint8_t //Enum Chaos.EFieldVectorType
    {
        Vector_LinearForce = 0,
        Vector_LinearVelocity = 1,
        Vector_AngularVelocity = 2,
        Vector_AngularTorque = 3,
        Vector_PositionTarget = 4,
        Vector_TargetMax = 5,
        Vector_MAX = 6
    };

    enum class EFieldPhysicsType : uint8_t //Enum Chaos.EFieldPhysicsType
    {
        Field_None = 0,
        Field_DynamicState = 1,
        Field_LinearForce = 2,
        Field_ExternalClusterStrain = 3,
        Field_Kill = 4,
        Field_LinearVelocity = 5,
        Field_AngularVelociy = 6,
        Field_AngularTorque = 7,
        Field_InternalClusterStrain = 8,
        Field_DisableThreshold = 9,
        Field_SleepingThreshold = 10,
        Field_PositionStatic = 11,
        Field_PositionAnimated = 12,
        Field_PositionTarget = 13,
        Field_DynamicConstraint = 14,
        Field_CollisionGroup = 15,
        Field_ActivateDisabled = 16,
        Field_PhysicsType_Max = 17
    };

    enum class EFieldFalloffType : uint8_t //Enum Chaos.EFieldFalloffType
    {
        Field_FallOff_None = 0,
        Field_Falloff_Linear = 1,
        Field_Falloff_Inverse = 2,
        Field_Falloff_Squared = 3,
        Field_Falloff_Logarithmic = 4,
        Field_Falloff_Max = 5
    };

    enum class EFieldFilterType : uint8_t //Enum Chaos.EFieldFilterType
    {
        Field_Filter_Dynamic = 0,
        Field_Filter_Kinematic = 1,
        Field_Filter_Static = 2,
        Field_Filter_All = 3,
        Field_Filter_Max = 4
    };

    enum class EFieldResolutionType : uint8_t //Enum Chaos.EFieldResolutionType
    {
        Field_Resolution_Minimal = 0,
        Field_Resolution_DisabledParents = 1,
        Field_Resolution_Maximum = 2,
        Field_Resolution_Max = 3
    };

    enum class EFieldCullingOperationType : uint8_t //Enum Chaos.EFieldCullingOperationType
    {
        Field_Culling_Inside = 0,
        Field_Culling_Outside = 1,
        Field_Culling_Operation_Max = 2,
        Field_Culling_MAX = 3
    };

    enum class EFieldOperationType : uint8_t //Enum Chaos.EFieldOperationType
    {
        Field_Multiply = 0,
        Field_Divide = 1,
        Field_Add = 2,
        Field_Substract = 3,
        Field_Operation_Max = 4
    };

    enum class EWaveFunctionType : uint8_t //Enum Chaos.EWaveFunctionType
    {
        Field_Wave_Cosine = 0,
        Field_Wave_Gaussian = 1,
        Field_Wave_Falloff = 2,
        Field_Wave_Decay = 3,
        Field_Wave_Max = 4
    };

    enum class ESetMaskConditionType : uint8_t //Enum Chaos.ESetMaskConditionType
    {
        Field_Set_Always = 0,
        Field_Set_IFF_NOT_Interior = 1,
        Field_Set_IFF_NOT_Exterior = 2,
        Field_MaskCondition_Max = 3
    };

    enum class EEmissionPatternTypeEnum : uint8_t //Enum Chaos.EEmissionPatternTypeEnum
    {
        Chaos_Emission_Pattern_First_Frame = 0,
        Chaos_Emission_Pattern_On_Demand = 1,
        Chaos_Max = 2
    };

    enum class EInitialVelocityTypeEnum : uint8_t //Enum Chaos.EInitialVelocityTypeEnum
    {
        Chaos_Initial_Velocity_User_Defined = 0,
        Chaos_Initial_Velocity_None = 1,
        Chaos_Max = 2
    };

    enum class EGeometryCollectionPhysicsTypeEnum : uint8_t //Enum Chaos.EGeometryCollectionPhysicsTypeEnum
    {
        Chaos_AngularVelocity = 0,
        Chaos_DynamicState = 1,
        Chaos_LinearVelocity = 2,
        Chaos_InitialAngularVelocity = 3,
        Chaos_InitialLinearVelocity = 4,
        Chaos_CollisionGroup = 5,
        Chaos_LinearForce = 6,
        Chaos_AngularTorque = 7,
        Chaos_Max = 8
    };

    enum class EObjectStateTypeEnum : uint8_t //Enum Chaos.EObjectStateTypeEnum
    {
        Chaos_NONE = 0,
        Chaos_Object_Sleeping = 1,
        Chaos_Object_Kinematic = 2,
        Chaos_Object_Static = 3,
        Chaos_Object_Dynamic = 4,
        Chaos_Object_UserDefined = 100,
        Chaos_Max = 101
    };

    enum class EImplicitTypeEnum : uint8_t //Enum Chaos.EImplicitTypeEnum
    {
        Chaos_Implicit_Box = 0,
        Chaos_Implicit_Sphere = 1,
        Chaos_Implicit_Capsule = 2,
        Chaos_Implicit_LevelSet = 3,
        Chaos_Implicit_None = 4,
        Chaos_Max = 5
    };

    enum class ECollisionTypeEnum : uint8_t //Enum Chaos.ECollisionTypeEnum
    {
        Chaos_Volumetric = 0,
        Chaos_Surface_Volumetric = 1,
        Chaos_Max = 2
    };

    enum class EChaosBufferMode : uint8_t //Enum Chaos.EChaosBufferMode
    {
        Double = 0,
        Triple = 1,
        Num = 2,
        Invalid = 3,
        EChaosBufferMode_MAX = 4
    };

    enum class EChaosThreadingMode : uint8_t //Enum Chaos.EChaosThreadingMode
    {
        DedicatedThread = 0,
        TaskGraph = 1,
        SingleThread = 2,
        Num = 3,
        Invalid = 4,
        EChaosThreadingMode_MAX = 5
    };

    enum class EChaosSolverTickMode : uint8_t //Enum Chaos.EChaosSolverTickMode
    {
        Fixed = 0,
        Variable = 1,
        VariableCapped = 2,
        VariableCappedWithTarget = 3,
        EChaosSolverTickMode_MAX = 4
    };

    enum class EGeometryCollectionCacheType : uint8_t //Enum Chaos.EGeometryCollectionCacheType
    {
        None = 0,
        Record = 1,
        Play = 2,
        RecordAndPlay = 3,
        EGeometryCollectionCacheType_MAX = 4
    };

    enum class EBodyCollisionResponse : uint8_t //Enum PhysicsCore.EBodyCollisionResponse
    {
        BodyCollision_Enabled = 0,
        BodyCollision_Disabled = 1,
        BodyCollision_MAX = 2
    };

    enum class EPhysicsType : uint8_t //Enum PhysicsCore.EPhysicsType
    {
        PhysType_Default = 0,
        PhysType_Kinematic = 1,
        PhysType_Simulated = 2,
        PhysType_MAX = 3
    };

    enum class ECollisionTraceFlag : uint8_t //Enum PhysicsCore.ECollisionTraceFlag
    {
        CTF_UseDefault = 0,
        CTF_UseSimpleAndComplex = 1,
        CTF_UseSimpleAsComplex = 2,
        CTF_UseComplexAsSimple = 3,
        CTF_MAX = 4
    };

    enum class ELinearConstraintMotion : uint8_t //Enum PhysicsCore.ELinearConstraintMotion
    {
        LCM_Free = 0,
        LCM_Limited = 1,
        LCM_Locked = 2,
        LCM_MAX = 3
    };

    enum class EConstraintFrame : uint8_t //Enum PhysicsCore.EConstraintFrame
    {
        Frame1 = 0,
        Frame2 = 1,
        EConstraintFrame_MAX = 2
    };

    enum class EAngularConstraintMotion : uint8_t //Enum PhysicsCore.EAngularConstraintMotion
    {
        ACM_Free = 0,
        ACM_Limited = 1,
        ACM_Locked = 2,
        ACM_MAX = 3
    };

    enum class ESleepFamily : uint8_t //Enum PhysicsCore.ESleepFamily
    {
        Normal = 0,
        Sensitive = 1,
        Custom = 2,
        ESleepFamily_MAX = 3
    };

    enum class ERadialImpulseFalloff : uint8_t //Enum PhysicsCore.ERadialImpulseFalloff
    {
        RIF_Constant = 0,
        RIF_Linear = 1,
        RIF_MAX = 2
    };

    enum class EFrictionCombineMode : uint8_t //Enum PhysicsCore.EFrictionCombineMode
    {
        Average = 0,
        Min = 1,
        Multiply = 2,
        Max = 3
    };

    enum class ERelativeTransformSpace : uint8_t //Enum Engine.ERelativeTransformSpace
    {
        RTS_World = 0,
        RTS_Actor = 1,
        RTS_Component = 2,
        RTS_ParentBoneSpace = 3,
        RTS_MAX = 4
    };

    enum class EComponentMobility : uint8_t //Enum Engine.EComponentMobility
    {
        Static = 0,
        Stationary = 1,
        Movable = 2,
        EComponentMobility_MAX = 3
    };

    enum class EDetailMode : uint8_t //Enum Engine.EDetailMode
    {
        DM_Low = 0,
        DM_Medium = 1,
        DM_High = 2,
        DM_MAX = 3
    };

    enum class EMeshTrackerVertexColorMode : uint8_t //Enum MRMesh.EMeshTrackerVertexColorMode
    {
        None = 0,
        Confidence = 1,
        Block = 2,
        EMeshTrackerVertexColorMode_MAX = 3
    };

    enum class EARTrackingState : uint8_t //Enum AugmentedReality.EARTrackingState
    {
        Unknown = 0,
        Tracking = 1,
        NotTracking = 2,
        StoppedTracking = 3,
        EARTrackingState_MAX = 4
    };

    enum class EGeoAnchorComponentDebugMode : uint8_t //Enum AugmentedReality.EGeoAnchorComponentDebugMode
    {
        None = 0,
        ShowGeoData = 1,
        EGeoAnchorComponentDebugMode_MAX = 2
    };

    enum class EPoseComponentDebugMode : uint8_t //Enum AugmentedReality.EPoseComponentDebugMode
    {
        None = 0,
        ShowSkeleton = 1,
        EPoseComponentDebugMode_MAX = 2
    };

    enum class EQRCodeComponentDebugMode : uint8_t //Enum AugmentedReality.EQRCodeComponentDebugMode
    {
        None = 0,
        ShowQRCode = 1,
        EQRCodeComponentDebugMode_MAX = 2
    };

    enum class EImageComponentDebugMode : uint8_t //Enum AugmentedReality.EImageComponentDebugMode
    {
        None = 0,
        ShowDetectedImage = 1,
        EImageComponentDebugMode_MAX = 2
    };

    enum class EARFaceTransformMixing : uint8_t //Enum AugmentedReality.EARFaceTransformMixing
    {
        ComponentOnly = 0,
        ComponentLocationTrackedRotation = 1,
        ComponentWithTracked = 2,
        TrackingOnly = 3,
        EARFaceTransformMixing_MAX = 4
    };

    enum class EFaceComponentDebugMode : uint8_t //Enum AugmentedReality.EFaceComponentDebugMode
    {
        None = 0,
        ShowEyeVectors = 1,
        ShowFaceMesh = 2,
        EFaceComponentDebugMode_MAX = 3
    };

    enum class EPlaneComponentDebugMode : uint8_t //Enum AugmentedReality.EPlaneComponentDebugMode
    {
        None = 0,
        ShowNetworkRole = 1,
        ShowClassification = 2,
        EPlaneComponentDebugMode_MAX = 3
    };

    enum class EARSessionConfigFlags : uint8_t //Enum AugmentedReality.EARSessionConfigFlags
    {
        None = 0,
        GenerateMeshData = 1,
        RenderMeshDataInWireframe = 2,
        GenerateCollisionForMeshData = 4,
        GenerateNavMeshForMeshData = 8,
        UseMeshDataForOcclusion = 16,
        EARSessionConfigFlags_MAX = 17
    };

    enum class EARServicePermissionRequestResult : uint8_t //Enum AugmentedReality.EARServicePermissionRequestResult
    {
        Granted = 0,
        Denied = 1,
        EARServicePermissionRequestResult_MAX = 2
    };

    enum class EARServiceInstallRequestResult : uint8_t //Enum AugmentedReality.EARServiceInstallRequestResult
    {
        Installed = 0,
        DeviceNotCompatible = 1,
        UserDeclinedInstallation = 2,
        FatalError = 3,
        EARServiceInstallRequestResult_MAX = 4
    };

    enum class EARServiceAvailability : uint8_t //Enum AugmentedReality.EARServiceAvailability
    {
        UnknownError = 0,
        UnknownChecking = 1,
        UnknownTimedOut = 2,
        UnsupportedDeviceNotCapable = 3,
        SupportedNotInstalled = 4,
        SupportedVersionTooOld = 5,
        SupportedInstalled = 6,
        EARServiceAvailability_MAX = 7
    };

    enum class EARGeoTrackingAccuracy : uint8_t //Enum AugmentedReality.EARGeoTrackingAccuracy
    {
        Undetermined = 0,
        Low = 1,
        Medium = 2,
        High = 3,
        EARGeoTrackingAccuracy_MAX = 4
    };

    enum class EARGeoTrackingStateReason : uint8_t //Enum AugmentedReality.EARGeoTrackingStateReason
    {
        None = 0,
        NotAvailableAtLocation = 1,
        NeedLocationPermissions = 2,
        DevicePointedTooLow = 3,
        WorldTrackingUnstable = 4,
        WaitingForLocation = 5,
        GeoDataNotLoaded = 6,
        VisualLocalizationFailed = 7,
        WaitingForAvailabilityCheck = 8,
        EARGeoTrackingStateReason_MAX = 9
    };

    enum class EARGeoTrackingState : uint8_t //Enum AugmentedReality.EARGeoTrackingState
    {
        Initializing = 0,
        Localized = 1,
        Localizing = 2,
        NotAvailable = 3,
        EARGeoTrackingState_MAX = 4
    };

    enum class EARSceneReconstruction : uint8_t //Enum AugmentedReality.EARSceneReconstruction
    {
        None = 0,
        MeshOnly = 1,
        MeshWithClassification = 2,
        EARSceneReconstruction_MAX = 3
    };

    enum class EARSessionTrackingFeature : uint8_t //Enum AugmentedReality.EARSessionTrackingFeature
    {
        None = 0,
        PoseDetection2D = 1,
        PersonSegmentation = 2,
        PersonSegmentationWithDepth = 3,
        SceneDepth = 4,
        SmoothedSceneDepth = 5,
        EARSessionTrackingFeature_MAX = 6
    };

    enum class EARFaceTrackingUpdate : uint8_t //Enum AugmentedReality.EARFaceTrackingUpdate
    {
        CurvesAndGeo = 0,
        CurvesOnly = 1,
        EARFaceTrackingUpdate_MAX = 2
    };

    enum class EAREnvironmentCaptureProbeType : uint8_t //Enum AugmentedReality.EAREnvironmentCaptureProbeType
    {
        None = 0,
        Manual = 1,
        Automatic = 2,
        EAREnvironmentCaptureProbeType_MAX = 3
    };

    enum class EARFrameSyncMode : uint8_t //Enum AugmentedReality.EARFrameSyncMode
    {
        SyncTickWithCameraImage = 0,
        SyncTickWithoutCameraImage = 1,
        EARFrameSyncMode_MAX = 2
    };

    enum class EARLightEstimationMode : uint8_t //Enum AugmentedReality.EARLightEstimationMode
    {
        None = 0,
        AmbientLightEstimate = 1,
        DirectionalLightEstimate = 2,
        EARLightEstimationMode_MAX = 3
    };

    enum class EARPlaneDetectionMode : uint8_t //Enum AugmentedReality.EARPlaneDetectionMode
    {
        None = 0,
        HorizontalPlaneDetection = 1,
        VerticalPlaneDetection = 2,
        EARPlaneDetectionMode_MAX = 3
    };

    enum class EARSessionType : uint8_t //Enum AugmentedReality.EARSessionType
    {
        None = 0,
        Orientation = 1,
        World = 2,
        Face = 3,
        Image = 4,
        ObjectScanning = 5,
        PoseTracking = 6,
        GeoTracking = 7,
        EARSessionType_MAX = 8
    };

    enum class EARWorldAlignment : uint8_t //Enum AugmentedReality.EARWorldAlignment
    {
        Gravity = 0,
        GravityAndHeading = 1,
        Camera = 2,
        EARWorldAlignment_MAX = 3
    };

    enum class EARDepthAccuracy : uint8_t //Enum AugmentedReality.EARDepthAccuracy
    {
        Unkown = 0,
        Approximate = 1,
        Accurate = 2,
        EARDepthAccuracy_MAX = 3
    };

    enum class EARDepthQuality : uint8_t //Enum AugmentedReality.EARDepthQuality
    {
        Unkown = 0,
        Low = 1,
        High = 2,
        EARDepthQuality_MAX = 3
    };

    enum class EARTextureType : uint8_t //Enum AugmentedReality.EARTextureType
    {
        Unknown = 0,
        CameraImage = 1,
        CameraDepth = 2,
        EnvironmentCapture = 3,
        PersonSegmentationImage = 4,
        PersonSegmentationDepth = 5,
        SceneDepthMap = 6,
        SceneDepthConfidenceMap = 7,
        EARTextureType_MAX = 8
    };

    enum class EAREye : uint8_t //Enum AugmentedReality.EAREye
    {
        LeftEye = 0,
        RightEye = 1,
        EAREye_MAX = 2
    };

    enum class EARFaceBlendShape : uint8_t //Enum AugmentedReality.EARFaceBlendShape
    {
        EyeBlinkLeft = 0,
        EyeLookDownLeft = 1,
        EyeLookInLeft = 2,
        EyeLookOutLeft = 3,
        EyeLookUpLeft = 4,
        EyeSquintLeft = 5,
        EyeWideLeft = 6,
        EyeBlinkRight = 7,
        EyeLookDownRight = 8,
        EyeLookInRight = 9,
        EyeLookOutRight = 10,
        EyeLookUpRight = 11,
        EyeSquintRight = 12,
        EyeWideRight = 13,
        JawForward = 14,
        JawLeft = 15,
        JawRight = 16,
        JawOpen = 17,
        MouthClose = 18,
        MouthFunnel = 19,
        MouthPucker = 20,
        MouthLeft = 21,
        MouthRight = 22,
        MouthSmileLeft = 23,
        MouthSmileRight = 24,
        MouthFrownLeft = 25,
        MouthFrownRight = 26,
        MouthDimpleLeft = 27,
        MouthDimpleRight = 28,
        MouthStretchLeft = 29,
        MouthStretchRight = 30,
        MouthRollLower = 31,
        MouthRollUpper = 32,
        MouthShrugLower = 33,
        MouthShrugUpper = 34,
        MouthPressLeft = 35,
        MouthPressRight = 36,
        MouthLowerDownLeft = 37,
        MouthLowerDownRight = 38,
        MouthUpperUpLeft = 39,
        MouthUpperUpRight = 40,
        BrowDownLeft = 41,
        BrowDownRight = 42,
        BrowInnerUp = 43,
        BrowOuterUpLeft = 44,
        BrowOuterUpRight = 45,
        CheekPuff = 46,
        CheekSquintLeft = 47,
        CheekSquintRight = 48,
        NoseSneerLeft = 49,
        NoseSneerRight = 50,
        TongueOut = 51,
        HeadYaw = 52,
        HeadPitch = 53,
        HeadRoll = 54,
        LeftEyeYaw = 55,
        LeftEyePitch = 56,
        LeftEyeRoll = 57,
        RightEyeYaw = 58,
        RightEyePitch = 59,
        RightEyeRoll = 60,
        MAX = 61
    };

    enum class EARFaceTrackingDirection : uint8_t //Enum AugmentedReality.EARFaceTrackingDirection
    {
        FaceRelative = 0,
        FaceMirrored = 1,
        EARFaceTrackingDirection_MAX = 2
    };

    enum class EARCandidateImageOrientation : uint8_t //Enum AugmentedReality.EARCandidateImageOrientation
    {
        Landscape = 0,
        Portrait = 1,
        EARCandidateImageOrientation_MAX = 2
    };

    enum class EARAltitudeSource : uint8_t //Enum AugmentedReality.EARAltitudeSource
    {
        Precise = 0,
        Coarse = 1,
        UserDefined = 2,
        Unknown = 3,
        EARAltitudeSource_MAX = 4
    };

    enum class EARJointTransformSpace : uint8_t //Enum AugmentedReality.EARJointTransformSpace
    {
        Model = 0,
        ParentJoint = 1,
        EARJointTransformSpace_MAX = 2
    };

    enum class EARSpatialMeshUsageFlags : uint8_t //Enum AugmentedReality.EARSpatialMeshUsageFlags
    {
        NotApplicable = 0,
        Visible = 1,
        Collision = 2,
        EARSpatialMeshUsageFlags_MAX = 3
    };

    enum class EARObjectClassification : uint8_t //Enum AugmentedReality.EARObjectClassification
    {
        NotApplicable = 0,
        Unknown = 1,
        Wall = 2,
        Ceiling = 3,
        Floor = 4,
        Table = 5,
        Seat = 6,
        Face = 7,
        Image = 8,
        World = 9,
        SceneObject = 10,
        HandMesh = 11,
        Door = 12,
        Window = 13,
        EARObjectClassification_MAX = 14
    };

    enum class EARPlaneOrientation : uint8_t //Enum AugmentedReality.EARPlaneOrientation
    {
        Horizontal = 0,
        Vertical = 1,
        Diagonal = 2,
        EARPlaneOrientation_MAX = 3
    };

    enum class EARWorldMappingState : uint8_t //Enum AugmentedReality.EARWorldMappingState
    {
        NotAvailable = 0,
        StillMappingNotRelocalizable = 1,
        StillMappingRelocalizable = 2,
        Mapped = 3,
        EARWorldMappingState_MAX = 4
    };

    enum class EARSessionStatus : uint8_t //Enum AugmentedReality.EARSessionStatus
    {
        NotStarted = 0,
        Running = 1,
        NotSupported = 2,
        FatalError = 3,
        PermissionNotGranted = 4,
        UnsupportedConfiguration = 5,
        Other = 6,
        EARSessionStatus_MAX = 7
    };

    enum class EARTrackingQualityReason : uint8_t //Enum AugmentedReality.EARTrackingQualityReason
    {
        None = 0,
        Initializing = 1,
        Relocalizing = 2,
        ExcessiveMotion = 3,
        InsufficientFeatures = 4,
        InsufficientLight = 5,
        BadState = 6,
        EARTrackingQualityReason_MAX = 7
    };

    enum class EARTrackingQuality : uint8_t //Enum AugmentedReality.EARTrackingQuality
    {
        NotTracking = 0,
        OrientationOnly = 1,
        OrientationAndPosition = 2,
        EARTrackingQuality_MAX = 3
    };

    enum class EARLineTraceChannels : uint8_t //Enum AugmentedReality.EARLineTraceChannels
    {
        None = 0,
        FeaturePoint = 1,
        GroundPlane = 2,
        PlaneUsingExtent = 4,
        PlaneUsingBoundaryPolygon = 8,
        EARLineTraceChannels_MAX = 9
    };

    enum class EARCaptureType : uint8_t //Enum AugmentedReality.EARCaptureType
    {
        Camera = 0,
        QRCode = 1,
        SpatialMapping = 2,
        SceneUnderstanding = 3,
        HandMesh = 4,
        EARCaptureType_MAX = 5
    };

    enum class EXRVisualType : uint8_t //Enum HeadMountedDisplay.EXRVisualType
    {
        Controller = 0,
        Hand = 1,
        EXRVisualType_MAX = 2
    };

    enum class EHandKeypoint : uint8_t //Enum HeadMountedDisplay.EHandKeypoint
    {
        Palm = 0,
        Wrist = 1,
        ThumbMetacarpal = 2,
        ThumbProximal = 3,
        ThumbDistal = 4,
        ThumbTip = 5,
        IndexMetacarpal = 6,
        IndexProximal = 7,
        IndexIntermediate = 8,
        IndexDistal = 9,
        IndexTip = 10,
        MiddleMetacarpal = 11,
        MiddleProximal = 12,
        MiddleIntermediate = 13,
        MiddleDistal = 14,
        MiddleTip = 15,
        RingMetacarpal = 16,
        RingProximal = 17,
        RingIntermediate = 18,
        RingDistal = 19,
        RingTip = 20,
        LittleMetacarpal = 21,
        LittleProximal = 22,
        LittleIntermediate = 23,
        LittleDistal = 24,
        LittleTip = 25,
        EHandKeypoint_MAX = 26
    };

    enum class EXRTrackedDeviceType : uint32_t //Enum HeadMountedDisplay.EXRTrackedDeviceType
    {
        HeadMountedDisplay = 0,
        Controller = 1,
        TrackingReference = 2,
        Other = 3,
        Invalid = 254,
        Any = 255,
        EXRTrackedDeviceType_MAX = 256
    };

    enum class ESpectatorScreenMode : uint8_t //Enum HeadMountedDisplay.ESpectatorScreenMode
    {
        Disabled = 0,
        SingleEyeLetterboxed = 1,
        Undistorted = 2,
        Distorted = 3,
        SingleEye = 4,
        SingleEyeCroppedToFill = 5,
        Texture = 6,
        TexturePlusEye = 7,
        ESpectatorScreenMode_MAX = 8
    };

    enum class EXRSystemFlags : uint8_t //Enum HeadMountedDisplay.EXRSystemFlags
    {
        NoFlags = 0,
        IsAR = 1,
        IsTablet = 2,
        IsHeadMounted = 4,
        SupportsHandTracking = 8,
        EXRSystemFlags_MAX = 9
    };

    enum class EXRDeviceConnectionResult : uint8_t //Enum HeadMountedDisplay.EXRDeviceConnectionResult
    {
        NoTrackingSystem = 0,
        FeatureNotSupported = 1,
        NoValidViewport = 2,
        MiscFailure = 3,
        Success = 4,
        EXRDeviceConnectionResult_MAX = 5
    };

    enum class EHMDWornState : uint8_t //Enum HeadMountedDisplay.EHMDWornState
    {
        Unknown = 0,
        Worn = 1,
        NotWorn = 2,
        EHMDWornState_MAX = 3
    };

    enum class EHMDTrackingOrigin : uint8_t //Enum HeadMountedDisplay.EHMDTrackingOrigin
    {
        Floor = 0,
        Eye = 1,
        Stage = 2,
        EHMDTrackingOrigin_MAX = 3
    };

    enum class EOrientPositionSelector : uint8_t //Enum HeadMountedDisplay.EOrientPositionSelector
    {
        Orientation = 0,
        Position = 1,
        OrientationAndPosition = 2,
        EOrientPositionSelector_MAX = 3
    };

    enum class ETrackingStatus : uint8_t //Enum HeadMountedDisplay.ETrackingStatus
    {
        NotTracked = 0,
        InertialOnly = 1,
        Tracked = 2,
        ETrackingStatus_MAX = 3
    };

    enum class ESpatialInputGestureAxis : uint8_t //Enum HeadMountedDisplay.ESpatialInputGestureAxis
    {
        None = 0,
        Manipulation = 1,
        Navigation = 2,
        NavigationRails = 3,
        ESpatialInputGestureAxis_MAX = 4
    };

    enum class EFoliageScaling : uint8_t //Enum Foliage.EFoliageScaling
    {
        Uniform = 0,
        Free = 1,
        LockXY = 2,
        LockXZ = 3,
        LockYZ = 4,
        EFoliageScaling_MAX = 5
    };

    enum class EVertexColorMaskChannel : uint8_t //Enum Foliage.EVertexColorMaskChannel
    {
        Red = 0,
        Green = 1,
        Blue = 2,
        Alpha = 3,
        MAX_None = 4,
        EVertexColorMaskChannel_MAX = 5
    };

    enum class FoliageVertexColorMask : uint8_t //Enum Foliage.FoliageVertexColorMask
    {
        FOLIAGEVERTEXCOLORMASK_Disabled = 0,
        FOLIAGEVERTEXCOLORMASK_Red = 1,
        FOLIAGEVERTEXCOLORMASK_Green = 2,
        FOLIAGEVERTEXCOLORMASK_Blue = 3,
        FOLIAGEVERTEXCOLORMASK_Alpha = 4,
        FOLIAGEVERTEXCOLORMASK_MAX = 5
    };

    enum class ESimulationQuery : uint8_t //Enum Foliage.ESimulationQuery
    {
        None = 0,
        CollisionOverlap = 1,
        ShadeOverlap = 2,
        AnyOverlap = 3,
        ESimulationQuery_MAX = 4
    };

    enum class ESimulationOverlap : uint8_t //Enum Foliage.ESimulationOverlap
    {
        CollisionOverlap = 0,
        ShadeOverlap = 1,
        None = 2,
        ESimulationOverlap_MAX = 3
    };

    enum class ELandscapeBlendMode : uint8_t //Enum Landscape.ELandscapeBlendMode
    {
        LSBM_AdditiveBlend = 0,
        LSBM_AlphaBlend = 1,
        LSBM_MAX = 2
    };

    enum class EWeightmapRTType : uint8_t //Enum Landscape.EWeightmapRTType
    {
        WeightmapRT_Scratch_RGBA = 0,
        WeightmapRT_Scratch1 = 1,
        WeightmapRT_Scratch2 = 2,
        WeightmapRT_Scratch3 = 3,
        WeightmapRT_Mip0 = 4,
        WeightmapRT_Mip1 = 5,
        WeightmapRT_Mip2 = 6,
        WeightmapRT_Mip3 = 7,
        WeightmapRT_Mip4 = 8,
        WeightmapRT_Mip5 = 9,
        WeightmapRT_Mip6 = 10,
        WeightmapRT_Mip7 = 11,
        WeightmapRT_Count = 12,
        WeightmapRT_MAX = 13
    };

    enum class EHeightmapRTType : uint8_t //Enum Landscape.EHeightmapRTType
    {
        HeightmapRT_CombinedAtlas = 0,
        HeightmapRT_CombinedNonAtlas = 1,
        HeightmapRT_Scratch1 = 2,
        HeightmapRT_Scratch2 = 3,
        HeightmapRT_Scratch3 = 4,
        HeightmapRT_Mip1 = 5,
        HeightmapRT_Mip2 = 6,
        HeightmapRT_Mip3 = 7,
        HeightmapRT_Mip4 = 8,
        HeightmapRT_Mip5 = 9,
        HeightmapRT_Mip6 = 10,
        HeightmapRT_Mip7 = 11,
        HeightmapRT_Count = 12,
        HeightmapRT_MAX = 13
    };

    enum class ERTDrawingType : uint8_t //Enum Landscape.ERTDrawingType
    {
        RTAtlas = 0,
        RTAtlasToNonAtlas = 1,
        RTNonAtlasToAtlas = 2,
        RTNonAtlas = 3,
        RTMips = 4,
        ERTDrawingType_MAX = 5
    };

    enum class ELandscapeSetupErrors : uint8_t //Enum Landscape.ELandscapeSetupErrors
    {
        LSE_None = 0,
        LSE_NoLandscapeInfo = 1,
        LSE_CollsionXY = 2,
        LSE_NoLayerInfo = 3,
        LSE_MAX = 4
    };

    enum class ELandscapeClearMode : uint8_t //Enum Landscape.ELandscapeClearMode
    {
        Clear_Weightmap = 1,
        Clear_Heightmap = 2,
        Clear_All = 3,
        Clear_MAX = 4
    };

    enum class ELandscapeGizmoType : uint8_t //Enum Landscape.ELandscapeGizmoType
    {
        LGT_None = 0,
        LGT_Height = 1,
        LGT_Weight = 2,
        LGT_MAX = 3
    };

    enum class EGrassScaling : uint8_t //Enum Landscape.EGrassScaling
    {
        Uniform = 0,
        Free = 1,
        LockXY = 2,
        EGrassScaling_MAX = 3
    };

    enum class ESplineModulationColorMask : uint8_t //Enum Landscape.ESplineModulationColorMask
    {
        Red = 0,
        Green = 1,
        Blue = 2,
        Alpha = 3,
        ESplineModulationColorMask_MAX = 4
    };

    enum class ELandscapeLODFalloff : uint8_t //Enum Landscape.ELandscapeLODFalloff
    {
        Linear = 0,
        SquareRoot = 1,
        ELandscapeLODFalloff_MAX = 2
    };

    enum class ELandscapeLayerDisplayMode : uint8_t //Enum Landscape.ELandscapeLayerDisplayMode
    {
        Default = 0,
        Alphabetical = 1,
        UserSpecific = 2,
        ELandscapeLayerDisplayMode_MAX = 3
    };

    enum class ELandscapeLayerPaintingRestriction : uint8_t //Enum Landscape.ELandscapeLayerPaintingRestriction
    {
        None = 0,
        UseMaxLayers = 1,
        ExistingOnly = 2,
        UseComponentWhitelist = 3,
        ELandscapeLayerPaintingRestriction_MAX = 4
    };

    enum class ELandscapeImportAlphamapType : uint8_t //Enum Landscape.ELandscapeImportAlphamapType
    {
        Additive = 0,
        Layered = 1,
        ELandscapeImportAlphamapType_MAX = 2
    };

    enum class LandscapeSplineMeshOrientation : uint8_t //Enum Landscape.LandscapeSplineMeshOrientation
    {
        LSMO_XUp = 0,
        LSMO_YUp = 1,
        LSMO_MAX = 2
    };

    enum class ELandscapeLayerBlendType : uint8_t //Enum Landscape.ELandscapeLayerBlendType
    {
        LB_WeightBlend = 0,
        LB_AlphaBlend = 1,
        LB_HeightBlend = 2,
        LB_MAX = 3
    };

    enum class ELandscapeCustomizedCoordType : uint8_t //Enum Landscape.ELandscapeCustomizedCoordType
    {
        LCCT_None = 0,
        LCCT_CustomUV0 = 1,
        LCCT_CustomUV1 = 2,
        LCCT_CustomUV2 = 3,
        LCCT_WeightMapUV = 4,
        LCCT_MAX = 5
    };

    enum class ETerrainCoordMappingType : uint8_t //Enum Landscape.ETerrainCoordMappingType
    {
        TCMT_Auto = 0,
        TCMT_XY = 1,
        TCMT_XZ = 2,
        TCMT_YZ = 3,
        TCMT_MAX = 4
    };

    enum class EFrameNumberDisplayFormats : uint8_t //Enum TimeManagement.EFrameNumberDisplayFormats
    {
        NonDropFrameTimecode = 0,
        DropFrameTimecode = 1,
        Seconds = 2,
        Frames = 3,
        MAX_Count = 4,
        EFrameNumberDisplayFormats_MAX = 5
    };

    enum class ETimedDataInputState : uint8_t //Enum TimeManagement.ETimedDataInputState
    {
        Connected = 0,
        Unresponsive = 1,
        Disconnected = 2,
        ETimedDataInputState_MAX = 3
    };

    enum class ETimedDataInputEvaluationType : uint8_t //Enum TimeManagement.ETimedDataInputEvaluationType
    {
        None = 0,
        Timecode = 1,
        PlatformTime = 2,
        ETimedDataInputEvaluationType_MAX = 3
    };

    enum class EMovieSceneKeyInterpolation : uint8_t //Enum MovieScene.EMovieSceneKeyInterpolation
    {
        Auto = 0,
        User = 1,
        Break = 2,
        Linear = 3,
        Constant = 4,
        EMovieSceneKeyInterpolation_MAX = 5
    };

    enum class EMovieSceneBlendType : uint8_t //Enum MovieScene.EMovieSceneBlendType
    {
        Invalid = 0,
        Absolute = 1,
        Additive = 2,
        Relative = 4,
        AdditiveFromBase = 8,
        EMovieSceneBlendType_MAX = 9
    };

    enum class EMovieSceneCompletionMode : uint8_t //Enum MovieScene.EMovieSceneCompletionMode
    {
        KeepState = 0,
        RestoreState = 1,
        ProjectDefault = 2,
        EMovieSceneCompletionMode_MAX = 3
    };

    enum class EMovieSceneBuiltInEasing : uint8_t //Enum MovieScene.EMovieSceneBuiltInEasing
    {
        Linear = 0,
        SinIn = 1,
        SinOut = 2,
        SinInOut = 3,
        QuadIn = 4,
        QuadOut = 5,
        QuadInOut = 6,
        CubicIn = 7,
        CubicOut = 8,
        CubicInOut = 9,
        QuartIn = 10,
        QuartOut = 11,
        QuartInOut = 12,
        QuintIn = 13,
        QuintOut = 14,
        QuintInOut = 15,
        ExpoIn = 16,
        ExpoOut = 17,
        ExpoInOut = 18,
        CircIn = 19,
        CircOut = 20,
        CircInOut = 21,
        EMovieSceneBuiltInEasing_MAX = 22
    };

    enum class EEvaluationMethod : uint8_t //Enum MovieScene.EEvaluationMethod
    {
        Static = 0,
        Swept = 1,
        EEvaluationMethod_MAX = 2
    };

    enum class EMovieSceneServerClientMask : uint8_t //Enum MovieScene.EMovieSceneServerClientMask
    {
        None = 0,
        Server = 1,
        Client = 2,
        All = 3,
        EMovieSceneServerClientMask_MAX = 4
    };

    enum class EMovieSceneSequenceFlags : uint8_t //Enum MovieScene.EMovieSceneSequenceFlags
    {
        None = 0,
        Volatile = 1,
        BlockingEvaluation = 2,
        InheritedFlags = 1,
        EMovieSceneSequenceFlags_MAX = 3
    };

    enum class EUpdateClockSource : uint8_t //Enum MovieScene.EUpdateClockSource
    {
        Tick = 0,
        Platform = 1,
        Audio = 2,
        RelativeTimecode = 3,
        Timecode = 4,
        Custom = 5,
        EUpdateClockSource_MAX = 6
    };

    enum class EMovieSceneEvaluationType : uint8_t //Enum MovieScene.EMovieSceneEvaluationType
    {
        FrameLocked = 0,
        WithSubFrames = 1,
        EMovieSceneEvaluationType_MAX = 2
    };

    enum class EMovieScenePlayerStatus : uint8_t //Enum MovieScene.EMovieScenePlayerStatus
    {
        Stopped = 0,
        Playing = 1,
        Scrubbing = 2,
        Jumping = 3,
        Stepping = 4,
        Paused = 5,
        MAX = 6
    };

    enum class EMovieSceneObjectBindingSpace : uint8_t //Enum MovieScene.EMovieSceneObjectBindingSpace
    {
        Local = 0,
        Root = 1,
        Unused = 2,
        EMovieSceneObjectBindingSpace_MAX = 3
    };

    enum class ESectionEvaluationFlags : uint8_t //Enum MovieScene.ESectionEvaluationFlags
    {
        None = 0,
        PreRoll = 1,
        PostRoll = 2,
        ESectionEvaluationFlags_MAX = 3
    };

    enum class EMovieScenePositionType : uint8_t //Enum MovieScene.EMovieScenePositionType
    {
        Frame = 0,
        Time = 1,
        MarkedFrame = 2,
        EMovieScenePositionType_MAX = 3
    };

    enum class EUpdatePositionMethod : uint8_t //Enum MovieScene.EUpdatePositionMethod
    {
        Play = 0,
        Jump = 1,
        Scrub = 2,
        EUpdatePositionMethod_MAX = 3
    };

    enum class ESpawnOwnership : uint8_t //Enum MovieScene.ESpawnOwnership
    {
        InnerSequence = 0,
        MasterSequence = 1,
        External = 2,
        ESpawnOwnership_MAX = 3
    };

    enum class ETransformConstraintType : uint8_t //Enum AnimationCore.ETransformConstraintType
    {
        Translation = 0,
        Rotation = 1,
        Scale = 2,
        Parent = 3,
        ETransformConstraintType_MAX = 4
    };

    enum class EConstraintType : uint8_t //Enum AnimationCore.EConstraintType
    {
        Transform = 0,
        Aim = 1,
        MAX = 2
    };

    enum class ESphericalLimitType : uint8_t //Enum AnimGraphRuntime.ESphericalLimitType
    {
        Inner = 0,
        Outer = 1,
        ESphericalLimitType_MAX = 2
    };

    enum class AnimPhysSimSpaceType : uint8_t //Enum AnimGraphRuntime.AnimPhysSimSpaceType
    {
        Component = 0,
        Actor = 1,
        World = 2,
        RootRelative = 3,
        BoneRelative = 4,
        AnimPhysSimSpaceType_MAX = 5
    };

    enum class AnimPhysLinearConstraintType : uint8_t //Enum AnimGraphRuntime.AnimPhysLinearConstraintType
    {
        Free = 0,
        Limited = 1,
        AnimPhysLinearConstraintType_MAX = 2
    };

    enum class AnimPhysAngularConstraintType : uint8_t //Enum AnimGraphRuntime.AnimPhysAngularConstraintType
    {
        Angular = 0,
        Cone = 1,
        AnimPhysAngularConstraintType_MAX = 2
    };

    enum class EBlendListTransitionType : uint8_t //Enum AnimGraphRuntime.EBlendListTransitionType
    {
        StandardBlend = 0,
        Inertialization = 1,
        EBlendListTransitionType_MAX = 2
    };

    enum class EDrivenDestinationMode : uint8_t //Enum AnimGraphRuntime.EDrivenDestinationMode
    {
        Bone = 0,
        MorphTarget = 1,
        MaterialParameter = 2,
        EDrivenDestinationMode_MAX = 3
    };

    enum class EDrivenBoneModificationMode : uint8_t //Enum AnimGraphRuntime.EDrivenBoneModificationMode
    {
        AddToInput = 0,
        ReplaceComponent = 1,
        AddToRefPose = 2,
        EDrivenBoneModificationMode_MAX = 3
    };

    enum class EConstraintOffsetOption : uint8_t //Enum AnimGraphRuntime.EConstraintOffsetOption
    {
        None = 0,
        Offset_RefPose = 1,
        EConstraintOffsetOption_MAX = 2
    };

    enum class CopyBoneDeltaMode : uint8_t //Enum AnimGraphRuntime.CopyBoneDeltaMode
    {
        Accumulate = 0,
        Copy = 1,
        CopyBoneDeltaMode_MAX = 2
    };

    enum class EInterpolationBlend : uint8_t //Enum AnimGraphRuntime.EInterpolationBlend
    {
        Linear = 0,
        Cubic = 1,
        Sinusoidal = 2,
        EaseInOutExponent2 = 3,
        EaseInOutExponent3 = 4,
        EaseInOutExponent4 = 5,
        EaseInOutExponent5 = 6,
        MAX = 7
    };

    enum class EBoneModificationMode : uint8_t //Enum AnimGraphRuntime.EBoneModificationMode
    {
        BMM_Ignore = 0,
        BMM_Replace = 1,
        BMM_Additive = 2,
        BMM_MAX = 3
    };

    enum class EModifyCurveApplyMode : uint8_t //Enum AnimGraphRuntime.EModifyCurveApplyMode
    {
        Add = 0,
        Scale = 1,
        Blend = 2,
        WeightedMovingAverage = 3,
        RemapCurve = 4,
        EModifyCurveApplyMode_MAX = 5
    };

    enum class EPoseDriverOutput : uint8_t //Enum AnimGraphRuntime.EPoseDriverOutput
    {
        DrivePoses = 0,
        DriveCurves = 1,
        EPoseDriverOutput_MAX = 2
    };

    enum class EPoseDriverSource : uint8_t //Enum AnimGraphRuntime.EPoseDriverSource
    {
        Rotation = 0,
        Translation = 1,
        EPoseDriverSource_MAX = 2
    };

    enum class EPoseDriverType : uint8_t //Enum AnimGraphRuntime.EPoseDriverType
    {
        SwingAndTwist = 0,
        SwingOnly = 1,
        Translation = 2,
        EPoseDriverType_MAX = 3
    };

    enum class ESnapshotSourceMode : uint8_t //Enum AnimGraphRuntime.ESnapshotSourceMode
    {
        NamedSnapshot = 0,
        SnapshotPin = 1,
        ESnapshotSourceMode_MAX = 2
    };

    enum class ERefPoseType : uint8_t //Enum AnimGraphRuntime.ERefPoseType
    {
        EIT_LocalSpace = 0,
        EIT_Additive = 1,
        EIT_MAX = 2
    };

    enum class ESimulationSpace : uint8_t //Enum AnimGraphRuntime.ESimulationSpace
    {
        ComponentSpace = 0,
        WorldSpace = 1,
        BaseBoneSpace = 2,
        ESimulationSpace_MAX = 3
    };

    enum class EScaleChainInitialLength : uint8_t //Enum AnimGraphRuntime.EScaleChainInitialLength
    {
        FixedDefaultLengthValue = 0,
        Distance = 1,
        ChainLength = 2,
        EScaleChainInitialLength_MAX = 3
    };

    enum class ESequenceEvalReinit : uint8_t //Enum AnimGraphRuntime.ESequenceEvalReinit
    {
        NoReset = 0,
        StartPosition = 1,
        ExplicitTime = 2,
        NormalizedTime = 3,
        ESequenceEvalReinit_MAX = 4
    };

    enum class ESplineBoneAxis : uint8_t //Enum AnimGraphRuntime.ESplineBoneAxis
    {
        None = 0,
        X = 1,
        Y = 2,
        Z = 3,
        ESplineBoneAxis_MAX = 4
    };

    enum class ERotationComponent : uint8_t //Enum AnimGraphRuntime.ERotationComponent
    {
        EulerX = 0,
        EulerY = 1,
        EulerZ = 2,
        QuaternionAngle = 3,
        SwingAngle = 4,
        TwistAngle = 5,
        ERotationComponent_MAX = 6
    };

    enum class EEasingFuncType : uint8_t //Enum AnimGraphRuntime.EEasingFuncType
    {
        Linear = 0,
        Sinusoidal = 1,
        Cubic = 2,
        QuadraticInOut = 3,
        CubicInOut = 4,
        HermiteCubic = 5,
        QuarticInOut = 6,
        QuinticInOut = 7,
        CircularIn = 8,
        CircularOut = 9,
        CircularInOut = 10,
        ExpIn = 11,
        ExpOut = 12,
        ExpInOut = 13,
        CustomCurve = 14,
        EEasingFuncType_MAX = 15
    };

    enum class ERBFNormalizeMethod : uint8_t //Enum AnimGraphRuntime.ERBFNormalizeMethod
    {
        OnlyNormalizeAboveOne = 0,
        AlwaysNormalize = 1,
        NormalizeWithinMedian = 2,
        NoNormalization = 3,
        ERBFNormalizeMethod_MAX = 4
    };

    enum class ERBFDistanceMethod : uint8_t //Enum AnimGraphRuntime.ERBFDistanceMethod
    {
        Euclidean = 0,
        Quaternion = 1,
        SwingAngle = 2,
        TwistAngle = 3,
        DefaultMethod = 4,
        ERBFDistanceMethod_MAX = 5
    };

    enum class ERBFFunctionType : uint8_t //Enum AnimGraphRuntime.ERBFFunctionType
    {
        Gaussian = 0,
        Exponential = 1,
        Linear = 2,
        Cubic = 3,
        Quintic = 4,
        DefaultFunction = 5,
        ERBFFunctionType_MAX = 6
    };

    enum class ERBFSolverType : uint8_t //Enum AnimGraphRuntime.ERBFSolverType
    {
        Additive = 0,
        Interpolative = 1,
        ERBFSolverType_MAX = 2
    };

    enum class MovieScene3DPathSection_Axis : uint8_t //Enum MovieSceneTracks.MovieScene3DPathSection_Axis
    {
        X = 0,
        Y = 1,
        Z = 2,
        NEG_X = 3,
        NEG_Y = 4,
        NEG_Z = 5,
        MovieScene3DPathSection_MAX = 6
    };

    enum class EFireEventsAtPosition : uint8_t //Enum MovieSceneTracks.EFireEventsAtPosition
    {
        AtStartOfEvaluation = 0,
        AtEndOfEvaluation = 1,
        AfterSpawn = 2,
        EFireEventsAtPosition_MAX = 3
    };

    enum class ELevelVisibility : uint8_t //Enum MovieSceneTracks.ELevelVisibility
    {
        Visible = 0,
        Hidden = 1,
        ELevelVisibility_MAX = 2
    };

    enum class EParticleKey : uint8_t //Enum MovieSceneTracks.EParticleKey
    {
        Activate = 0,
        Deactivate = 1,
        Trigger = 2,
        EParticleKey_MAX = 3
    };

    enum class EDragPivot : uint8_t //Enum UMG.EDragPivot
    {
        MouseDown = 0,
        TopLeft = 1,
        TopCenter = 2,
        TopRight = 3,
        CenterLeft = 4,
        CenterCenter = 5,
        CenterRight = 6,
        BottomLeft = 7,
        BottomCenter = 8,
        BottomRight = 9,
        EDragPivot_MAX = 10
    };

    enum class EDynamicBoxType : uint8_t //Enum UMG.EDynamicBoxType
    {
        Horizontal = 0,
        Vertical = 1,
        Wrap = 2,
        VerticalWrap = 3,
        Radial = 4,
        Overlay = 5,
        EDynamicBoxType_MAX = 6
    };

    enum class ESlateSizeRule : uint8_t //Enum UMG.ESlateSizeRule
    {
        Automatic = 0,
        Fill = 1,
        ESlateSizeRule_MAX = 2
    };

    enum class EWidgetDesignFlags : uint8_t //Enum UMG.EWidgetDesignFlags
    {
        None = 0,
        Designing = 1,
        ShowOutline = 2,
        ExecutePreConstruct = 4,
        EWidgetDesignFlags_MAX = 5
    };

    enum class EBindingKind : uint8_t //Enum UMG.EBindingKind
    {
        Function = 0,
        Property = 1,
        EBindingKind_MAX = 2
    };

    enum class ETickMode : uint8_t //Enum UMG.ETickMode
    {
        Disabled = 0,
        Enabled = 1,
        Automatic = 2,
        ETickMode_MAX = 3
    };

    enum class EWindowVisibility : uint8_t //Enum UMG.EWindowVisibility
    {
        Visible = 0,
        SelfHitTestInvisible = 1,
        EWindowVisibility_MAX = 2
    };

    enum class EWidgetGeometryMode : uint8_t //Enum UMG.EWidgetGeometryMode
    {
        Plane = 0,
        Cylinder = 1,
        EWidgetGeometryMode_MAX = 2
    };

    enum class EWidgetBlendMode : uint8_t //Enum UMG.EWidgetBlendMode
    {
        Opaque = 0,
        Masked = 1,
        Transparent = 2,
        EWidgetBlendMode_MAX = 3
    };

    enum class EWidgetTimingPolicy : uint8_t //Enum UMG.EWidgetTimingPolicy
    {
        RealTime = 0,
        GameTime = 1,
        EWidgetTimingPolicy_MAX = 2
    };

    enum class EWidgetSpace : uint8_t //Enum UMG.EWidgetSpace
    {
        World = 0,
        Screen = 1,
        EWidgetSpace_MAX = 2
    };

    enum class EWidgetInteractionSource : uint8_t //Enum UMG.EWidgetInteractionSource
    {
        World = 0,
        Mouse = 1,
        CenterScreen = 2,
        Custom = 3,
        EWidgetInteractionSource_MAX = 4
    };

    enum class ECameraFocusMethod : uint8_t //Enum CinematicCamera.ECameraFocusMethod
    {
        DoNotOverride = 0,
        Manual = 1,
        Tracking = 2,
        Disable = 3,
        MAX = 4
    };

    enum class ESoundwaveSampleRateSettings : uint8_t //Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
    {
        Max = 0,
        High = 1,
        Medium = 2,
        Low = 3,
        Min = 4,
        MatchDevice = 5
    };

    enum class EMusicalNoteName : uint8_t //Enum AudioMixer.EMusicalNoteName
    {
        C = 0,
        Db = 1,
        D = 2,
        Eb = 3,
        E = 4,
        F = 5,
        Gb = 6,
        G = 7,
        Ab = 8,
        A = 9,
        Bb = 10,
        B = 11,
        EMusicalNoteName_MAX = 12
    };

    enum class ESubmixEffectDynamicsKeySource : uint8_t //Enum AudioMixer.ESubmixEffectDynamicsKeySource
    {
        Default = 0,
        AudioBus = 1,
        Submix = 2,
        Count = 3,
        ESubmixEffectDynamicsKeySource_MAX = 4
    };

    enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t //Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
    {
        Disabled = 0,
        Average = 1,
        Peak = 2,
        Count = 3,
        ESubmixEffectDynamicsChannelLinkMode_MAX = 4
    };

    enum class ESubmixEffectDynamicsPeakMode : uint8_t //Enum AudioMixer.ESubmixEffectDynamicsPeakMode
    {
        MeanSquared = 0,
        RootMeanSquared = 1,
        Peak = 2,
        Count = 3,
        ESubmixEffectDynamicsPeakMode_MAX = 4
    };

    enum class ESubmixEffectDynamicsProcessorType : uint8_t //Enum AudioMixer.ESubmixEffectDynamicsProcessorType
    {
        Compressor = 0,
        Limiter = 1,
        Expander = 2,
        Gate = 3,
        Count = 4,
        ESubmixEffectDynamicsProcessorType_MAX = 5
    };

    enum class EQuarztClockManagerType : uint8_t //Enum AudioMixer.EQuarztClockManagerType
    {
        AudioEngine = 0,
        QuartzSubsystem = 1,
        Count = 2,
        EQuarztClockManagerType_MAX = 3
    };

    enum class EGameplayTagQueryExprType : uint8_t //Enum GameplayTags.EGameplayTagQueryExprType
    {
        Undefined = 0,
        AnyTagsMatch = 1,
        AllTagsMatch = 2,
        NoTagsMatch = 3,
        AnyExprMatch = 4,
        AllExprMatch = 5,
        NoExprMatch = 6,
        EGameplayTagQueryExprType_MAX = 7
    };

    enum class EGameplayContainerMatchType : uint8_t //Enum GameplayTags.EGameplayContainerMatchType
    {
        Any = 0,
        All = 1,
        EGameplayContainerMatchType_MAX = 2
    };

    enum class EGameplayTagMatchType : uint8_t //Enum GameplayTags.EGameplayTagMatchType
    {
        Explicit = 0,
        IncludeParentTags = 1,
        EGameplayTagMatchType_MAX = 2
    };

    enum class EGameplayTagSelectionType : uint8_t //Enum GameplayTags.EGameplayTagSelectionType
    {
        None = 0,
        NonRestrictedOnly = 1,
        RestrictedOnly = 2,
        All = 3,
        EGameplayTagSelectionType_MAX = 4
    };

    enum class EGameplayTagSourceType : uint8_t //Enum GameplayTags.EGameplayTagSourceType
    {
        Native = 0,
        DefaultTagList = 1,
        TagList = 2,
        RestrictedTagList = 3,
        DataTable = 4,
        Invalid = 5,
        EGameplayTagSourceType_MAX = 6
    };

    enum class EComputeNTBsOptions : uint8_t //Enum MeshDescription.EComputeNTBsOptions
    {
        None = 0,
        Normals = 1,
        Tangents = 2,
        WeightedNTBs = 4,
        EComputeNTBsOptions_MAX = 5
    };

    enum class EPropertyAccessCopyBatch : uint8_t //Enum PropertyAccess.EPropertyAccessCopyBatch
    {
        InternalUnbatched = 0,
        ExternalUnbatched = 1,
        InternalBatched = 2,
        ExternalBatched = 3,
        Count = 4,
        EPropertyAccessCopyBatch_MAX = 5
    };

    enum class EPropertyAccessCopyType : uint8_t //Enum PropertyAccess.EPropertyAccessCopyType
    {
        None = 0,
        Plain = 1,
        Complex = 2,
        Bool = 3,
        Struct = 4,
        Object = 5,
        Name = 6,
        Array = 7,
        PromoteBoolToByte = 8,
        PromoteBoolToInt32 = 9,
        PromoteBoolToInt64 = 10,
        PromoteBoolToFloat = 11,
        PromoteByteToInt32 = 12,
        PromoteByteToInt64 = 13,
        PromoteByteToFloat = 14,
        PromoteInt32ToInt64 = 15,
        PromoteInt32ToFloat = 16,
        EPropertyAccessCopyType_MAX = 17
    };

    enum class EPropertyAccessObjectType : uint8_t //Enum PropertyAccess.EPropertyAccessObjectType
    {
        None = 0,
        Object = 1,
        WeakObject = 2,
        SoftObject = 3,
        EPropertyAccessObjectType_MAX = 4
    };

    enum class EPropertyAccessIndirectionType : uint8_t //Enum PropertyAccess.EPropertyAccessIndirectionType
    {
        Offset = 0,
        Object = 1,
        Array = 2,
        ScriptFunction = 3,
        NativeFunction = 4,
        EPropertyAccessIndirectionType_MAX = 5
    };

    enum class EMediaPlayerOptionBooleanOverride : uint8_t //Enum MediaUtils.EMediaPlayerOptionBooleanOverride
    {
        UseMediaPlayerSetting = 0,
        Enabled = 1,
        Disabled = 2,
        EMediaPlayerOptionBooleanOverride_MAX = 3
    };

    enum class EMediaWebcamCaptureDeviceFilter : uint8_t //Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
    {
        None = 0,
        DepthSensor = 1,
        Front = 2,
        Rear = 4,
        Unknown = 8,
        EMediaWebcamCaptureDeviceFilter_MAX = 9
    };

    enum class EMediaVideoCaptureDeviceFilter : uint8_t //Enum MediaAssets.EMediaVideoCaptureDeviceFilter
    {
        None = 0,
        Card = 1,
        Software = 2,
        Unknown = 4,
        Webcam = 8,
        EMediaVideoCaptureDeviceFilter_MAX = 9
    };

    enum class EMediaAudioCaptureDeviceFilter : uint8_t //Enum MediaAssets.EMediaAudioCaptureDeviceFilter
    {
        None = 0,
        Card = 1,
        Microphone = 2,
        Software = 4,
        Unknown = 8,
        EMediaAudioCaptureDeviceFilter_MAX = 9
    };

    enum class EMediaPlayerTrack : uint8_t //Enum MediaAssets.EMediaPlayerTrack
    {
        Audio = 0,
        Caption = 1,
        Metadata = 2,
        Script = 3,
        Subtitle = 4,
        Text = 5,
        Video = 6,
        EMediaPlayerTrack_MAX = 7
    };

    enum class EMediaSoundComponentFFTSize : uint8_t //Enum MediaAssets.EMediaSoundComponentFFTSize
    {
        Min_65 = 0,
        Small_257 = 1,
        Medium_513 = 2,
        Large_1025 = 3,
        EMediaSoundComponentFFTSize_MAX = 4
    };

    enum class EMediaSoundChannels : uint8_t //Enum MediaAssets.EMediaSoundChannels
    {
        Mono = 0,
        Stereo = 1,
        Surround = 2,
        EMediaSoundChannels_MAX = 3
    };

    enum class MediaTextureOrientation : uint8_t //Enum MediaAssets.MediaTextureOrientation
    {
        MTORI_Original = 0,
        MTORI_CW90 = 1,
        MTORI_CW180 = 2,
        MTORI_CW270 = 3,
        MTORI_MAX = 4
    };

    enum class MediaTextureOutputFormat : uint8_t //Enum MediaAssets.MediaTextureOutputFormat
    {
        MTOF_Default = 0,
        MTOF_SRGB_LINOUT = 1,
        MTOF_MAX = 2
    };

    enum class EHDRCaptureGamut : uint8_t //Enum MovieSceneCapture.EHDRCaptureGamut
    {
        HCGM_Rec709 = 0,
        HCGM_P3DCI = 1,
        HCGM_Rec2020 = 2,
        HCGM_ACES = 3,
        HCGM_ACEScg = 4,
        HCGM_Linear = 5,
        HCGM_MAX = 6
    };

    enum class EMovieSceneCaptureProtocolState : uint8_t //Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
    {
        Idle = 0,
        Initialized = 1,
        Capturing = 2,
        Finalizing = 3,
        EMovieSceneCaptureProtocolState_MAX = 4
    };

    enum class EMoviePlaybackType : uint8_t //Enum MoviePlayer.EMoviePlaybackType
    {
        MT_Normal = 0,
        MT_Looped = 1,
        MT_LoadingLoop = 2,
        MT_MAX = 3
    };

    enum class EAlphaBlendOption : uint8_t //Enum Engine.EAlphaBlendOption
    {
        Linear = 0,
        Cubic = 1,
        HermiteCubic = 2,
        Sinusoidal = 3,
        QuadraticInOut = 4,
        CubicInOut = 5,
        QuarticInOut = 6,
        QuinticInOut = 7,
        CircularIn = 8,
        CircularOut = 9,
        CircularInOut = 10,
        ExpIn = 11,
        ExpOut = 12,
        ExpInOut = 13,
        Custom = 14,
        EAlphaBlendOption_MAX = 15
    };

    enum class EAnimSyncGroupScope : uint8_t //Enum Engine.EAnimSyncGroupScope
    {
        Local = 0,
        Component = 1,
        EAnimSyncGroupScope_MAX = 2
    };

    enum class EAnimGroupRole : uint8_t //Enum Engine.EAnimGroupRole
    {
        CanBeLeader = 0,
        AlwaysFollower = 1,
        AlwaysLeader = 2,
        TransitionLeader = 3,
        TransitionFollower = 4,
        EAnimGroupRole_MAX = 5
    };

    enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t //Enum Engine.EPreviewAnimationBlueprintApplicationMethod
    {
        LinkedLayers = 0,
        LinkedAnimGraph = 1,
        EPreviewAnimationBlueprintApplicationMethod_MAX = 2
    };

    enum class AnimationKeyFormat : uint8_t //Enum Engine.AnimationKeyFormat
    {
        AKF_ConstantKeyLerp = 0,
        AKF_VariableKeyLerp = 1,
        AKF_PerTrackCompression = 2,
        AKF_MAX = 3
    };

    enum class ERawCurveTrackTypes : uint8_t //Enum Engine.ERawCurveTrackTypes
    {
        RCT_Float = 0,
        RCT_Vector = 1,
        RCT_Transform = 2,
        RCT_MAX = 3
    };

    enum class EAnimAssetCurveFlags : uint8_t //Enum Engine.EAnimAssetCurveFlags
    {
        AACF_NONE = 0,
        AACF_DriveMorphTarget_DEPRECATED = 1,
        AACF_DriveAttribute_DEPRECATED = 2,
        AACF_Editable = 4,
        AACF_DriveMaterial_DEPRECATED = 8,
        AACF_Metadata = 16,
        AACF_DriveTrack = 32,
        AACF_Disabled = 64,
        AACF_MAX = 65
    };

    enum class AnimationCompressionFormat : uint8_t //Enum Engine.AnimationCompressionFormat
    {
        ACF_None = 0,
        ACF_Float96NoW = 1,
        ACF_Fixed48NoW = 2,
        ACF_IntervalFixed32NoW = 3,
        ACF_Fixed32NoW = 4,
        ACF_Float32NoW = 5,
        ACF_Identity = 6,
        ACF_MAX = 7
    };

    enum class EAdditiveBasePoseType : uint8_t //Enum Engine.EAdditiveBasePoseType
    {
        ABPT_None = 0,
        ABPT_RefPose = 1,
        ABPT_AnimScaled = 2,
        ABPT_AnimFrame = 3,
        ABPT_MAX = 4
    };

    enum class ERootMotionMode : uint8_t //Enum Engine.ERootMotionMode
    {
        NoRootMotionExtraction = 0,
        IgnoreRootMotion = 1,
        RootMotionFromEverything = 2,
        RootMotionFromMontagesOnly = 3,
        ERootMotionMode_MAX = 4
    };

    enum class ERootMotionRootLock : uint8_t //Enum Engine.ERootMotionRootLock
    {
        RefPose = 0,
        AnimFirstFrame = 1,
        Zero = 2,
        ERootMotionRootLock_MAX = 3
    };

    enum class EMontagePlayReturnType : uint8_t //Enum Engine.EMontagePlayReturnType
    {
        MontageLength = 0,
        Duration = 1,
        EMontagePlayReturnType_MAX = 2
    };

    enum class EDrawDebugItemType : uint8_t //Enum Engine.EDrawDebugItemType
    {
        DirectionalArrow = 0,
        Sphere = 1,
        Line = 2,
        OnScreenMessage = 3,
        CoordinateSystem = 4,
        EDrawDebugItemType_MAX = 5
    };

    enum class EAnimLinkMethod : uint8_t //Enum Engine.EAnimLinkMethod
    {
        Absolute = 0,
        Relative = 1,
        Proportional = 2,
        EAnimLinkMethod_MAX = 3
    };

    enum class EMontageSubStepResult : uint8_t //Enum Engine.EMontageSubStepResult
    {
        Moved = 0,
        NotMoved = 1,
        InvalidSection = 2,
        InvalidMontage = 3,
        EMontageSubStepResult_MAX = 4
    };

    enum class EAnimNotifyEventType : uint8_t //Enum Engine.EAnimNotifyEventType
    {
        Begin = 0,
        End = 1,
        EAnimNotifyEventType_MAX = 2
    };

    enum class EInertializationSpace : uint8_t //Enum Engine.EInertializationSpace
    {
        Default = 0,
        WorldSpace = 1,
        WorldRotation = 2,
        EInertializationSpace_MAX = 3
    };

    enum class EInertializationBoneState : uint8_t //Enum Engine.EInertializationBoneState
    {
        Invalid = 0,
        Valid = 1,
        Excluded = 2,
        EInertializationBoneState_MAX = 3
    };

    enum class EInertializationState : uint8_t //Enum Engine.EInertializationState
    {
        Inactive = 0,
        Pending = 1,
        Active = 2,
        EInertializationState_MAX = 3
    };

    enum class EEvaluatorMode : uint8_t //Enum Engine.EEvaluatorMode
    {
        EM_Standard = 0,
        EM_Freeze = 1,
        EM_DelayedFreeze = 2,
        EM_MAX = 3
    };

    enum class EEvaluatorDataSource : uint8_t //Enum Engine.EEvaluatorDataSource
    {
        EDS_SourcePose = 0,
        EDS_DestinationPose = 1,
        EDS_MAX = 2
    };

    enum class EPostCopyOperation : uint8_t //Enum Engine.EPostCopyOperation
    {
        None = 0,
        LogicalNegateBool = 1,
        EPostCopyOperation_MAX = 2
    };

    enum class EPinHidingMode : uint8_t //Enum Engine.EPinHidingMode
    {
        NeverAsPin = 0,
        PinHiddenByDefault = 1,
        PinShownByDefault = 2,
        AlwaysAsPin = 3,
        EPinHidingMode_MAX = 4
    };

    enum class AnimPhysCollisionType : uint8_t //Enum Engine.AnimPhysCollisionType
    {
        CoM = 0,
        CustomSphere = 1,
        InnerSphere = 2,
        OuterSphere = 3,
        AnimPhysCollisionType_MAX = 4
    };

    enum class AnimPhysTwistAxis : uint8_t //Enum Engine.AnimPhysTwistAxis
    {
        AxisX = 0,
        AxisY = 1,
        AxisZ = 2,
        AnimPhysTwistAxis_MAX = 3
    };

    enum class ETypeAdvanceAnim : uint8_t //Enum Engine.ETypeAdvanceAnim
    {
        ETAA_Default = 0,
        ETAA_Finished = 1,
        ETAA_Looped = 2,
        ETAA_MAX = 3
    };

    enum class ETransitionLogicType : uint8_t //Enum Engine.ETransitionLogicType
    {
        TLT_StandardBlend = 0,
        TLT_Inertialization = 1,
        TLT_Custom = 2,
        TLT_MAX = 3
    };

    enum class ETransitionBlendMode : uint8_t //Enum Engine.ETransitionBlendMode
    {
        TBM_Linear = 0,
        TBM_Cubic = 1,
        TBM_MAX = 2
    };

    enum class EComponentType : uint8_t //Enum Engine.EComponentType
    {
        None = 0,
        TranslationX = 1,
        TranslationY = 2,
        TranslationZ = 3,
        RotationX = 4,
        RotationY = 5,
        RotationZ = 6,
        Scale = 7,
        ScaleX = 8,
        ScaleY = 9,
        ScaleZ = 10,
        EComponentType_MAX = 11
    };

    enum class EAxisOption : uint8_t //Enum Engine.EAxisOption
    {
        X = 0,
        Y = 1,
        Z = 2,
        X_Neg = 3,
        Y_Neg = 4,
        Z_Neg = 5,
        Custom = 6,
        EAxisOption_MAX = 7
    };

    enum class EAnimInterpolationType : uint8_t //Enum Engine.EAnimInterpolationType
    {
        Linear = 0,
        Step = 1,
        EAnimInterpolationType_MAX = 2
    };

    enum class ECurveBlendOption : uint8_t //Enum Engine.ECurveBlendOption
    {
        Override = 0,
        DoNotOverride = 1,
        NormalizeByWeight = 2,
        BlendByWeight = 3,
        UseBasePose = 4,
        UseMaxValue = 5,
        UseMinValue = 6,
        ECurveBlendOption_MAX = 7
    };

    enum class EAdditiveAnimationType : uint8_t //Enum Engine.EAdditiveAnimationType
    {
        AAT_None = 0,
        AAT_LocalSpaceBase = 1,
        AAT_RotationOffsetMeshSpace = 2,
        AAT_MAX = 3
    };

    enum class ENotifyFilterType : uint8_t //Enum Engine.ENotifyFilterType
    {
        NoFiltering = 0,
        LOD = 1,
        ENotifyFilterType_MAX = 2
    };

    enum class EMontageNotifyTickType : uint8_t //Enum Engine.EMontageNotifyTickType
    {
        Queued = 0,
        BranchingPoint = 1,
        EMontageNotifyTickType_MAX = 2
    };

    enum class EBoneRotationSource : uint8_t //Enum Engine.EBoneRotationSource
    {
        BRS_KeepComponentSpaceRotation = 0,
        BRS_KeepLocalSpaceRotation = 1,
        BRS_CopyFromTarget = 2,
        BRS_MAX = 3
    };

    enum class EBoneControlSpace : uint8_t //Enum Engine.EBoneControlSpace
    {
        BCS_WorldSpace = 0,
        BCS_ComponentSpace = 1,
        BCS_ParentBoneSpace = 2,
        BCS_BoneSpace = 3,
        BCS_MAX = 4
    };

    enum class EBoneAxis : uint8_t //Enum Engine.EBoneAxis
    {
        BA_X = 0,
        BA_Y = 1,
        BA_Z = 2,
        BA_MAX = 3
    };

    enum class EPrimaryAssetCookRule : uint8_t //Enum Engine.EPrimaryAssetCookRule
    {
        Unknown = 0,
        NeverCook = 1,
        DevelopmentCook = 2,
        DevelopmentAlwaysCook = 3,
        AlwaysCook = 4,
        EPrimaryAssetCookRule_MAX = 5
    };

    enum class ENaturalSoundFalloffMode : uint8_t //Enum Engine.ENaturalSoundFalloffMode
    {
        Continues = 0,
        Silent = 1,
        Hold = 2,
        ENaturalSoundFalloffMode_MAX = 3
    };

    enum class EAttenuationShape : uint8_t //Enum Engine.EAttenuationShape
    {
        Sphere = 0,
        Capsule = 1,
        Box = 2,
        Cone = 3,
        EAttenuationShape_MAX = 4
    };

    enum class EAttenuationDistanceModel : uint8_t //Enum Engine.EAttenuationDistanceModel
    {
        Linear = 0,
        Logarithmic = 1,
        Inverse = 2,
        LogReverse = 3,
        NaturalSound = 4,
        Custom = 5,
        EAttenuationDistanceModel_MAX = 6
    };

    enum class EAudioBusChannels : uint8_t //Enum Engine.EAudioBusChannels
    {
        Mono = 0,
        Stereo = 1,
        EAudioBusChannels_MAX = 2
    };

    enum class EAudioFaderCurve : uint8_t //Enum Engine.EAudioFaderCurve
    {
        Linear = 0,
        Logarithmic = 1,
        SCurve = 2,
        Sin = 3,
        Count = 4,
        EAudioFaderCurve_MAX = 5
    };

    enum class EAudioOutputTarget : uint8_t //Enum Engine.EAudioOutputTarget
    {
        Speaker = 0,
        Controller = 1,
        ControllerFallbackToSpeaker = 2,
        EAudioOutputTarget_MAX = 3
    };

    enum class EMonoChannelUpmixMethod : uint8_t //Enum Engine.EMonoChannelUpmixMethod
    {
        Linear = 0,
        EqualPower = 1,
        FullVolume = 2,
        EMonoChannelUpmixMethod_MAX = 3
    };

    enum class EPanningMethod : uint8_t //Enum Engine.EPanningMethod
    {
        Linear = 0,
        EqualPower = 1,
        EPanningMethod_MAX = 2
    };

    enum class EVoiceSampleRate : uint32_t //Enum Engine.EVoiceSampleRate
    {
        Low16000Hz = 16000,
        Normal24000Hz = 24000,
        EVoiceSampleRate_MAX = 24001
    };

    enum class EAudioVolumeLocationState : uint8_t //Enum Engine.EAudioVolumeLocationState
    {
        InsideTheVolume = 0,
        OutsideTheVolume = 1,
        EAudioVolumeLocationState_MAX = 2
    };

    enum class EBlendableLocation : uint8_t //Enum Engine.EBlendableLocation
    {
        BL_AfterTonemapping = 0,
        BL_BeforeTonemapping = 1,
        BL_BeforeTranslucency = 2,
        BL_ReplacingTonemapper = 3,
        BL_SSRInput = 4,
        BL_MAX = 5
    };

    enum class ENotifyTriggerMode : uint8_t //Enum Engine.ENotifyTriggerMode
    {
        AllAnimations = 0,
        HighestWeightedAnimation = 1,
        None = 2,
        ENotifyTriggerMode_MAX = 3
    };

    enum class EBlendSpaceAxis : uint8_t //Enum Engine.EBlendSpaceAxis
    {
        BSA_None = 0,
        BSA_X = 1,
        BSA_Y = 2,
        BSA_Max = 3
    };

    enum class EBlueprintNativizationFlag : uint8_t //Enum Engine.EBlueprintNativizationFlag
    {
        Disabled = 0,
        Dependency = 1,
        ExplicitlyEnabled = 2,
        EBlueprintNativizationFlag_MAX = 3
    };

    enum class EBlueprintCompileMode : uint8_t //Enum Engine.EBlueprintCompileMode
    {
        Default = 0,
        Development = 1,
        FinalRelease = 2,
        EBlueprintCompileMode_MAX = 3
    };

    enum class EBlueprintType : uint8_t //Enum Engine.EBlueprintType
    {
        BPTYPE_Normal = 0,
        BPTYPE_Const = 1,
        BPTYPE_MacroLibrary = 2,
        BPTYPE_Interface = 3,
        BPTYPE_LevelScript = 4,
        BPTYPE_FunctionLibrary = 5,
        BPTYPE_MAX = 6
    };

    enum class EBlueprintStatus : uint8_t //Enum Engine.EBlueprintStatus
    {
        BS_Unknown = 0,
        BS_Dirty = 1,
        BS_Error = 2,
        BS_UpToDate = 3,
        BS_BeingCreated = 4,
        BS_UpToDateWithWarnings = 5,
        BS_MAX = 6
    };

    enum class EDOFMode : uint8_t //Enum Engine.EDOFMode
    {
        Default = 0,
        SixDOF = 1,
        YZPlane = 2,
        XZPlane = 3,
        XYPlane = 4,
        CustomPlane = 5,
        None = 6,
        EDOFMode_MAX = 7
    };

    enum class EBrushType : uint8_t //Enum Engine.EBrushType
    {
        Brush_Default = 0,
        Brush_Add = 1,
        Brush_Subtract = 2,
        Brush_MAX = 3
    };

    enum class ECsgOper : uint8_t //Enum Engine.ECsgOper
    {
        CSG_Active = 0,
        CSG_Add = 1,
        CSG_Subtract = 2,
        CSG_Intersect = 3,
        CSG_Deintersect = 4,
        CSG_None = 5,
        CSG_MAX = 6
    };

    enum class ECameraShakeDurationType : uint8_t //Enum Engine.ECameraShakeDurationType
    {
        Fixed = 0,
        Infinite = 1,
        Custom = 2,
        ECameraShakeDurationType_MAX = 3
    };

    enum class ECameraShakeUpdateResultFlags : uint8_t //Enum Engine.ECameraShakeUpdateResultFlags
    {
        ApplyAsAbsolute = 1,
        SkipAutoScale = 2,
        SkipAutoPlaySpace = 4,
        Default = 0,
        ECameraShakeUpdateResultFlags_MAX = 5
    };

    enum class ECameraShakeAttenuation : uint8_t //Enum Engine.ECameraShakeAttenuation
    {
        Linear = 0,
        Quadratic = 1,
        ECameraShakeAttenuation_MAX = 2
    };

    enum class ECameraAlphaBlendMode : uint8_t //Enum Engine.ECameraAlphaBlendMode
    {
        CABM_Linear = 0,
        CABM_Cubic = 1,
        CABM_MAX = 2
    };

    enum class ECameraProjectionMode : uint8_t //Enum Engine.ECameraProjectionMode
    {
        Perspective = 0,
        Orthographic = 1,
        ECameraProjectionMode_MAX = 2
    };

    enum class ECloudStorageDelegate : uint8_t //Enum Engine.ECloudStorageDelegate
    {
        CSD_KeyValueReadComplete = 0,
        CSD_KeyValueWriteComplete = 1,
        CSD_ValueChanged = 2,
        CSD_DocumentQueryComplete = 3,
        CSD_DocumentReadComplete = 4,
        CSD_DocumentWriteComplete = 5,
        CSD_DocumentConflictDetected = 6,
        CSD_MAX = 7
    };

    enum class EAngularDriveMode : uint8_t //Enum Engine.EAngularDriveMode
    {
        SLERP = 0,
        TwistAndSwing = 1,
        EAngularDriveMode_MAX = 2
    };

    enum class ECurveTableMode : uint8_t //Enum Engine.ECurveTableMode
    {
        Empty = 0,
        SimpleCurves = 1,
        RichCurves = 2,
        ECurveTableMode_MAX = 3
    };

    enum class ECustomAttributeBlendType : uint8_t //Enum Engine.ECustomAttributeBlendType
    {
        Override = 0,
        Blend = 1,
        ECustomAttributeBlendType_MAX = 2
    };

    enum class FDataDrivenCVarType : uint8_t //Enum Engine.FDataDrivenCVarType
    {
        CVarFloat = 0,
        CVarInt = 1,
        CVarBool = 2,
        FDataDrivenCVarType_MAX = 3
    };

    enum class EEvaluateCurveTableResult : uint8_t //Enum Engine.EEvaluateCurveTableResult
    {
        RowFound = 0,
        RowNotFound = 1,
        EEvaluateCurveTableResult_MAX = 2
    };

    enum class EGrammaticalNumber : uint8_t //Enum Engine.EGrammaticalNumber
    {
        Singular = 0,
        Plural = 1,
        EGrammaticalNumber_MAX = 2
    };

    enum class EGrammaticalGender : uint8_t //Enum Engine.EGrammaticalGender
    {
        Neuter = 0,
        Masculine = 1,
        Feminine = 2,
        Mixed = 3,
        EGrammaticalGender_MAX = 4
    };

    enum class DistributionParamMode : uint8_t //Enum Engine.DistributionParamMode
    {
        DPM_Normal = 0,
        DPM_Abs = 1,
        DPM_Direct = 2,
        DPM_MAX = 3
    };

    enum class EDistributionVectorMirrorFlags : uint8_t //Enum Engine.EDistributionVectorMirrorFlags
    {
        EDVMF_Same = 0,
        EDVMF_Different = 1,
        EDVMF_Mirror = 2,
        EDVMF_MAX = 3
    };

    enum class EDistributionVectorLockFlags : uint8_t //Enum Engine.EDistributionVectorLockFlags
    {
        EDVLF_None = 0,
        EDVLF_XY = 1,
        EDVLF_XZ = 2,
        EDVLF_YZ = 3,
        EDVLF_XYZ = 4,
        EDVLF_MAX = 5
    };

    enum class ENodeEnabledState : uint8_t //Enum Engine.ENodeEnabledState
    {
        Enabled = 0,
        Disabled = 1,
        DevelopmentOnly = 2,
        ENodeEnabledState_MAX = 3
    };

    enum class ENodeAdvancedPins : uint8_t //Enum Engine.ENodeAdvancedPins
    {
        NoPins = 0,
        Shown = 1,
        Hidden = 2,
        ENodeAdvancedPins_MAX = 3
    };

    enum class ENodeTitleType : uint8_t //Enum Engine.ENodeTitleType
    {
        FullTitle = 0,
        ListView = 1,
        EditableTitle = 2,
        MenuTitle = 3,
        MAX_TitleTypes = 4,
        ENodeTitleType_MAX = 5
    };

    enum class EPinContainerType : uint8_t //Enum Engine.EPinContainerType
    {
        None = 0,
        Array = 1,
        Set = 2,
        Map = 3,
        EPinContainerType_MAX = 4
    };

    enum class EEdGraphPinDirection : uint8_t //Enum Engine.EEdGraphPinDirection
    {
        EGPD_Input = 0,
        EGPD_Output = 1,
        EGPD_MAX = 2
    };

    enum class EBlueprintPinStyleType : uint8_t //Enum Engine.EBlueprintPinStyleType
    {
        BPST_Original = 0,
        BPST_VariantA = 1,
        BPST_MAX = 2
    };

    enum class ECanCreateConnectionResponse : uint8_t //Enum Engine.ECanCreateConnectionResponse
    {
        CONNECT_RESPONSE_MAKE = 0,
        CONNECT_RESPONSE_DISALLOW = 1,
        CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
        CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
        CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
        CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
        CONNECT_RESPONSE_MAX = 6
    };

    enum class EGraphType : uint8_t //Enum Engine.EGraphType
    {
        GT_Function = 0,
        GT_Ubergraph = 1,
        GT_Macro = 2,
        GT_Animation = 3,
        GT_StateMachine = 4,
        GT_MAX = 5
    };

    enum class ETransitionType : uint8_t //Enum Engine.ETransitionType
    {
        None = 0,
        Paused = 1,
        Loading = 2,
        Saving = 3,
        Connecting = 4,
        Precaching = 5,
        WaitingToConnect = 6,
        MAX = 7
    };

    enum class EViewModeIndex : uint8_t //Enum Engine.EViewModeIndex
    {
        VMI_BrushWireframe = 0,
        VMI_Wireframe = 1,
        VMI_Unlit = 2,
        VMI_Lit = 3,
        VMI_Lit_DetailLighting = 4,
        VMI_LightingOnly = 5,
        VMI_LightComplexity = 6,
        VMI_ShaderComplexity = 8,
        VMI_LightmapDensity = 9,
        VMI_LitLightmapDensity = 10,
        VMI_ReflectionOverride = 11,
        VMI_VisualizeBuffer = 12,
        VMI_StationaryLightOverlap = 14,
        VMI_CollisionPawn = 15,
        VMI_CollisionVisibility = 16,
        VMI_LODColoration = 18,
        VMI_QuadOverdraw = 19,
        VMI_PrimitiveDistanceAccuracy = 20,
        VMI_MeshUVDensityAccuracy = 21,
        VMI_ShaderComplexityWithQuadOverdraw = 22,
        VMI_HLODColoration = 23,
        VMI_GroupLODColoration = 24,
        VMI_MaterialTextureScaleAccuracy = 25,
        VMI_RequiredTextureResolution = 26,
        VMI_PathTracing = 27,
        VMI_RayTracingDebug = 28,
        VMI_Max = 29,
        VMI_Unknown = 255
    };

    enum class EDemoPlayFailure : uint8_t //Enum Engine.EDemoPlayFailure
    {
        Generic = 0,
        DemoNotFound = 1,
        Corrupt = 2,
        InvalidVersion = 3,
        InitBase = 4,
        GameSpecificHeader = 5,
        ReplayStreamerInternal = 6,
        LoadMap = 7,
        Serialization = 8,
        EDemoPlayFailure_MAX = 9
    };

    enum class ENetworkLagState : uint8_t //Enum Engine.ENetworkLagState
    {
        NotLagging = 0,
        Lagging = 1,
        ENetworkLagState_MAX = 2
    };

    enum class EMouseCaptureMode : uint8_t //Enum Engine.EMouseCaptureMode
    {
        NoCapture = 0,
        CapturePermanently = 1,
        CapturePermanently_IncludingInitialMouseDown = 2,
        CaptureDuringMouseDown = 3,
        CaptureDuringRightMouseDown = 4,
        EMouseCaptureMode_MAX = 5
    };

    enum class ECustomTimeStepSynchronizationState : uint8_t //Enum Engine.ECustomTimeStepSynchronizationState
    {
        Closed = 0,
        Error = 1,
        Synchronized = 2,
        Synchronizing = 3,
        ECustomTimeStepSynchronizationState_MAX = 4
    };

    enum class EMeshBufferAccess : uint8_t //Enum Engine.EMeshBufferAccess
    {
        Default = 0,
        ForceCPUAndGPU = 1,
        EMeshBufferAccess_MAX = 2
    };

    enum class EComponentSocketType : uint8_t //Enum Engine.EComponentSocketType
    {
        Invalid = 0,
        Bone = 1,
        Socket = 2,
        EComponentSocketType_MAX = 3
    };

    enum class EPhysicalMaterialMaskColor : uint8_t //Enum Engine.EPhysicalMaterialMaskColor
    {
        Red = 0,
        Green = 1,
        Blue = 2,
        Cyan = 3,
        Magenta = 4,
        Yellow = 5,
        White = 6,
        Black = 7,
        MAX = 8
    };

    enum class EWalkableSlopeBehavior : uint8_t //Enum Engine.EWalkableSlopeBehavior
    {
        WalkableSlope_Default = 0,
        WalkableSlope_Increase = 1,
        WalkableSlope_Decrease = 2,
        WalkableSlope_Unwalkable = 3,
        WalkableSlope_Max = 4
    };

    enum class EUpdateRateShiftBucket : uint8_t //Enum Engine.EUpdateRateShiftBucket
    {
        ShiftBucket0 = 0,
        ShiftBucket1 = 1,
        ShiftBucket2 = 2,
        ShiftBucket3 = 3,
        ShiftBucket4 = 4,
        ShiftBucket5 = 5,
        ShiftBucketMax = 6,
        EUpdateRateShiftBucket_MAX = 7
    };

    enum class EShadowMapFlags : uint8_t //Enum Engine.EShadowMapFlags
    {
        SMF_None = 0,
        SMF_Streamed = 1,
        SMF_MAX = 2
    };

    enum class ELightMapPaddingType : uint8_t //Enum Engine.ELightMapPaddingType
    {
        LMPT_NormalPadding = 0,
        LMPT_PrePadding = 1,
        LMPT_NoPadding = 2,
        LMPT_MAX = 3
    };

    enum class ECollisionEnabled : uint8_t //Enum Engine.ECollisionEnabled
    {
        NoCollision = 0,
        QueryOnly = 1,
        PhysicsOnly = 2,
        QueryAndPhysics = 3,
        ECollisionEnabled_MAX = 4
    };

    enum class ETimelineSigType : uint8_t //Enum Engine.ETimelineSigType
    {
        ETS_EventSignature = 0,
        ETS_FloatSignature = 1,
        ETS_VectorSignature = 2,
        ETS_LinearColorSignature = 3,
        ETS_InvalidSignature = 4,
        ETS_MAX = 5
    };

    enum class EFilterInterpolationType : uint8_t //Enum Engine.EFilterInterpolationType
    {
        BSIT_Average = 0,
        BSIT_Linear = 1,
        BSIT_Cubic = 2,
        BSIT_MAX = 3
    };

    enum class ECollisionResponse : uint8_t //Enum Engine.ECollisionResponse
    {
        ECR_Ignore = 0,
        ECR_Overlap = 1,
        ECR_Block = 2,
        ECR_MAX = 3
    };

    enum class EOverlapFilterOption : uint8_t //Enum Engine.EOverlapFilterOption
    {
        OverlapFilter_All = 0,
        OverlapFilter_DynamicOnly = 1,
        OverlapFilter_StaticOnly = 2,
        OverlapFilter_MAX = 3
    };

    enum class ENetworkSmoothingMode : uint8_t //Enum Engine.ENetworkSmoothingMode
    {
        Disabled = 0,
        Linear = 1,
        Exponential = 2,
        Replay = 3,
        ENetworkSmoothingMode_MAX = 4
    };

    enum class ELightingBuildQuality : uint8_t //Enum Engine.ELightingBuildQuality
    {
        Quality_Preview = 0,
        Quality_Medium = 1,
        Quality_High = 2,
        Quality_Production = 3,
        Quality_MAX = 4
    };

    enum class EMaterialShadingRate : uint8_t //Enum Engine.EMaterialShadingRate
    {
        MSR_1x1 = 0,
        MSR_2x1 = 1,
        MSR_1x2 = 2,
        MSR_2x2 = 3,
        MSR_4x2 = 4,
        MSR_2x4 = 5,
        MSR_4x4 = 6,
        MSR_Count = 7,
        MSR_MAX = 8
    };

    enum class EMaterialStencilCompare : uint8_t //Enum Engine.EMaterialStencilCompare
    {
        MSC_Less = 0,
        MSC_LessEqual = 1,
        MSC_Greater = 2,
        MSC_GreaterEqual = 3,
        MSC_Equal = 4,
        MSC_NotEqual = 5,
        MSC_Never = 6,
        MSC_Always = 7,
        MSC_Count = 8,
        MSC_MAX = 9
    };

    enum class EMaterialSamplerType : uint8_t //Enum Engine.EMaterialSamplerType
    {
        SAMPLERTYPE_Color = 0,
        SAMPLERTYPE_Grayscale = 1,
        SAMPLERTYPE_Alpha = 2,
        SAMPLERTYPE_Normal = 3,
        SAMPLERTYPE_Masks = 4,
        SAMPLERTYPE_DistanceFieldFont = 5,
        SAMPLERTYPE_LinearColor = 6,
        SAMPLERTYPE_LinearGrayscale = 7,
        SAMPLERTYPE_Data = 8,
        SAMPLERTYPE_External = 9,
        SAMPLERTYPE_VirtualColor = 10,
        SAMPLERTYPE_VirtualGrayscale = 11,
        SAMPLERTYPE_VirtualAlpha = 12,
        SAMPLERTYPE_VirtualNormal = 13,
        SAMPLERTYPE_VirtualMasks = 14,
        SAMPLERTYPE_VirtualLinearColor = 15,
        SAMPLERTYPE_VirtualLinearGrayscale = 16,
        SAMPLERTYPE_MAX = 17
    };

    enum class EMaterialTessellationMode : uint8_t //Enum Engine.EMaterialTessellationMode
    {
        MTM_NoTessellation = 0,
        MTM_FlatTessellation = 1,
        MTM_PNTriangles = 2,
        MTM_MAX = 3
    };

    enum class EMaterialShadingModel : uint8_t //Enum Engine.EMaterialShadingModel
    {
        MSM_Unlit = 0,
        MSM_DefaultLit = 1,
        MSM_Subsurface = 2,
        MSM_PreintegratedSkin = 3,
        MSM_ClearCoat = 4,
        MSM_SubsurfaceProfile = 5,
        MSM_TwoSidedFoliage = 6,
        MSM_Hair = 7,
        MSM_Cloth = 8,
        MSM_Eye = 9,
        MSM_SingleLayerWater = 10,
        MSM_ThinTranslucent = 11,
        MSM_NUM = 12,
        MSM_FromMaterialExpression = 13,
        MSM_MAX = 14
    };

    enum class EParticleCollisionMode : uint8_t //Enum Engine.EParticleCollisionMode
    {
        SceneDepth = 0,
        DistanceField = 1,
        EParticleCollisionMode_MAX = 2
    };

    enum class ETrailWidthMode : uint8_t //Enum Engine.ETrailWidthMode
    {
        ETrailWidthMode_FromCentre = 0,
        ETrailWidthMode_FromFirst = 1,
        ETrailWidthMode_FromSecond = 2,
        ETrailWidthMode_MAX = 3
    };

    enum class EGBufferFormat : uint8_t //Enum Engine.EGBufferFormat
    {
        Force8BitsPerChannel = 0,
        Default = 1,
        HighPrecisionNormals = 3,
        Force16BitsPerChannel = 5,
        EGBufferFormat_MAX = 6
    };

    enum class ESceneCaptureCompositeMode : uint8_t //Enum Engine.ESceneCaptureCompositeMode
    {
        SCCM_Overwrite = 0,
        SCCM_Additive = 1,
        SCCM_Composite = 2,
        SCCM_MAX = 3
    };

    enum class ESceneCaptureSource : uint8_t //Enum Engine.ESceneCaptureSource
    {
        SCS_SceneColorHDR = 0,
        SCS_SceneColorHDRNoAlpha = 1,
        SCS_FinalColorLDR = 2,
        SCS_SceneColorSceneDepth = 3,
        SCS_SceneDepth = 4,
        SCS_DeviceDepth = 5,
        SCS_Normal = 6,
        SCS_BaseColor = 7,
        SCS_FinalColorHDR = 8,
        SCS_FinalToneCurveHDR = 9,
        SCS_MAX = 10
    };

    enum class ETranslucentSortPolicy : uint8_t //Enum Engine.ETranslucentSortPolicy
    {
        SortByDistance = 0,
        SortByProjectedZ = 1,
        SortAlongAxis = 2,
        ETranslucentSortPolicy_MAX = 3
    };

    enum class ERefractionMode : uint8_t //Enum Engine.ERefractionMode
    {
        RM_IndexOfRefraction = 0,
        RM_PixelNormalOffset = 1,
        RM_MAX = 2
    };

    enum class ETranslucencyLightingMode : uint8_t //Enum Engine.ETranslucencyLightingMode
    {
        TLM_VolumetricNonDirectional = 0,
        TLM_VolumetricDirectional = 1,
        TLM_VolumetricPerVertexNonDirectional = 2,
        TLM_VolumetricPerVertexDirectional = 3,
        TLM_Surface = 4,
        TLM_SurfacePerPixelLighting = 5,
        TLM_MAX = 6
    };

    enum class ESamplerSourceMode : uint8_t //Enum Engine.ESamplerSourceMode
    {
        SSM_FromTextureAsset = 0,
        SSM_Wrap_WorldGroupSettings = 1,
        SSM_Clamp_WorldGroupSettings = 2,
        SSM_MAX = 3
    };

    enum class EOcclusionCombineMode : uint8_t //Enum Engine.EOcclusionCombineMode
    {
        OCM_Minimum = 0,
        OCM_Multiply = 1,
        OCM_MAX = 2
    };

    enum class ELightmapType : uint8_t //Enum Engine.ELightmapType
    {
        Default = 0,
        ForceSurface = 1,
        ForceVolumetric = 2,
        ELightmapType_MAX = 3
    };

    enum class EIndirectLightingCacheQuality : uint8_t //Enum Engine.EIndirectLightingCacheQuality
    {
        ILCQ_Off = 0,
        ILCQ_Point = 1,
        ILCQ_Volume = 2,
        ILCQ_MAX = 3
    };

    enum class ESceneDepthPriorityGroup : uint8_t //Enum Engine.ESceneDepthPriorityGroup
    {
        SDPG_World = 0,
        SDPG_Foreground = 1,
        SDPG_MAX = 2
    };

    enum class EAspectRatioAxisConstraint : uint8_t //Enum Engine.EAspectRatioAxisConstraint
    {
        AspectRatio_MaintainYFOV = 0,
        AspectRatio_MaintainXFOV = 1,
        AspectRatio_MajorAxisFOV = 2,
        AspectRatio_MAX = 3
    };

    enum class EFontCacheType : uint8_t //Enum Engine.EFontCacheType
    {
        Offline = 0,
        Runtime = 1,
        EFontCacheType_MAX = 2
    };

    enum class EFontImportCharacterSet : uint8_t //Enum Engine.EFontImportCharacterSet
    {
        FontICS_Default = 0,
        FontICS_Ansi = 1,
        FontICS_Symbol = 2,
        FontICS_MAX = 3
    };

    enum class EStandbyType : uint8_t //Enum Engine.EStandbyType
    {
        STDBY_Rx = 0,
        STDBY_Tx = 1,
        STDBY_BadPing = 2,
        STDBY_MAX = 3
    };

    enum class ESuggestProjVelocityTraceOption : uint8_t //Enum Engine.ESuggestProjVelocityTraceOption
    {
        DoNotTrace = 0,
        TraceFullPath = 1,
        OnlyTraceWhileAscending = 2,
        ESuggestProjVelocityTraceOption_MAX = 3
    };

    enum class EHitProxyPriority : uint8_t //Enum Engine.EHitProxyPriority
    {
        HPP_World = 0,
        HPP_Wireframe = 1,
        HPP_Foreground = 2,
        HPP_UI = 3,
        HPP_MAX = 4
    };

    enum class EImportanceWeight : uint8_t //Enum Engine.EImportanceWeight
    {
        Luminance = 0,
        Red = 1,
        Green = 2,
        Blue = 3,
        Alpha = 4,
        EImportanceWeight_MAX = 5
    };

    enum class EAdManagerDelegate : uint8_t //Enum Engine.EAdManagerDelegate
    {
        AMD_ClickedBanner = 0,
        AMD_UserClosedAd = 1,
        AMD_MAX = 2
    };

    enum class EAnimAlphaInputType : uint8_t //Enum Engine.EAnimAlphaInputType
    {
        Float = 0,
        Bool = 1,
        Curve = 2,
        EAnimAlphaInputType_MAX = 3
    };

    enum class ETrackActiveCondition : uint8_t //Enum Engine.ETrackActiveCondition
    {
        ETAC_Always = 0,
        ETAC_GoreEnabled = 1,
        ETAC_GoreDisabled = 2,
        ETAC_MAX = 3
    };

    enum class EInterpTrackMoveRotMode : uint8_t //Enum Engine.EInterpTrackMoveRotMode
    {
        IMR_Keyframed = 0,
        IMR_LookAtGroup = 1,
        IMR_Ignore = 2,
        IMR_MAX = 3
    };

    enum class EInterpMoveAxis : uint8_t //Enum Engine.EInterpMoveAxis
    {
        AXIS_TranslationX = 0,
        AXIS_TranslationY = 1,
        AXIS_TranslationZ = 2,
        AXIS_RotationX = 3,
        AXIS_RotationY = 4,
        AXIS_RotationZ = 5,
        AXIS_MAX = 6
    };

    enum class ETrackToggleAction : uint8_t //Enum Engine.ETrackToggleAction
    {
        ETTA_Off = 0,
        ETTA_On = 1,
        ETTA_Toggle = 2,
        ETTA_Trigger = 3,
        ETTA_MAX = 4
    };

    enum class EVisibilityTrackCondition : uint8_t //Enum Engine.EVisibilityTrackCondition
    {
        EVTC_Always = 0,
        EVTC_GoreEnabled = 1,
        EVTC_GoreDisabled = 2,
        EVTC_MAX = 3
    };

    enum class EVisibilityTrackAction : uint8_t //Enum Engine.EVisibilityTrackAction
    {
        EVTA_Hide = 0,
        EVTA_Show = 1,
        EVTA_Toggle = 2,
        EVTA_MAX = 3
    };

    enum class ESlateGesture : uint8_t //Enum Engine.ESlateGesture
    {
        None = 0,
        Scroll = 1,
        Magnify = 2,
        Swipe = 3,
        Rotate = 4,
        LongPress = 5,
        ESlateGesture_MAX = 6
    };

    enum class EMIDCreationFlags : uint8_t //Enum Engine.EMIDCreationFlags
    {
        None = 0,
        Transient = 1,
        EMIDCreationFlags_MAX = 2
    };

    enum class EMatrixColumns : uint8_t //Enum Engine.EMatrixColumns
    {
        First = 0,
        Second = 1,
        Third = 2,
        Fourth = 3,
        EMatrixColumns_MAX = 4
    };

    enum class ELerpInterpolationMode : uint8_t //Enum Engine.ELerpInterpolationMode
    {
        QuatInterp = 0,
        EulerInterp = 1,
        DualQuatInterp = 2,
        ELerpInterpolationMode_MAX = 3
    };

    enum class EEasingFunc : uint8_t //Enum Engine.EEasingFunc
    {
        Linear = 0,
        Step = 1,
        SinusoidalIn = 2,
        SinusoidalOut = 3,
        SinusoidalInOut = 4,
        EaseIn = 5,
        EaseOut = 6,
        EaseInOut = 7,
        ExpoIn = 8,
        ExpoOut = 9,
        ExpoInOut = 10,
        CircularIn = 11,
        CircularOut = 12,
        CircularInOut = 13,
        EEasingFunc_MAX = 14
    };

    enum class ERoundingMode : uint8_t //Enum Engine.ERoundingMode
    {
        HalfToEven = 0,
        HalfFromZero = 1,
        HalfToZero = 2,
        FromZero = 3,
        ToZero = 4,
        ToNegativeInfinity = 5,
        ToPositiveInfinity = 6,
        ERoundingMode_MAX = 7
    };

    enum class EStreamingVolumeUsage : uint8_t //Enum Engine.EStreamingVolumeUsage
    {
        SVB_Loading = 0,
        SVB_LoadingAndVisibility = 1,
        SVB_VisibilityBlockingOnLoad = 2,
        SVB_BlockingOnLoad = 3,
        SVB_LoadingNotVisible = 4,
        SVB_MAX = 5
    };

    enum class ESyncOption : uint8_t //Enum Engine.ESyncOption
    {
        Drive = 0,
        Passive = 1,
        Disabled = 2,
        ESyncOption_MAX = 3
    };

    enum class EMaterialDecalResponse : uint8_t //Enum Engine.EMaterialDecalResponse
    {
        MDR_None = 0,
        MDR_ColorNormalRoughness = 1,
        MDR_Color = 2,
        MDR_ColorNormal = 3,
        MDR_ColorRoughness = 4,
        MDR_Normal = 5,
        MDR_NormalRoughness = 6,
        MDR_Roughness = 7,
        MDR_MAX = 8
    };

    enum class EDecalBlendMode : uint8_t //Enum Engine.EDecalBlendMode
    {
        DBM_Translucent = 0,
        DBM_Stain = 1,
        DBM_Normal = 2,
        DBM_Emissive = 3,
        DBM_DBuffer_ColorNormalRoughness = 4,
        DBM_DBuffer_Color = 5,
        DBM_DBuffer_ColorNormal = 6,
        DBM_DBuffer_ColorRoughness = 7,
        DBM_DBuffer_Normal = 8,
        DBM_DBuffer_NormalRoughness = 9,
        DBM_DBuffer_Roughness = 10,
        DBM_DBuffer_Emissive = 11,
        DBM_DBuffer_AlphaComposite = 12,
        DBM_DBuffer_EmissiveAlphaComposite = 13,
        DBM_Volumetric_DistanceFunction = 14,
        DBM_AlphaComposite = 15,
        DBM_AmbientOcclusion = 16,
        DBM_MAX = 17
    };

    enum class ETextureColorChannel : uint8_t //Enum Engine.ETextureColorChannel
    {
        TCC_Red = 0,
        TCC_Green = 1,
        TCC_Blue = 2,
        TCC_Alpha = 3,
        TCC_MAX = 4
    };

    enum class EMaterialAttributeBlend : uint8_t //Enum Engine.EMaterialAttributeBlend
    {
        Blend = 0,
        UseA = 1,
        UseB = 2,
        EMaterialAttributeBlend_MAX = 3
    };

    enum class EChannelMaskParameterColor : uint8_t //Enum Engine.EChannelMaskParameterColor
    {
        Red = 0,
        Green = 1,
        Blue = 2,
        Alpha = 3,
        EChannelMaskParameterColor_MAX = 4
    };

    enum class EClampMode : uint8_t //Enum Engine.EClampMode
    {
        CMODE_Clamp = 0,
        CMODE_ClampMin = 1,
        CMODE_ClampMax = 2,
        CMODE_MAX = 3
    };

    enum class ECustomMaterialOutputType : uint8_t //Enum Engine.ECustomMaterialOutputType
    {
        CMOT_Float1 = 0,
        CMOT_Float2 = 1,
        CMOT_Float3 = 2,
        CMOT_Float4 = 3,
        CMOT_MaterialAttributes = 4,
        CMOT_MAX = 5
    };

    enum class EDepthOfFieldFunctionValue : uint8_t //Enum Engine.EDepthOfFieldFunctionValue
    {
        TDOF_NearAndFarMask = 0,
        TDOF_NearMask = 1,
        TDOF_FarMask = 2,
        TDOF_CircleOfConfusionRadius = 3,
        TDOF_MAX = 4
    };

    enum class EFunctionInputType : uint8_t //Enum Engine.EFunctionInputType
    {
        FunctionInput_Scalar = 0,
        FunctionInput_Vector2 = 1,
        FunctionInput_Vector3 = 2,
        FunctionInput_Vector4 = 3,
        FunctionInput_Texture2D = 4,
        FunctionInput_TextureCube = 5,
        FunctionInput_Texture2DArray = 6,
        FunctionInput_VolumeTexture = 7,
        FunctionInput_StaticBool = 8,
        FunctionInput_MaterialAttributes = 9,
        FunctionInput_TextureExternal = 10,
        FunctionInput_MAX = 11
    };

    enum class ENoiseFunction : uint8_t //Enum Engine.ENoiseFunction
    {
        NOISEFUNCTION_SimplexTex = 0,
        NOISEFUNCTION_GradientTex = 1,
        NOISEFUNCTION_GradientTex3D = 2,
        NOISEFUNCTION_GradientALU = 3,
        NOISEFUNCTION_ValueALU = 4,
        NOISEFUNCTION_VoronoiALU = 5,
        NOISEFUNCTION_MAX = 6
    };

    enum class ERuntimeVirtualTextureTextureAddressMode : uint8_t //Enum Engine.ERuntimeVirtualTextureTextureAddressMode
    {
        RVTTA_Clamp = 0,
        RVTTA_Wrap = 1,
        RVTTA_MAX = 2
    };

    enum class ERuntimeVirtualTextureMipValueMode : uint8_t //Enum Engine.ERuntimeVirtualTextureMipValueMode
    {
        RVTMVM_None = 0,
        RVTMVM_MipLevel = 1,
        RVTMVM_MipBias = 2,
        RVTMVM_MAX = 3
    };

    enum class EMaterialSceneAttributeInputMode : uint8_t //Enum Engine.EMaterialSceneAttributeInputMode
    {
        Coordinates = 0,
        OffsetFraction = 1,
        EMaterialSceneAttributeInputMode_MAX = 2
    };

    enum class ESpeedTreeLODType : uint8_t //Enum Engine.ESpeedTreeLODType
    {
        STLOD_Pop = 0,
        STLOD_Smooth = 1,
        STLOD_MAX = 2
    };

    enum class ESpeedTreeWindType : uint8_t //Enum Engine.ESpeedTreeWindType
    {
        STW_None = 0,
        STW_Fastest = 1,
        STW_Fast = 2,
        STW_Better = 3,
        STW_Best = 4,
        STW_Palm = 5,
        STW_BestPlus = 6,
        STW_MAX = 7
    };

    enum class ESpeedTreeGeometryType : uint8_t //Enum Engine.ESpeedTreeGeometryType
    {
        STG_Branch = 0,
        STG_Frond = 1,
        STG_Leaf = 2,
        STG_FacingLeaf = 3,
        STG_Billboard = 4,
        STG_MAX = 5
    };

    enum class EMaterialExposedTextureProperty : uint8_t //Enum Engine.EMaterialExposedTextureProperty
    {
        TMTM_TextureSize = 0,
        TMTM_TexelSize = 1,
        TMTM_MAX = 2
    };

    enum class ETextureMipValueMode : uint8_t //Enum Engine.ETextureMipValueMode
    {
        TMVM_None = 0,
        TMVM_MipLevel = 1,
        TMVM_MipBias = 2,
        TMVM_Derivative = 3,
        TMVM_MAX = 4
    };

    enum class EMaterialVectorCoordTransform : uint8_t //Enum Engine.EMaterialVectorCoordTransform
    {
        TRANSFORM_Tangent = 0,
        TRANSFORM_Local = 1,
        TRANSFORM_World = 2,
        TRANSFORM_View = 3,
        TRANSFORM_Camera = 4,
        TRANSFORM_ParticleWorld = 5,
        TRANSFORM_MAX = 6
    };

    enum class EMaterialVectorCoordTransformSource : uint8_t //Enum Engine.EMaterialVectorCoordTransformSource
    {
        TRANSFORMSOURCE_Tangent = 0,
        TRANSFORMSOURCE_Local = 1,
        TRANSFORMSOURCE_World = 2,
        TRANSFORMSOURCE_View = 3,
        TRANSFORMSOURCE_Camera = 4,
        TRANSFORMSOURCE_ParticleWorld = 5,
        TRANSFORMSOURCE_MAX = 6
    };

    enum class EMaterialPositionTransformSource : uint8_t //Enum Engine.EMaterialPositionTransformSource
    {
        TRANSFORMPOSSOURCE_Local = 0,
        TRANSFORMPOSSOURCE_World = 1,
        TRANSFORMPOSSOURCE_TranslatedWorld = 2,
        TRANSFORMPOSSOURCE_View = 3,
        TRANSFORMPOSSOURCE_Camera = 4,
        TRANSFORMPOSSOURCE_Particle = 5,
        TRANSFORMPOSSOURCE_MAX = 6
    };

    enum class EVectorNoiseFunction : uint8_t //Enum Engine.EVectorNoiseFunction
    {
        VNF_CellnoiseALU = 0,
        VNF_VectorALU = 1,
        VNF_GradientALU = 2,
        VNF_CurlALU = 3,
        VNF_VoronoiALU = 4,
        VNF_MAX = 5
    };

    enum class EMaterialExposedViewProperty : uint8_t //Enum Engine.EMaterialExposedViewProperty
    {
        MEVP_BufferSize = 0,
        MEVP_FieldOfView = 1,
        MEVP_TanHalfFieldOfView = 2,
        MEVP_ViewSize = 3,
        MEVP_WorldSpaceViewPosition = 4,
        MEVP_WorldSpaceCameraPosition = 5,
        MEVP_ViewportOffset = 6,
        MEVP_TemporalSampleCount = 7,
        MEVP_TemporalSampleIndex = 8,
        MEVP_TemporalSampleOffset = 9,
        MEVP_RuntimeVirtualTextureOutputLevel = 10,
        MEVP_RuntimeVirtualTextureOutputDerivative = 11,
        MEVP_PreExposure = 12,
        MEVP_RuntimeVirtualTextureMaxLevel = 13,
        MEVP_MAX = 14
    };

    enum class EWorldPositionIncludedOffsets : uint8_t //Enum Engine.EWorldPositionIncludedOffsets
    {
        WPT_Default = 0,
        WPT_ExcludeAllShaderOffsets = 1,
        WPT_CameraRelative = 2,
        WPT_CameraRelativeNoOffsets = 3,
        WPT_MAX = 4
    };

    enum class EMaterialFunctionUsage : uint8_t //Enum Engine.EMaterialFunctionUsage
    {
        Default = 0,
        MaterialLayer = 1,
        MaterialLayerBlend = 2,
        EMaterialFunctionUsage_MAX = 3
    };

    enum class EMaterialUsage : uint8_t //Enum Engine.EMaterialUsage
    {
        MATUSAGE_SkeletalMesh = 0,
        MATUSAGE_ParticleSprites = 1,
        MATUSAGE_BeamTrails = 2,
        MATUSAGE_MeshParticles = 3,
        MATUSAGE_StaticLighting = 4,
        MATUSAGE_MorphTargets = 5,
        MATUSAGE_SplineMesh = 6,
        MATUSAGE_InstancedStaticMeshes = 7,
        MATUSAGE_GeometryCollections = 8,
        MATUSAGE_Clothing = 9,
        MATUSAGE_NiagaraSprites = 10,
        MATUSAGE_NiagaraRibbons = 11,
        MATUSAGE_NiagaraMeshParticles = 12,
        MATUSAGE_GeometryCache = 13,
        MATUSAGE_Water = 14,
        MATUSAGE_HairStrands = 15,
        MATUSAGE_LidarPointCloud = 16,
        MATUSAGE_VirtualHeightfieldMesh = 17,
        MATUSAGE_MAX = 18
    };

    enum class EMaterialLayerLinkState : uint8_t //Enum Engine.EMaterialLayerLinkState
    {
        Uninitialized = 0,
        LinkedToParent = 1,
        UnlinkedFromParent = 2,
        NotFromParent = 3,
        EMaterialLayerLinkState_MAX = 4
    };

    enum class EMaterialParameterAssociation : uint8_t //Enum Engine.EMaterialParameterAssociation
    {
        LayerParameter = 0,
        BlendParameter = 1,
        GlobalParameter = 2,
        EMaterialParameterAssociation_MAX = 3
    };

    enum class EMaterialMergeType : uint8_t //Enum Engine.EMaterialMergeType
    {
        MaterialMergeType_Default = 0,
        MaterialMergeType_Simplygon = 1,
        MaterialMergeType_MAX = 2
    };

    enum class ETextureSizingType : uint8_t //Enum Engine.ETextureSizingType
    {
        TextureSizingType_UseSingleTextureSize = 0,
        TextureSizingType_UseAutomaticBiasedSizes = 1,
        TextureSizingType_UseManualOverrideTextureSize = 2,
        TextureSizingType_UseSimplygonAutomaticSizing = 3,
        TextureSizingType_MAX = 4
    };

    enum class ESceneTextureId : uint8_t //Enum Engine.ESceneTextureId
    {
        PPI_SceneColor = 0,
        PPI_SceneDepth = 1,
        PPI_DiffuseColor = 2,
        PPI_SpecularColor = 3,
        PPI_SubsurfaceColor = 4,
        PPI_BaseColor = 5,
        PPI_Specular = 6,
        PPI_Metallic = 7,
        PPI_WorldNormal = 8,
        PPI_SeparateTranslucency = 9,
        PPI_Opacity = 10,
        PPI_Roughness = 11,
        PPI_MaterialAO = 12,
        PPI_CustomDepth = 13,
        PPI_PostProcessInput0 = 14,
        PPI_PostProcessInput1 = 15,
        PPI_PostProcessInput2 = 16,
        PPI_PostProcessInput3 = 17,
        PPI_PostProcessInput4 = 18,
        PPI_PostProcessInput5 = 19,
        PPI_PostProcessInput6 = 20,
        PPI_DecalMask = 21,
        PPI_ShadingModelColor = 22,
        PPI_ShadingModelID = 23,
        PPI_AmbientOcclusion = 24,
        PPI_CustomStencil = 25,
        PPI_StoredBaseColor = 26,
        PPI_StoredSpecular = 27,
        PPI_Velocity = 28,
        PPI_WorldTangent = 29,
        PPI_Anisotropy = 30,
        PPI_MAX = 31
    };

    enum class EMaterialDomain : uint8_t //Enum Engine.EMaterialDomain
    {
        MD_Surface = 0,
        MD_DeferredDecal = 1,
        MD_LightFunction = 2,
        MD_Volume = 3,
        MD_PostProcess = 4,
        MD_UI = 5,
        MD_RuntimeVirtualTexture = 6,
        MD_MAX = 7
    };

    enum class EMeshInstancingReplacementMethod : uint8_t //Enum Engine.EMeshInstancingReplacementMethod
    {
        RemoveOriginalActors = 0,
        KeepOriginalActorsAsEditorOnly = 1,
        EMeshInstancingReplacementMethod_MAX = 2
    };

    enum class EUVOutput : uint8_t //Enum Engine.EUVOutput
    {
        DoNotOutputChannel = 0,
        OutputChannel = 1,
        EUVOutput_MAX = 2
    };

    enum class EMeshMergeType : uint8_t //Enum Engine.EMeshMergeType
    {
        MeshMergeType_Default = 0,
        MeshMergeType_MergeActor = 1,
        MeshMergeType_MAX = 2
    };

    enum class EMeshLODSelectionType : uint8_t //Enum Engine.EMeshLODSelectionType
    {
        AllLODs = 0,
        SpecificLOD = 1,
        CalculateLOD = 2,
        LowestDetailLOD = 3,
        EMeshLODSelectionType_MAX = 4
    };

    enum class EProxyNormalComputationMethod : uint8_t //Enum Engine.EProxyNormalComputationMethod
    {
        AngleWeighted = 0,
        AreaWeighted = 1,
        EqualWeighted = 2,
        EProxyNormalComputationMethod_MAX = 3
    };

    enum class ELandscapeCullingPrecision : uint8_t //Enum Engine.ELandscapeCullingPrecision
    {
        High = 0,
        Medium = 1,
        Low = 2,
        ELandscapeCullingPrecision_MAX = 3
    };

    enum class EStaticMeshReductionTerimationCriterion : uint8_t //Enum Engine.EStaticMeshReductionTerimationCriterion
    {
        Triangles = 0,
        Vertices = 1,
        Any = 2,
        EStaticMeshReductionTerimationCriterion_MAX = 3
    };

    enum class EMeshFeatureImportance : uint8_t //Enum Engine.EMeshFeatureImportance
    {
        Off = 0,
        Lowest = 1,
        Low = 2,
        Normal = 3,
        High = 4,
        Highest = 5,
        EMeshFeatureImportance_MAX = 6
    };

    enum class EVertexPaintAxis : uint8_t //Enum Engine.EVertexPaintAxis
    {
        X = 0,
        Y = 1,
        Z = 2,
        EVertexPaintAxis_MAX = 3
    };

    enum class EMicroTransactionResult : uint8_t //Enum Engine.EMicroTransactionResult
    {
        MTR_Succeeded = 0,
        MTR_Failed = 1,
        MTR_Canceled = 2,
        MTR_RestoredFromServer = 3,
        MTR_MAX = 4
    };

    enum class EMicroTransactionDelegate : uint8_t //Enum Engine.EMicroTransactionDelegate
    {
        MTD_PurchaseQueryComplete = 0,
        MTD_PurchaseComplete = 1,
        MTD_MAX = 2
    };

    enum class FNavigationSystemRunMode : uint8_t //Enum Engine.FNavigationSystemRunMode
    {
        InvalidMode = 0,
        GameMode = 1,
        EditorMode = 2,
        SimulationMode = 3,
        PIEMode = 4,
        InferFromWorldMode = 5,
        FNavigationSystemRunMode_MAX = 6
    };

    enum class ENavigationQueryResult : uint8_t //Enum Engine.ENavigationQueryResult
    {
        Invalid = 0,
        Error = 1,
        Fail = 2,
        Success = 3,
        ENavigationQueryResult_MAX = 4
    };

    enum class ENavPathEvent : uint8_t //Enum Engine.ENavPathEvent
    {
        Cleared = 0,
        NewPath = 1,
        UpdatedDueToGoalMoved = 2,
        UpdatedDueToNavigationChanged = 3,
        Invalidated = 4,
        RePathFailed = 5,
        MetaPathUpdate = 6,
        Custom = 7,
        ENavPathEvent_MAX = 8
    };

    enum class ENavDataGatheringModeConfig : uint8_t //Enum Engine.ENavDataGatheringModeConfig
    {
        Invalid = 0,
        Instant = 1,
        Lazy = 2,
        ENavDataGatheringModeConfig_MAX = 3
    };

    enum class ENavDataGatheringMode : uint8_t //Enum Engine.ENavDataGatheringMode
    {
        Default = 0,
        Instant = 1,
        Lazy = 2,
        ENavDataGatheringMode_MAX = 3
    };

    enum class ENavigationOptionFlag : uint8_t //Enum Engine.ENavigationOptionFlag
    {
        Default = 0,
        Enable = 1,
        Disable = 2,
        MAX = 3
    };

    enum class ENavLinkDirection : uint8_t //Enum Engine.ENavLinkDirection
    {
        BothWays = 0,
        LeftToRight = 1,
        RightToLeft = 2,
        ENavLinkDirection_MAX = 3
    };

    enum class EEmitterRenderMode : uint8_t //Enum Engine.EEmitterRenderMode
    {
        ERM_Normal = 0,
        ERM_Point = 1,
        ERM_Cross = 2,
        ERM_LightsOnly = 3,
        ERM_None = 4,
        ERM_MAX = 5
    };

    enum class EParticleSubUVInterpMethod : uint8_t //Enum Engine.EParticleSubUVInterpMethod
    {
        PSUVIM_None = 0,
        PSUVIM_Linear = 1,
        PSUVIM_Linear_Blend = 2,
        PSUVIM_Random = 3,
        PSUVIM_Random_Blend = 4,
        PSUVIM_MAX = 5
    };

    enum class EParticleBurstMethod : uint8_t //Enum Engine.EParticleBurstMethod
    {
        EPBM_Instant = 0,
        EPBM_Interpolated = 1,
        EPBM_MAX = 2
    };

    enum class EParticleSystemInsignificanceReaction : uint8_t //Enum Engine.EParticleSystemInsignificanceReaction
    {
        Auto = 0,
        Complete = 1,
        DisableTick = 2,
        DisableTickAndKill = 3,
        Num = 4,
        EParticleSystemInsignificanceReaction_MAX = 5
    };

    enum class EParticleSignificanceLevel : uint8_t //Enum Engine.EParticleSignificanceLevel
    {
        Low = 0,
        Medium = 1,
        High = 2,
        Critical = 3,
        Num = 4,
        EParticleSignificanceLevel_MAX = 5
    };

    enum class EParticleDetailMode : uint8_t //Enum Engine.EParticleDetailMode
    {
        PDM_Low = 0,
        PDM_Medium = 1,
        PDM_High = 2,
        PDM_MAX = 3
    };

    enum class EParticleSourceSelectionMethod : uint8_t //Enum Engine.EParticleSourceSelectionMethod
    {
        EPSSM_Random = 0,
        EPSSM_Sequential = 1,
        EPSSM_MAX = 2
    };

    enum class EModuleType : uint8_t //Enum Engine.EModuleType
    {
        EPMT_General = 0,
        EPMT_TypeData = 1,
        EPMT_Beam = 2,
        EPMT_Trail = 3,
        EPMT_Spawn = 4,
        EPMT_Required = 5,
        EPMT_Event = 6,
        EPMT_Light = 7,
        EPMT_SubUV = 8,
        EPMT_MAX = 9
    };

    enum class EAttractorParticleSelectionMethod : uint8_t //Enum Engine.EAttractorParticleSelectionMethod
    {
        EAPSM_Random = 0,
        EAPSM_Sequential = 1,
        EAPSM_MAX = 2
    };

    enum class Beam2SourceTargetTangentMethod : uint8_t //Enum Engine.Beam2SourceTargetTangentMethod
    {
        PEB2STTM_Direct = 0,
        PEB2STTM_UserSet = 1,
        PEB2STTM_Distribution = 2,
        PEB2STTM_Emitter = 3,
        PEB2STTM_MAX = 4
    };

    enum class Beam2SourceTargetMethod : uint8_t //Enum Engine.Beam2SourceTargetMethod
    {
        PEB2STM_Default = 0,
        PEB2STM_UserSet = 1,
        PEB2STM_Emitter = 2,
        PEB2STM_Particle = 3,
        PEB2STM_Actor = 4,
        PEB2STM_MAX = 5
    };

    enum class BeamModifierType : uint8_t //Enum Engine.BeamModifierType
    {
        PEB2MT_Source = 0,
        PEB2MT_Target = 1,
        PEB2MT_MAX = 2
    };

    enum class EParticleCameraOffsetUpdateMethod : uint8_t //Enum Engine.EParticleCameraOffsetUpdateMethod
    {
        EPCOUM_DirectSet = 0,
        EPCOUM_Additive = 1,
        EPCOUM_Scalar = 2,
        EPCOUM_MAX = 3
    };

    enum class EParticleCollisionComplete : uint8_t //Enum Engine.EParticleCollisionComplete
    {
        EPCC_Kill = 0,
        EPCC_Freeze = 1,
        EPCC_HaltCollisions = 2,
        EPCC_FreezeTranslation = 3,
        EPCC_FreezeRotation = 4,
        EPCC_FreezeMovement = 5,
        EPCC_MAX = 6
    };

    enum class EParticleCollisionResponse : uint8_t //Enum Engine.EParticleCollisionResponse
    {
        Bounce = 0,
        Stop = 1,
        Kill = 2,
        EParticleCollisionResponse_MAX = 3
    };

    enum class ELocationBoneSocketSelectionMethod : uint8_t //Enum Engine.ELocationBoneSocketSelectionMethod
    {
        BONESOCKETSEL_Sequential = 0,
        BONESOCKETSEL_Random = 1,
        BONESOCKETSEL_MAX = 2
    };

    enum class ELocationBoneSocketSource : uint8_t //Enum Engine.ELocationBoneSocketSource
    {
        BONESOCKETSOURCE_Bones = 0,
        BONESOCKETSOURCE_Sockets = 1,
        BONESOCKETSOURCE_MAX = 2
    };

    enum class ELocationEmitterSelectionMethod : uint8_t //Enum Engine.ELocationEmitterSelectionMethod
    {
        ELESM_Random = 0,
        ELESM_Sequential = 1,
        ELESM_MAX = 2
    };

    enum class CylinderHeightAxis : uint8_t //Enum Engine.CylinderHeightAxis
    {
        PMLPC_HEIGHTAXIS_X = 0,
        PMLPC_HEIGHTAXIS_Y = 1,
        PMLPC_HEIGHTAXIS_Z = 2,
        PMLPC_HEIGHTAXIS_MAX = 3
    };

    enum class ELocationSkelVertSurfaceSource : uint8_t //Enum Engine.ELocationSkelVertSurfaceSource
    {
        VERTSURFACESOURCE_Vert = 0,
        VERTSURFACESOURCE_Surface = 1,
        VERTSURFACESOURCE_MAX = 2
    };

    enum class EOrbitChainMode : uint8_t //Enum Engine.EOrbitChainMode
    {
        EOChainMode_Add = 0,
        EOChainMode_Scale = 1,
        EOChainMode_Link = 2,
        EOChainMode_MAX = 3
    };

    enum class EParticleAxisLock : uint8_t //Enum Engine.EParticleAxisLock
    {
        EPAL_NONE = 0,
        EPAL_X = 1,
        EPAL_Y = 2,
        EPAL_Z = 3,
        EPAL_NEGATIVE_X = 4,
        EPAL_NEGATIVE_Y = 5,
        EPAL_NEGATIVE_Z = 6,
        EPAL_ROTATE_X = 7,
        EPAL_ROTATE_Y = 8,
        EPAL_ROTATE_Z = 9,
        EPAL_MAX = 10
    };

    enum class EEmitterDynamicParameterValue : uint8_t //Enum Engine.EEmitterDynamicParameterValue
    {
        EDPV_UserSet = 0,
        EDPV_AutoSet = 1,
        EDPV_VelocityX = 2,
        EDPV_VelocityY = 3,
        EDPV_VelocityZ = 4,
        EDPV_VelocityMag = 5,
        EDPV_MAX = 6
    };

    enum class EEmitterNormalsMode : uint8_t //Enum Engine.EEmitterNormalsMode
    {
        ENM_CameraFacing = 0,
        ENM_Spherical = 1,
        ENM_Cylindrical = 2,
        ENM_MAX = 3
    };

    enum class EParticleSortMode : uint8_t //Enum Engine.EParticleSortMode
    {
        PSORTMODE_None = 0,
        PSORTMODE_ViewProjDepth = 1,
        PSORTMODE_DistanceToView = 2,
        PSORTMODE_Age_OldestFirst = 3,
        PSORTMODE_Age_NewestFirst = 4,
        PSORTMODE_MAX = 5
    };

    enum class EParticleUVFlipMode : uint8_t //Enum Engine.EParticleUVFlipMode
    {
        None = 0,
        FlipUV = 1,
        FlipUOnly = 2,
        FlipVOnly = 3,
        RandomFlipUV = 4,
        RandomFlipUOnly = 5,
        RandomFlipVOnly = 6,
        RandomFlipUVIndependent = 7,
        EParticleUVFlipMode_MAX = 8
    };

    enum class ETrail2SourceMethod : uint8_t //Enum Engine.ETrail2SourceMethod
    {
        PET2SRCM_Default = 0,
        PET2SRCM_Particle = 1,
        PET2SRCM_Actor = 2,
        PET2SRCM_MAX = 3
    };

    enum class EBeamTaperMethod : uint8_t //Enum Engine.EBeamTaperMethod
    {
        PEBTM_None = 0,
        PEBTM_Full = 1,
        PEBTM_Partial = 2,
        PEBTM_MAX = 3
    };

    enum class EBeam2Method : uint8_t //Enum Engine.EBeam2Method
    {
        PEB2M_Distance = 0,
        PEB2M_Target = 1,
        PEB2M_Branch = 2,
        PEB2M_MAX = 3
    };

    enum class EMeshCameraFacingOptions : uint8_t //Enum Engine.EMeshCameraFacingOptions
    {
        XAxisFacing_NoUp = 0,
        XAxisFacing_ZUp = 1,
        XAxisFacing_NegativeZUp = 2,
        XAxisFacing_YUp = 3,
        XAxisFacing_NegativeYUp = 4,
        LockedAxis_ZAxisFacing = 5,
        LockedAxis_NegativeZAxisFacing = 6,
        LockedAxis_YAxisFacing = 7,
        LockedAxis_NegativeYAxisFacing = 8,
        VelocityAligned_ZAxisFacing = 9,
        VelocityAligned_NegativeZAxisFacing = 10,
        VelocityAligned_YAxisFacing = 11,
        VelocityAligned_NegativeYAxisFacing = 12,
        EMeshCameraFacingOptions_MAX = 13
    };

    enum class EMeshCameraFacingUpAxis : uint8_t //Enum Engine.EMeshCameraFacingUpAxis
    {
        CameraFacing_NoneUP = 0,
        CameraFacing_ZUp = 1,
        CameraFacing_NegativeZUp = 2,
        CameraFacing_YUp = 3,
        CameraFacing_NegativeYUp = 4,
        CameraFacing_MAX = 5
    };

    enum class EMeshScreenAlignment : uint8_t //Enum Engine.EMeshScreenAlignment
    {
        PSMA_MeshFaceCameraWithRoll = 0,
        PSMA_MeshFaceCameraWithSpin = 1,
        PSMA_MeshFaceCameraWithLockedAxis = 2,
        PSMA_MAX = 3
    };

    enum class ETrailsRenderAxisOption : uint8_t //Enum Engine.ETrailsRenderAxisOption
    {
        Trails_CameraUp = 0,
        Trails_SourceUp = 1,
        Trails_WorldUp = 2,
        Trails_MAX = 3
    };

    enum class EParticleScreenAlignment : uint8_t //Enum Engine.EParticleScreenAlignment
    {
        PSA_FacingCameraPosition = 0,
        PSA_Square = 1,
        PSA_Rectangle = 2,
        PSA_Velocity = 3,
        PSA_AwayFromCenter = 4,
        PSA_TypeSpecific = 5,
        PSA_FacingCameraDistanceBlend = 6,
        PSA_MAX = 7
    };

    enum class EParticleSystemOcclusionBoundsMethod : uint8_t //Enum Engine.EParticleSystemOcclusionBoundsMethod
    {
        EPSOBM_None = 0,
        EPSOBM_ParticleBounds = 1,
        EPSOBM_CustomBounds = 2,
        EPSOBM_MAX = 3
    };

    enum class ParticleSystemLODMethod : uint8_t //Enum Engine.ParticleSystemLODMethod
    {
        PARTICLESYSTEMLODMETHOD_Automatic = 0,
        PARTICLESYSTEMLODMETHOD_DirectSet = 1,
        PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
        PARTICLESYSTEMLODMETHOD_MAX = 3
    };

    enum class EParticleSystemUpdateMode : uint8_t //Enum Engine.EParticleSystemUpdateMode
    {
        EPSUM_RealTime = 0,
        EPSUM_FixedTime = 1,
        EPSUM_MAX = 2
    };

    enum class EParticleEventType : uint8_t //Enum Engine.EParticleEventType
    {
        EPET_Any = 0,
        EPET_Spawn = 1,
        EPET_Death = 2,
        EPET_Collision = 3,
        EPET_Burst = 4,
        EPET_Blueprint = 5,
        EPET_MAX = 6
    };

    enum class ParticleReplayState : uint8_t //Enum Engine.ParticleReplayState
    {
        PRS_Disabled = 0,
        PRS_Capturing = 1,
        PRS_Replaying = 2,
        PRS_MAX = 3
    };

    enum class EParticleSysParamType : uint8_t //Enum Engine.EParticleSysParamType
    {
        PSPT_None = 0,
        PSPT_Scalar = 1,
        PSPT_ScalarRand = 2,
        PSPT_Vector = 3,
        PSPT_VectorRand = 4,
        PSPT_Color = 5,
        PSPT_Actor = 6,
        PSPT_Material = 7,
        PSPT_VectorUnitRand = 8,
        PSPT_MAX = 9
    };

    enum class EPhysicsAssetSolverType : uint8_t //Enum Engine.EPhysicsAssetSolverType
    {
        RBAN = 0,
        World = 1,
        EPhysicsAssetSolverType_MAX = 2
    };

    enum class ESettingsLockedAxis : uint8_t //Enum Engine.ESettingsLockedAxis
    {
        None = 0,
        X = 1,
        Y = 2,
        Z = 3,
        Invalid = 4,
        ESettingsLockedAxis_MAX = 5
    };

    enum class ESettingsDOF : uint8_t //Enum Engine.ESettingsDOF
    {
        Full3D = 0,
        YZPlane = 1,
        XZPlane = 2,
        XYPlane = 3,
        ESettingsDOF_MAX = 4
    };

    enum class ERendererStencilMask : uint8_t //Enum Engine.ERendererStencilMask
    {
        ERSM_Default = 0,
        ERSM_256 = 1,
        ERSM_2 = 2,
        ERSM_3 = 3,
        ERSM_5 = 4,
        ERSM_9 = 5,
        ERSM_17 = 6,
        ERSM_33 = 7,
        ERSM_65 = 8,
        ERSM_129 = 9,
        ERSM_MAX = 10
    };

    enum class EHasCustomNavigableGeometry : uint8_t //Enum Engine.EHasCustomNavigableGeometry
    {
        No = 0,
        Yes = 1,
        EvenIfNotCollidable = 2,
        DontExport = 3,
        EHasCustomNavigableGeometry_MAX = 4
    };

    enum class ECanBeCharacterBase : uint8_t //Enum Engine.ECanBeCharacterBase
    {
        ECB_No = 0,
        ECB_Yes = 1,
        ECB_Owner = 2,
        ECB_MAX = 3
    };

    enum class EQuarztQuantizationReference : uint8_t //Enum Engine.EQuarztQuantizationReference
    {
        BarRelative = 0,
        TransportRelative = 1,
        CurrentTimeRelative = 2,
        Count = 3,
        EQuarztQuantizationReference_MAX = 4
    };

    enum class EQuartzDelegateType : uint8_t //Enum Engine.EQuartzDelegateType
    {
        MetronomeTick = 0,
        CommandEvent = 1,
        Count = 2,
        EQuartzDelegateType_MAX = 3
    };

    enum class EQuartzTimeSignatureQuantization : uint8_t //Enum Engine.EQuartzTimeSignatureQuantization
    {
        HalfNote = 0,
        QuarterNote = 1,
        EighthNote = 2,
        SixteenthNote = 3,
        ThirtySecondNote = 4,
        Count = 5,
        EQuartzTimeSignatureQuantization_MAX = 6
    };

    enum class ERichCurveExtrapolation : uint8_t //Enum Engine.ERichCurveExtrapolation
    {
        RCCE_Cycle = 0,
        RCCE_CycleWithOffset = 1,
        RCCE_Oscillate = 2,
        RCCE_Linear = 3,
        RCCE_Constant = 4,
        RCCE_None = 5,
        RCCE_MAX = 6
    };

    enum class ERichCurveInterpMode : uint8_t //Enum Engine.ERichCurveInterpMode
    {
        RCIM_Linear = 0,
        RCIM_Constant = 1,
        RCIM_Cubic = 2,
        RCIM_None = 3,
        RCIM_MAX = 4
    };

    enum class EMobileReflectionCompression : uint8_t //Enum Engine.EMobileReflectionCompression
    {
        Default = 0,
        On = 1,
        Off = 2,
        EMobileReflectionCompression_MAX = 3
    };

    enum class EReflectionSourceType : uint8_t //Enum Engine.EReflectionSourceType
    {
        CapturedScene = 0,
        SpecifiedCubemap = 1,
        EReflectionSourceType_MAX = 2
    };

    enum class EFixedFoveationLevels : uint8_t //Enum Engine.EFixedFoveationLevels
    {
        Disabled = 0,
        Low = 1,
        Medium = 2,
        High = 3,
        EFixedFoveationLevels_MAX = 4
    };

    enum class EDefaultBackBufferPixelFormat : uint8_t //Enum Engine.EDefaultBackBufferPixelFormat
    {
        DBBPF_B8G8R8A8 = 0,
        DBBPF_A16B16G16R16_DEPRECATED = 1,
        DBBPF_FloatRGB_DEPRECATED = 2,
        DBBPF_FloatRGBA = 3,
        DBBPF_A2B10G10R10 = 4,
        DBBPF_MAX = 5
    };

    enum class EAutoExposureMethodUI : uint8_t //Enum Engine.EAutoExposureMethodUI
    {
        AEM_Histogram = 0,
        AEM_Basic = 1,
        AEM_Manual = 2,
        AEM_MAX = 3
    };

    enum class EAlphaChannelMode : uint8_t //Enum Engine.EAlphaChannelMode
    {
        Disabled = 0,
        LinearColorSpaceOnly = 1,
        AllowThroughTonemapper = 2,
        EAlphaChannelMode_MAX = 3
    };

    enum class EEarlyZPass : uint8_t //Enum Engine.EEarlyZPass
    {
        None = 0,
        OpaqueOnly = 1,
        OpaqueAndMasked = 2,
        Auto = 3,
        EEarlyZPass_MAX = 4
    };

    enum class ECustomDepthStencil : uint8_t //Enum Engine.ECustomDepthStencil
    {
        Disabled = 0,
        Enabled = 1,
        EnabledOnDemand = 2,
        EnabledWithStencil = 3,
        ECustomDepthStencil_MAX = 4
    };

    enum class EMobileMSAASampleCount : uint8_t //Enum Engine.EMobileMSAASampleCount
    {
        One = 1,
        Two = 2,
        Four = 4,
        Eight = 8,
        EMobileMSAASampleCount_MAX = 9
    };

    enum class ECompositingSampleCount : uint8_t //Enum Engine.ECompositingSampleCount
    {
        One = 1,
        Two = 2,
        Four = 4,
        Eight = 8,
        ECompositingSampleCount_MAX = 9
    };

    enum class EClearSceneOptions : uint8_t //Enum Engine.EClearSceneOptions
    {
        NoClear = 0,
        HardwareClear = 1,
        QuadAtMaxZ = 2,
        EClearSceneOptions_MAX = 3
    };

    enum class EReporterLineStyle : uint8_t //Enum Engine.EReporterLineStyle
    {
        Line = 0,
        Dash = 1,
        EReporterLineStyle_MAX = 2
    };

    enum class ELegendPosition : uint8_t //Enum Engine.ELegendPosition
    {
        Outside = 0,
        Inside = 1,
        ELegendPosition_MAX = 2
    };

    enum class EGraphDataStyle : uint8_t //Enum Engine.EGraphDataStyle
    {
        Lines = 0,
        Filled = 1,
        EGraphDataStyle_MAX = 2
    };

    enum class EGraphAxisStyle : uint8_t //Enum Engine.EGraphAxisStyle
    {
        Lines = 0,
        Notches = 1,
        Grid = 2,
        EGraphAxisStyle_MAX = 3
    };

    enum class ReverbPreset : uint8_t //Enum Engine.ReverbPreset
    {
        REVERB_Default = 0,
        REVERB_Bathroom = 1,
        REVERB_StoneRoom = 2,
        REVERB_Auditorium = 3,
        REVERB_ConcertHall = 4,
        REVERB_Cave = 5,
        REVERB_Hallway = 6,
        REVERB_StoneCorridor = 7,
        REVERB_Alley = 8,
        REVERB_Forest = 9,
        REVERB_City = 10,
        REVERB_Mountains = 11,
        REVERB_Quarry = 12,
        REVERB_Plain = 13,
        REVERB_ParkingLot = 14,
        REVERB_SewerPipe = 15,
        REVERB_Underwater = 16,
        REVERB_SmallRoom = 17,
        REVERB_MediumRoom = 18,
        REVERB_LargeRoom = 19,
        REVERB_MediumHall = 20,
        REVERB_LargeHall = 21,
        REVERB_Plate = 22,
        REVERB_MAX = 23
    };

    enum class ERichCurveKeyTimeCompressionFormat : uint8_t //Enum Engine.ERichCurveKeyTimeCompressionFormat
    {
        RCKTCF_uint16 = 0,
        RCKTCF_float32 = 1,
        RCKTCF_MAX = 2
    };

    enum class ERichCurveCompressionFormat : uint8_t //Enum Engine.ERichCurveCompressionFormat
    {
        RCCF_Empty = 0,
        RCCF_Constant = 1,
        RCCF_Linear = 2,
        RCCF_Cubic = 3,
        RCCF_Mixed = 4,
        RCCF_Weighted = 5,
        RCCF_MAX = 6
    };

    enum class ERichCurveTangentWeightMode : uint8_t //Enum Engine.ERichCurveTangentWeightMode
    {
        RCTWM_WeightedNone = 0,
        RCTWM_WeightedArrive = 1,
        RCTWM_WeightedLeave = 2,
        RCTWM_WeightedBoth = 3,
        RCTWM_MAX = 4
    };

    enum class ERichCurveTangentMode : uint8_t //Enum Engine.ERichCurveTangentMode
    {
        RCTM_Auto = 0,
        RCTM_User = 1,
        RCTM_Break = 2,
        RCTM_None = 3,
        RCTM_MAX = 4
    };

    enum class EConstraintTransform : uint8_t //Enum Engine.EConstraintTransform
    {
        Absolute = 0,
        Relative = 1,
        EConstraintTransform_MAX = 2
    };

    enum class EControlConstraint : uint8_t //Enum Engine.EControlConstraint
    {
        Orientation = 0,
        Translation = 1,
        MAX = 2
    };

    enum class ERootMotionFinishVelocityMode : uint8_t //Enum Engine.ERootMotionFinishVelocityMode
    {
        MaintainLastRootMotionVelocity = 0,
        SetVelocity = 1,
        ClampVelocity = 2,
        ERootMotionFinishVelocityMode_MAX = 3
    };

    enum class ERootMotionSourceSettingsFlags : uint8_t //Enum Engine.ERootMotionSourceSettingsFlags
    {
        UseSensitiveLiftoffCheck = 1,
        DisablePartialEndTick = 2,
        IgnoreZAccumulate = 4,
        ERootMotionSourceSettingsFlags_MAX = 5
    };

    enum class ERootMotionSourceStatusFlags : uint8_t //Enum Engine.ERootMotionSourceStatusFlags
    {
        Prepared = 1,
        Finished = 2,
        MarkedForRemoval = 4,
        ERootMotionSourceStatusFlags_MAX = 5
    };

    enum class ERootMotionAccumulateMode : uint8_t //Enum Engine.ERootMotionAccumulateMode
    {
        Override = 0,
        Additive = 1,
        ERootMotionAccumulateMode_MAX = 2
    };

    enum class ERuntimeVirtualTextureMainPassType : uint8_t //Enum Engine.ERuntimeVirtualTextureMainPassType
    {
        Never = 0,
        Exclusive = 1,
        Always = 2,
        ERuntimeVirtualTextureMainPassType_MAX = 3
    };

    enum class ERuntimeVirtualTextureMaterialType : uint8_t //Enum Engine.ERuntimeVirtualTextureMaterialType
    {
        BaseColor = 0,
        BaseColor_Normal_DEPRECATED = 1,
        BaseColor_Normal_Specular = 2,
        BaseColor_Normal_Specular_YCoCg = 3,
        BaseColor_Normal_Specular_Mask_YCoCg = 4,
        WorldHeight = 5,
        Count = 6,
        ERuntimeVirtualTextureMaterialType_MAX = 7
    };

    enum class EMobilePixelProjectedReflectionQuality : uint8_t //Enum Engine.EMobilePixelProjectedReflectionQuality
    {
        Disabled = 0,
        BestPerformance = 1,
        BetterQuality = 2,
        BestQuality = 3,
        EMobilePixelProjectedReflectionQuality_MAX = 4
    };

    enum class EMobilePlanarReflectionMode : uint8_t //Enum Engine.EMobilePlanarReflectionMode
    {
        Usual = 0,
        MobilePPRExclusive = 1,
        MobilePPR = 2,
        EMobilePlanarReflectionMode_MAX = 3
    };

    enum class EReflectedAndRefractedRayTracedShadows : uint8_t //Enum Engine.EReflectedAndRefractedRayTracedShadows
    {
        Disabled = 0,
        Hard_shadows = 1,
        Area_shadows = 2,
        EReflectedAndRefractedRayTracedShadows_MAX = 3
    };

    enum class ERayTracingGlobalIlluminationType : uint8_t //Enum Engine.ERayTracingGlobalIlluminationType
    {
        Disabled = 0,
        BruteForce = 1,
        FinalGather = 2,
        ERayTracingGlobalIlluminationType_MAX = 3
    };

    enum class ETranslucencyType : uint8_t //Enum Engine.ETranslucencyType
    {
        Raster = 0,
        RayTracing = 1,
        ETranslucencyType_MAX = 2
    };

    enum class EReflectionsType : uint8_t //Enum Engine.EReflectionsType
    {
        ScreenSpace = 0,
        RayTracing = 1,
        EReflectionsType_MAX = 2
    };

    enum class ELightUnits : uint8_t //Enum Engine.ELightUnits
    {
        Unitless = 0,
        Candelas = 1,
        Lumens = 2,
        ELightUnits_MAX = 3
    };

    enum class ETemperatureMethod : uint8_t //Enum Engine.ETemperatureMethod
    {
        TEMP_WhiteBalance = 0,
        TEMP_ColorTemperature = 1,
        TEMP_MAX = 2
    };

    enum class EBloomMethod : uint8_t //Enum Engine.EBloomMethod
    {
        BM_SOG = 0,
        BM_FFT = 1,
        BM_MAX = 2
    };

    enum class EAutoExposureMethod : uint8_t //Enum Engine.EAutoExposureMethod
    {
        AEM_Histogram = 0,
        AEM_Basic = 1,
        AEM_Manual = 2,
        AEM_MAX = 3
    };

    enum class EAntiAliasingMethod : uint8_t //Enum Engine.EAntiAliasingMethod
    {
        AAM_None = 0,
        AAM_FXAA = 1,
        AAM_TemporalAA = 2,
        AAM_MSAA = 3,
        AAM_MAX = 4
    };

    enum class EDepthOfFieldMethod : uint8_t //Enum Engine.EDepthOfFieldMethod
    {
        DOFM_BokehDOF = 0,
        DOFM_Gaussian = 1,
        DOFM_CircleDOF = 2,
        DOFM_MAX = 3
    };

    enum class ESceneCapturePrimitiveRenderMode : uint8_t //Enum Engine.ESceneCapturePrimitiveRenderMode
    {
        PRM_LegacySceneCapture = 0,
        PRM_RenderScenePrimitives = 1,
        PRM_UseShowOnlyList = 2,
        PRM_MAX = 3
    };

    enum class EMaterialProperty : uint8_t //Enum Engine.EMaterialProperty
    {
        MP_EmissiveColor = 0,
        MP_Opacity = 1,
        MP_OpacityMask = 2,
        MP_DiffuseColor = 3,
        MP_SpecularColor = 4,
        MP_BaseColor = 5,
        MP_Metallic = 6,
        MP_Specular = 7,
        MP_Roughness = 8,
        MP_Anisotropy = 9,
        MP_Normal = 10,
        MP_Tangent = 11,
        MP_WorldPositionOffset = 12,
        MP_WorldDisplacement = 13,
        MP_TessellationMultiplier = 14,
        MP_SubsurfaceColor = 15,
        MP_CustomData0 = 16,
        MP_CustomData1 = 17,
        MP_AmbientOcclusion = 18,
        MP_Refraction = 19,
        MP_CustomizedUVs0 = 20,
        MP_CustomizedUVs1 = 21,
        MP_CustomizedUVs2 = 22,
        MP_CustomizedUVs3 = 23,
        MP_CustomizedUVs4 = 24,
        MP_CustomizedUVs5 = 25,
        MP_CustomizedUVs6 = 26,
        MP_CustomizedUVs7 = 27,
        MP_PixelDepthOffset = 28,
        MP_ShadingModel = 29,
        MP_MaterialAttributes = 30,
        MP_CustomOutput = 31,
        MP_MAX = 32
    };

    enum class ESkinCacheDefaultBehavior : uint8_t //Enum Engine.ESkinCacheDefaultBehavior
    {
        Exclusive = 0,
        Inclusive = 1,
        ESkinCacheDefaultBehavior_MAX = 2
    };

    enum class ESkinCacheUsage : uint32_t //Enum Engine.ESkinCacheUsage
    {
        Auto = 0,
        Disabled = 255,
        Enabled = 1,
        ESkinCacheUsage_MAX = 256
    };

    enum class EPhysicsTransformUpdateMode : uint8_t //Enum Engine.EPhysicsTransformUpdateMode
    {
        SimulationUpatesComponentTransform = 0,
        ComponentTransformIsKinematic = 1,
        EPhysicsTransformUpdateMode_MAX = 2
    };

    enum class EAnimationMode : uint8_t //Enum Engine.EAnimationMode
    {
        AnimationBlueprint = 0,
        AnimationSingleNode = 1,
        AnimationCustomMode = 2,
        EAnimationMode_MAX = 3
    };

    enum class EKinematicBonesUpdateToPhysics : uint8_t //Enum Engine.EKinematicBonesUpdateToPhysics
    {
        SkipSimulatingBones = 0,
        SkipAllBones = 1,
        EKinematicBonesUpdateToPhysics_MAX = 2
    };

    enum class ECustomBoneAttributeLookup : uint8_t //Enum Engine.ECustomBoneAttributeLookup
    {
        BoneOnly = 0,
        ImmediateParent = 1,
        ParentHierarchy = 2,
        ECustomBoneAttributeLookup_MAX = 3
    };

    enum class EAnimCurveType : uint8_t //Enum Engine.EAnimCurveType
    {
        AttributeCurve = 0,
        MaterialCurve = 1,
        MorphTargetCurve = 2,
        MaxAnimCurveType = 3,
        EAnimCurveType_MAX = 4
    };

    enum class ESkeletalMeshSkinningImportVersions : uint8_t //Enum Engine.ESkeletalMeshSkinningImportVersions
    {
        Before_Versionning = 0,
        SkeletalMeshBuildRefactor = 1,
        VersionPlusOne = 2,
        LatestVersion = 1,
        ESkeletalMeshSkinningImportVersions_MAX = 3
    };

    enum class ESkeletalMeshGeoImportVersions : uint8_t //Enum Engine.ESkeletalMeshGeoImportVersions
    {
        Before_Versionning = 0,
        SkeletalMeshBuildRefactor = 1,
        VersionPlusOne = 2,
        LatestVersion = 1,
        ESkeletalMeshGeoImportVersions_MAX = 3
    };

    enum class EBoneFilterActionOption : uint8_t //Enum Engine.EBoneFilterActionOption
    {
        Remove = 0,
        Keep = 1,
        Invalid = 2,
        EBoneFilterActionOption_MAX = 3
    };

    enum class SkeletalMeshOptimizationImportance : uint8_t //Enum Engine.SkeletalMeshOptimizationImportance
    {
        SMOI_Off = 0,
        SMOI_Lowest = 1,
        SMOI_Low = 2,
        SMOI_Normal = 3,
        SMOI_High = 4,
        SMOI_Highest = 5,
        SMOI_MAX = 6
    };

    enum class SkeletalMeshOptimizationType : uint8_t //Enum Engine.SkeletalMeshOptimizationType
    {
        SMOT_NumOfTriangles = 0,
        SMOT_MaxDeviation = 1,
        SMOT_TriangleOrDeviation = 2,
        SMOT_MAX = 3
    };

    enum class SkeletalMeshTerminationCriterion : uint8_t //Enum Engine.SkeletalMeshTerminationCriterion
    {
        SMTC_NumOfTriangles = 0,
        SMTC_NumOfVerts = 1,
        SMTC_TriangleOrVert = 2,
        SMTC_AbsNumOfTriangles = 3,
        SMTC_AbsNumOfVerts = 4,
        SMTC_AbsTriangleOrVert = 5,
        SMTC_MAX = 6
    };

    enum class EBoneTranslationRetargetingMode : uint8_t //Enum Engine.EBoneTranslationRetargetingMode
    {
        Animation = 0,
        Skeleton = 1,
        AnimationScaled = 2,
        AnimationRelative = 3,
        OrientAndScale = 4,
        EBoneTranslationRetargetingMode_MAX = 5
    };

    enum class EVertexOffsetUsageType : uint8_t //Enum Engine.EVertexOffsetUsageType
    {
        None = 0,
        PreSkinningOffset = 1,
        PostSkinningOffset = 2,
        EVertexOffsetUsageType_MAX = 3
    };

    enum class EBoneSpaces : uint8_t //Enum Engine.EBoneSpaces
    {
        WorldSpace = 0,
        ComponentSpace = 1,
        EBoneSpaces_MAX = 2
    };

    enum class EVisibilityBasedAnimTickOption : uint8_t //Enum Engine.EVisibilityBasedAnimTickOption
    {
        AlwaysTickPoseAndRefreshBones = 0,
        AlwaysTickPose = 1,
        OnlyTickMontagesWhenNotRendered = 2,
        OnlyTickPoseWhenRendered = 3,
        EVisibilityBasedAnimTickOption_MAX = 4
    };

    enum class EPhysBodyOp : uint8_t //Enum Engine.EPhysBodyOp
    {
        PBO_None = 0,
        PBO_Term = 1,
        PBO_MAX = 2
    };

    enum class EBoneVisibilityStatus : uint8_t //Enum Engine.EBoneVisibilityStatus
    {
        BVS_HiddenByParent = 0,
        BVS_Visible = 1,
        BVS_ExplicitlyHidden = 2,
        BVS_MAX = 3
    };

    enum class ESkyAtmosphereTransformMode : uint8_t //Enum Engine.ESkyAtmosphereTransformMode
    {
        PlanetTopAtAbsoluteWorldOrigin = 0,
        PlanetTopAtComponentTransform = 1,
        PlanetCenterAtComponentTransform = 2,
        ESkyAtmosphereTransformMode_MAX = 3
    };

    enum class ESkyLightSourceType : uint8_t //Enum Engine.ESkyLightSourceType
    {
        SLS_CapturedScene = 0,
        SLS_SpecifiedCubemap = 1,
        SLS_MAX = 2
    };

    enum class EPriorityAttenuationMethod : uint8_t //Enum Engine.EPriorityAttenuationMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        EPriorityAttenuationMethod_MAX = 3
    };

    enum class ESubmixSendMethod : uint8_t //Enum Engine.ESubmixSendMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        ESubmixSendMethod_MAX = 3
    };

    enum class EReverbSendMethod : uint8_t //Enum Engine.EReverbSendMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        EReverbSendMethod_MAX = 3
    };

    enum class EAirAbsorptionMethod : uint8_t //Enum Engine.EAirAbsorptionMethod
    {
        Linear = 0,
        CustomCurve = 1,
        EAirAbsorptionMethod_MAX = 2
    };

    enum class ESoundSpatializationAlgorithm : uint8_t //Enum Engine.ESoundSpatializationAlgorithm
    {
        SPATIALIZATION_Default = 0,
        SPATIALIZATION_HRTF = 1,
        SPATIALIZATION_MAX = 2
    };

    enum class ESoundDistanceCalc : uint8_t //Enum Engine.ESoundDistanceCalc
    {
        SOUNDDISTANCE_Normal = 0,
        SOUNDDISTANCE_InfiniteXYPlane = 1,
        SOUNDDISTANCE_InfiniteXZPlane = 2,
        SOUNDDISTANCE_InfiniteYZPlane = 3,
        SOUNDDISTANCE_MAX = 4
    };

    enum class EVirtualizationMode : uint8_t //Enum Engine.EVirtualizationMode
    {
        Disabled = 0,
        PlayWhenSilent = 1,
        Restart = 2,
        EVirtualizationMode_MAX = 3
    };

    enum class EConcurrencyVolumeScaleMode : uint8_t //Enum Engine.EConcurrencyVolumeScaleMode
    {
        Default = 0,
        Distance = 1,
        Priority = 2,
        EConcurrencyVolumeScaleMode_MAX = 3
    };

    enum class EMaxConcurrentResolutionRule : uint8_t //Enum Engine.EMaxConcurrentResolutionRule
    {
        PreventNew = 0,
        StopOldest = 1,
        StopFarthestThenPreventNew = 2,
        StopFarthestThenOldest = 3,
        StopLowestPriority = 4,
        StopQuietest = 5,
        StopLowestPriorityThenPreventNew = 6,
        Count = 7,
        EMaxConcurrentResolutionRule_MAX = 8
    };

    enum class ESoundGroup : uint8_t //Enum Engine.ESoundGroup
    {
        SOUNDGROUP_Default = 0,
        SOUNDGROUP_Effects = 1,
        SOUNDGROUP_UI = 2,
        SOUNDGROUP_Music = 3,
        SOUNDGROUP_Voice = 4,
        SOUNDGROUP_GameSoundGroup1 = 5,
        SOUNDGROUP_GameSoundGroup2 = 6,
        SOUNDGROUP_GameSoundGroup3 = 7,
        SOUNDGROUP_GameSoundGroup4 = 8,
        SOUNDGROUP_GameSoundGroup5 = 9,
        SOUNDGROUP_GameSoundGroup6 = 10,
        SOUNDGROUP_GameSoundGroup7 = 11,
        SOUNDGROUP_GameSoundGroup8 = 12,
        SOUNDGROUP_GameSoundGroup9 = 13,
        SOUNDGROUP_GameSoundGroup10 = 14,
        SOUNDGROUP_GameSoundGroup11 = 15,
        SOUNDGROUP_GameSoundGroup12 = 16,
        SOUNDGROUP_GameSoundGroup13 = 17,
        SOUNDGROUP_GameSoundGroup14 = 18,
        SOUNDGROUP_GameSoundGroup15 = 19,
        SOUNDGROUP_GameSoundGroup16 = 20,
        SOUNDGROUP_GameSoundGroup17 = 21,
        SOUNDGROUP_GameSoundGroup18 = 22,
        SOUNDGROUP_GameSoundGroup19 = 23,
        SOUNDGROUP_GameSoundGroup20 = 24,
        SOUNDGROUP_MAX = 25
    };

    enum class EModulationRouting : uint8_t //Enum Engine.EModulationRouting
    {
        Disable = 0,
        Inherit = 1,
        Override = 2,
        EModulationRouting_MAX = 3
    };

    enum class ModulationParamMode : uint8_t //Enum Engine.ModulationParamMode
    {
        MPM_Normal = 0,
        MPM_Abs = 1,
        MPM_Direct = 2,
        MPM_MAX = 3
    };

    enum class ESourceBusChannels : uint8_t //Enum Engine.ESourceBusChannels
    {
        Mono = 0,
        Stereo = 1,
        ESourceBusChannels_MAX = 2
    };

    enum class ESourceBusSendLevelControlMethod : uint8_t //Enum Engine.ESourceBusSendLevelControlMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        ESourceBusSendLevelControlMethod_MAX = 3
    };

    enum class EGainParamMode : uint8_t //Enum Engine.EGainParamMode
    {
        Linear = 0,
        Decibels = 1,
        EGainParamMode_MAX = 2
    };

    enum class EAudioSpectrumType : uint8_t //Enum Engine.EAudioSpectrumType
    {
        MagnitudeSpectrum = 0,
        PowerSpectrum = 1,
        Decibel = 2,
        EAudioSpectrumType_MAX = 3
    };

    enum class EFFTWindowType : uint8_t //Enum Engine.EFFTWindowType
    {
        None = 0,
        Hamming = 1,
        Hann = 2,
        Blackman = 3,
        EFFTWindowType_MAX = 4
    };

    enum class EFFTPeakInterpolationMethod : uint8_t //Enum Engine.EFFTPeakInterpolationMethod
    {
        NearestNeighbor = 0,
        Linear = 1,
        Quadratic = 2,
        ConstantQ = 3,
        EFFTPeakInterpolationMethod_MAX = 4
    };

    enum class EFFTSize : uint8_t //Enum Engine.EFFTSize
    {
        DefaultSize = 0,
        Min = 1,
        Small = 2,
        Medium = 3,
        Large = 4,
        VeryLarge = 5,
        Max = 6
    };

    enum class ESubmixSendStage : uint8_t //Enum Engine.ESubmixSendStage
    {
        PostDistanceAttenuation = 0,
        PreDistanceAttenuation = 1,
        ESubmixSendStage_MAX = 2
    };

    enum class ESendLevelControlMethod : uint8_t //Enum Engine.ESendLevelControlMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        ESendLevelControlMethod_MAX = 3
    };

    enum class EAudioRecordingExportType : uint8_t //Enum Engine.EAudioRecordingExportType
    {
        SoundWave = 0,
        WavFile = 1,
        EAudioRecordingExportType_MAX = 2
    };

    enum class EAudioSpectrumBandPresetType : uint8_t //Enum Engine.EAudioSpectrumBandPresetType
    {
        KickDrum = 0,
        SnareDrum = 1,
        Voice = 2,
        Cymbals = 3,
        EAudioSpectrumBandPresetType_MAX = 4
    };

    enum class ESoundWaveFFTSize : uint8_t //Enum Engine.ESoundWaveFFTSize
    {
        VerySmall_65 = 0,
        Small_257 = 1,
        Medium_513 = 2,
        Large_1025 = 3,
        VeryLarge_2049 = 4,
        ESoundWaveFFTSize_MAX = 5
    };

    enum class EDecompressionType : uint8_t //Enum Engine.EDecompressionType
    {
        DTYPE_Setup = 0,
        DTYPE_Invalid = 1,
        DTYPE_Preview = 2,
        DTYPE_Native = 3,
        DTYPE_RealTime = 4,
        DTYPE_Procedural = 5,
        DTYPE_Xenon = 6,
        DTYPE_Streaming = 7,
        DTYPE_MAX = 8
    };

    enum class ESoundWaveLoadingBehavior : uint32_t //Enum Engine.ESoundWaveLoadingBehavior
    {
        Inherited = 0,
        RetainOnLoad = 1,
        PrimeOnLoad = 2,
        LoadOnDemand = 3,
        ForceInline = 4,
        Uninitialized = 255,
        ESoundWaveLoadingBehavior_MAX = 256
    };

    enum class ESplineCoordinateSpace : uint8_t //Enum Engine.ESplineCoordinateSpace
    {
        Local = 0,
        World = 1,
        ESplineCoordinateSpace_MAX = 2
    };

    enum class ESplinePointType : uint8_t //Enum Engine.ESplinePointType
    {
        Linear = 0,
        Curve = 1,
        Constant = 2,
        CurveClamped = 3,
        CurveCustomTangent = 4,
        ESplinePointType_MAX = 5
    };

    enum class ESplineMeshAxis : uint8_t //Enum Engine.ESplineMeshAxis
    {
        X = 0,
        Y = 1,
        Z = 2,
        ESplineMeshAxis_MAX = 3
    };

    enum class EOptimizationType : uint8_t //Enum Engine.EOptimizationType
    {
        OT_NumOfTriangles = 0,
        OT_MaxDeviation = 1,
        OT_MAX = 2
    };

    enum class EImportanceLevel : uint8_t //Enum Engine.EImportanceLevel
    {
        IL_Off = 0,
        IL_Lowest = 1,
        IL_Low = 2,
        IL_Normal = 3,
        IL_High = 4,
        IL_Highest = 5,
        TEMP_BROKEN2 = 6,
        EImportanceLevel_MAX = 7
    };

    enum class ENormalMode : uint8_t //Enum Engine.ENormalMode
    {
        NM_PreserveSmoothingGroups = 0,
        NM_RecalculateNormals = 1,
        NM_RecalculateNormalsSmooth = 2,
        NM_RecalculateNormalsHard = 3,
        TEMP_BROKEN = 4,
        ENormalMode_MAX = 5
    };

    enum class EStereoLayerShape : uint8_t //Enum Engine.EStereoLayerShape
    {
        SLSH_QuadLayer = 0,
        SLSH_CylinderLayer = 1,
        SLSH_CubemapLayer = 2,
        SLSH_EquirectLayer = 3,
        SLSH_MAX = 4
    };

    enum class EStereoLayerType : uint8_t //Enum Engine.EStereoLayerType
    {
        SLT_WorldLocked = 0,
        SLT_TrackerLocked = 1,
        SLT_FaceLocked = 2,
        SLT_MAX = 3
    };

    enum class EOpacitySourceMode : uint8_t //Enum Engine.EOpacitySourceMode
    {
        OSM_Alpha = 0,
        OSM_ColorBrightness = 1,
        OSM_RedChannel = 2,
        OSM_GreenChannel = 3,
        OSM_BlueChannel = 4,
        OSM_MAX = 5
    };

    enum class ESubUVBoundingVertexCount : uint8_t //Enum Engine.ESubUVBoundingVertexCount
    {
        BVC_FourVertices = 0,
        BVC_EightVertices = 1,
        BVC_MAX = 2
    };

    enum class EVerticalTextAligment : uint8_t //Enum Engine.EVerticalTextAligment
    {
        EVRTA_TextTop = 0,
        EVRTA_TextCenter = 1,
        EVRTA_TextBottom = 2,
        EVRTA_QuadTop = 3,
        EVRTA_MAX = 4
    };

    enum class EHorizTextAligment : uint8_t //Enum Engine.EHorizTextAligment
    {
        EHTA_Left = 0,
        EHTA_Center = 1,
        EHTA_Right = 2,
        EHTA_MAX = 3
    };

    enum class ETextureCompressionQuality : uint8_t //Enum Engine.ETextureCompressionQuality
    {
        TCQ_Default = 0,
        TCQ_Lowest = 1,
        TCQ_Low = 2,
        TCQ_Medium = 3,
        TCQ_High = 4,
        TCQ_Highest = 5,
        TCQ_MAX = 6
    };

    enum class ETextureSourceFormat : uint8_t //Enum Engine.ETextureSourceFormat
    {
        TSF_Invalid = 0,
        TSF_G8 = 1,
        TSF_BGRA8 = 2,
        TSF_BGRE8 = 3,
        TSF_RGBA16 = 4,
        TSF_RGBA16F = 5,
        TSF_RGBA8 = 6,
        TSF_RGBE8 = 7,
        TSF_G16 = 8,
        TSF_MAX = 9
    };

    enum class ETextureSourceArtType : uint8_t //Enum Engine.ETextureSourceArtType
    {
        TSAT_Uncompressed = 0,
        TSAT_PNGCompressed = 1,
        TSAT_DDSFile = 2,
        TSAT_MAX = 3
    };

    enum class ETextureMipCount : uint8_t //Enum Engine.ETextureMipCount
    {
        TMC_ResidentMips = 0,
        TMC_AllMips = 1,
        TMC_AllMipsBiased = 2,
        TMC_MAX = 3
    };

    enum class ECompositeTextureMode : uint8_t //Enum Engine.ECompositeTextureMode
    {
        CTM_Disabled = 0,
        CTM_NormalRoughnessToRed = 1,
        CTM_NormalRoughnessToGreen = 2,
        CTM_NormalRoughnessToBlue = 3,
        CTM_NormalRoughnessToAlpha = 4,
        CTM_MAX = 5
    };

    enum class TextureAddress : uint8_t //Enum Engine.TextureAddress
    {
        TA_Wrap = 0,
        TA_Clamp = 1,
        TA_Mirror = 2,
        TA_MAX = 3
    };

    enum class TextureFilter : uint8_t //Enum Engine.TextureFilter
    {
        TF_Nearest = 0,
        TF_Bilinear = 1,
        TF_Trilinear = 2,
        TF_Default = 3,
        TF_MAX = 4
    };

    enum class TextureCompressionSettings : uint8_t //Enum Engine.TextureCompressionSettings
    {
        TC_Default = 0,
        TC_Normalmap = 1,
        TC_Masks = 2,
        TC_Grayscale = 3,
        TC_Displacementmap = 4,
        TC_VectorDisplacementmap = 5,
        TC_HDR = 6,
        TC_EditorIcon = 7,
        TC_Alpha = 8,
        TC_DistanceFieldFont = 9,
        TC_HDR_Compressed = 10,
        TC_BC7 = 11,
        TC_HalfFloat = 12,
        TC_EncodedReflectionCapture = 13,
        TC_MAX = 14
    };

    enum class ETextureLossyCompressionAmount : uint8_t //Enum Engine.ETextureLossyCompressionAmount
    {
        TLCA_Default = 0,
        TLCA_None = 1,
        TLCA_Lowest = 2,
        TLCA_Low = 3,
        TLCA_Medium = 4,
        TLCA_High = 5,
        TLCA_Highest = 6,
        TLCA_MAX = 7
    };

    enum class ETextureDownscaleOptions : uint8_t //Enum Engine.ETextureDownscaleOptions
    {
        Default = 0,
        Unfiltered = 1,
        SimpleAverage = 2,
        Sharpen0 = 3,
        Sharpen1 = 4,
        Sharpen2 = 5,
        Sharpen3 = 6,
        Sharpen4 = 7,
        Sharpen5 = 8,
        Sharpen6 = 9,
        Sharpen7 = 10,
        Sharpen8 = 11,
        Sharpen9 = 12,
        Sharpen10 = 13,
        ETextureDownscaleOptions_MAX = 14
    };

    enum class ETextureMipLoadOptions : uint8_t //Enum Engine.ETextureMipLoadOptions
    {
        Default = 0,
        AllMips = 1,
        OnlyFirstMip = 2,
        ETextureMipLoadOptions_MAX = 3
    };

    enum class ETextureSamplerFilter : uint8_t //Enum Engine.ETextureSamplerFilter
    {
        Point = 0,
        Bilinear = 1,
        Trilinear = 2,
        AnisotropicPoint = 3,
        AnisotropicLinear = 4,
        ETextureSamplerFilter_MAX = 5
    };

    enum class ETexturePowerOfTwoSetting : uint8_t //Enum Engine.ETexturePowerOfTwoSetting
    {
        None = 0,
        PadToPowerOfTwo = 1,
        PadToSquarePowerOfTwo = 2,
        ETexturePowerOfTwoSetting_MAX = 3
    };

    enum class TextureMipGenSettings : uint8_t //Enum Engine.TextureMipGenSettings
    {
        TMGS_FromTextureGroup = 0,
        TMGS_SimpleAverage = 1,
        TMGS_Sharpen0 = 2,
        TMGS_Sharpen1 = 3,
        TMGS_Sharpen2 = 4,
        TMGS_Sharpen3 = 5,
        TMGS_Sharpen4 = 6,
        TMGS_Sharpen5 = 7,
        TMGS_Sharpen6 = 8,
        TMGS_Sharpen7 = 9,
        TMGS_Sharpen8 = 10,
        TMGS_Sharpen9 = 11,
        TMGS_Sharpen10 = 12,
        TMGS_NoMipmaps = 13,
        TMGS_LeaveExistingMips = 14,
        TMGS_Blur1 = 15,
        TMGS_Blur2 = 16,
        TMGS_Blur3 = 17,
        TMGS_Blur4 = 18,
        TMGS_Blur5 = 19,
        TMGS_Unfiltered = 20,
        TMGS_MAX = 21
    };

    enum class TextureGroup : uint8_t //Enum Engine.TextureGroup
    {
        TEXTUREGROUP_World = 0,
        TEXTUREGROUP_WorldNormalMap = 1,
        TEXTUREGROUP_WorldSpecular = 2,
        TEXTUREGROUP_WorldMask = 3,
        TEXTUREGROUP_Character = 4,
        TEXTUREGROUP_CharacterNormalMap = 5,
        TEXTUREGROUP_CharacterSpecular = 6,
        TEXTUREGROUP_CharacterMask = 7,
        TEXTUREGROUP_Weapon = 8,
        TEXTUREGROUP_WeaponNormalMap = 9,
        TEXTUREGROUP_WeaponSpecular = 10,
        TEXTUREGROUP_WeaponMask = 11,
        TEXTUREGROUP_Vehicle = 12,
        TEXTUREGROUP_VehicleNormalMap = 13,
        TEXTUREGROUP_VehicleSpecular = 14,
        TEXTUREGROUP_VehicleMask = 15,
        TEXTUREGROUP_Cinematic = 16,
        TEXTUREGROUP_Effects = 17,
        TEXTUREGROUP_EffectsNotFiltered = 18,
        TEXTUREGROUP_Skybox = 19,
        TEXTUREGROUP_UI = 20,
        TEXTUREGROUP_Lightmap = 21,
        TEXTUREGROUP_RenderTarget = 22,
        TEXTUREGROUP_MobileFlattened = 23,
        TEXTUREGROUP_ProcBuilding_Face = 24,
        TEXTUREGROUP_ProcBuilding_LightMap = 25,
        TEXTUREGROUP_Shadowmap = 26,
        TEXTUREGROUP_ColorLookupTable = 27,
        TEXTUREGROUP_Terrain_Heightmap = 28,
        TEXTUREGROUP_Terrain_Weightmap = 29,
        TEXTUREGROUP_Bokeh = 30,
        TEXTUREGROUP_IESLightProfile = 31,
        TEXTUREGROUP_Pixels2D = 32,
        TEXTUREGROUP_HierarchicalLOD = 33,
        TEXTUREGROUP_Impostor = 34,
        TEXTUREGROUP_ImpostorNormalDepth = 35,
        TEXTUREGROUP_8BitData = 36,
        TEXTUREGROUP_16BitData = 37,
        TEXTUREGROUP_Project01 = 38,
        TEXTUREGROUP_Project02 = 39,
        TEXTUREGROUP_Project03 = 40,
        TEXTUREGROUP_Project04 = 41,
        TEXTUREGROUP_Project05 = 42,
        TEXTUREGROUP_Project06 = 43,
        TEXTUREGROUP_Project07 = 44,
        TEXTUREGROUP_Project08 = 45,
        TEXTUREGROUP_Project09 = 46,
        TEXTUREGROUP_Project10 = 47,
        TEXTUREGROUP_Project11 = 48,
        TEXTUREGROUP_Project12 = 49,
        TEXTUREGROUP_Project13 = 50,
        TEXTUREGROUP_Project14 = 51,
        TEXTUREGROUP_Project15 = 52,
        TEXTUREGROUP_MAX = 53
    };

    enum class ETextureRenderTargetFormat : uint8_t //Enum Engine.ETextureRenderTargetFormat
    {
        RTF_R8 = 0,
        RTF_RG8 = 1,
        RTF_RGBA8 = 2,
        RTF_RGBA8_SRGB = 3,
        RTF_R16f = 4,
        RTF_RG16f = 5,
        RTF_RGBA16f = 6,
        RTF_R32f = 7,
        RTF_RG32f = 8,
        RTF_RGBA32f = 9,
        RTF_RGB10A2 = 10,
        RTF_MAX = 11
    };

    enum class ETimecodeProviderSynchronizationState : uint8_t //Enum Engine.ETimecodeProviderSynchronizationState
    {
        Closed = 0,
        Error = 1,
        Synchronized = 2,
        Synchronizing = 3,
        ETimecodeProviderSynchronizationState_MAX = 4
    };

    enum class ETimelineDirection : uint8_t //Enum Engine.ETimelineDirection
    {
        Forward = 0,
        Backward = 1,
        ETimelineDirection_MAX = 2
    };

    enum class ETimelineLengthMode : uint8_t //Enum Engine.ETimelineLengthMode
    {
        TL_TimelineLength = 0,
        TL_LastKeyFrame = 1,
        TL_MAX = 2
    };

    enum class ETimeStretchCurveMapping : uint8_t //Enum Engine.ETimeStretchCurveMapping
    {
        T_Original = 0,
        T_TargetMin = 1,
        T_TargetMax = 2,
        MAX = 3
    };

    enum class ETwitterIntegrationDelegate : uint8_t //Enum Engine.ETwitterIntegrationDelegate
    {
        TID_AuthorizeComplete = 0,
        TID_TweetUIComplete = 1,
        TID_RequestComplete = 2,
        TID_MAX = 3
    };

    enum class ETwitterRequestMethod : uint8_t //Enum Engine.ETwitterRequestMethod
    {
        TRM_Get = 0,
        TRM_Post = 1,
        TRM_Delete = 2,
        TRM_MAX = 3
    };

    enum class EUserDefinedStructureStatus : uint8_t //Enum Engine.EUserDefinedStructureStatus
    {
        UDSS_UpToDate = 0,
        UDSS_Dirty = 1,
        UDSS_Error = 2,
        UDSS_Duplicate = 3,
        UDSS_MAX = 4
    };

    enum class EUIScalingRule : uint8_t //Enum Engine.EUIScalingRule
    {
        ShortestSide = 0,
        LongestSide = 1,
        Horizontal = 2,
        Vertical = 3,
        ScaleToFit = 4,
        Custom = 5,
        EUIScalingRule_MAX = 6
    };

    enum class ERenderFocusRule : uint8_t //Enum Engine.ERenderFocusRule
    {
        Always = 0,
        NonPointer = 1,
        NavigationOnly = 2,
        Never = 3,
        ERenderFocusRule_MAX = 4
    };

    enum class EVectorFieldConstructionOp : uint8_t //Enum Engine.EVectorFieldConstructionOp
    {
        VFCO_Extrude = 0,
        VFCO_Revolve = 1,
        VFCO_MAX = 2
    };

    enum class EWindSourceType : uint8_t //Enum Engine.EWindSourceType
    {
        Directional = 0,
        Point = 1,
        EWindSourceType_MAX = 2
    };

    enum class EPSCPoolMethod : uint8_t //Enum Engine.EPSCPoolMethod
    {
        None = 0,
        AutoRelease = 1,
        ManualRelease = 2,
        ManualRelease_OnComplete = 3,
        FreeInPool = 4,
        EPSCPoolMethod_MAX = 5
    };

    enum class EVolumeLightingMethod : uint8_t //Enum Engine.EVolumeLightingMethod
    {
        VLM_VolumetricLightmap = 0,
        VLM_SparseVolumeLightingSamples = 1,
        VLM_MAX = 2
    };

    enum class EVisibilityAggressiveness : uint8_t //Enum Engine.EVisibilityAggressiveness
    {
        VIS_LeastAggressive = 0,
        VIS_ModeratelyAggressive = 1,
        VIS_MostAggressive = 2,
        VIS_Max = 3
    };

    enum class EYDataTableEditorForce : uint8_t //Enum Engine.EYDataTableEditorForce
    {
        None = 0,
        UseYager = 1,
        UseEpic = 2,
        EYDataTableEditorForce_MAX = 3
    };

    enum class EClothMassMode : uint8_t //Enum ClothingSystemRuntimeCommon.EClothMassMode
    {
        UniformMass = 0,
        TotalMass = 1,
        Density = 2,
        MaxClothMassMode = 3,
        EClothMassMode_MAX = 4
    };

    enum class EClothingWindMethod_Legacy : uint8_t //Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
    {
        Legacy = 0,
        Accurate = 1,
        EClothingWindMethod_MAX = 2
    };

    enum class EWeightMapTargetCommon : uint8_t //Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
    {
        None = 0,
        MaxDistance = 1,
        BackstopDistance = 2,
        BackstopRadius = 3,
        AnimDriveStiffness = 4,
        AnimDriveDamping = 5,
        EWeightMapTargetCommon_MAX = 6
    };

    enum class EClothingWindMethodNv : uint8_t //Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
    {
        Legacy = 0,
        Accurate = 1,
        EClothingWindMethodNv_MAX = 2
    };

    enum class EGameplayTaskState : uint8_t //Enum GameplayTasks.EGameplayTaskState
    {
        Uninitialized = 0,
        AwaitingActivation = 1,
        Paused = 2,
        Active = 3,
        Finished = 4,
        EGameplayTaskState_MAX = 5
    };

    enum class ERuntimeGenerationType : uint8_t //Enum NavigationSystem.ERuntimeGenerationType
    {
        Static = 0,
        DynamicModifiersOnly = 1,
        Dynamic = 2,
        LegacyGeneration = 3,
        ERuntimeGenerationType_MAX = 4
    };

    enum class ENavCostDisplay : uint8_t //Enum NavigationSystem.ENavCostDisplay
    {
        TotalCost = 0,
        HeuristicOnly = 1,
        RealCostOnly = 2,
        ENavCostDisplay_MAX = 3
    };

    enum class ENavSystemOverridePolicy : uint8_t //Enum NavigationSystem.ENavSystemOverridePolicy
    {
        Override = 0,
        Append = 1,
        Skip = 2,
        ENavSystemOverridePolicy_MAX = 3
    };

    enum class ERecastPartitioning : uint8_t //Enum NavigationSystem.ERecastPartitioning
    {
        Monotone = 0,
        Watershed = 1,
        ChunkyMonotone = 2,
        ERecastPartitioning_MAX = 3
    };

    enum class EAISenseNotifyType : uint8_t //Enum AIModule.EAISenseNotifyType
    {
        OnEveryPerception = 0,
        OnPerceptionChange = 1,
        EAISenseNotifyType_MAX = 2
    };

    enum class EAITaskPriority : uint8_t //Enum AIModule.EAITaskPriority
    {
        Lowest = 0,
        Low = 64,
        AutonomousAI = 127,
        High = 192,
        Ultimate = 254,
        EAITaskPriority_MAX = 255
    };

    enum class EGenericAICheck : uint8_t //Enum AIModule.EGenericAICheck
    {
        Less = 0,
        LessOrEqual = 1,
        Equal = 2,
        NotEqual = 3,
        GreaterOrEqual = 4,
        Greater = 5,
        IsTrue = 6,
        MAX = 7
    };

    enum class EAILockSource : uint8_t //Enum AIModule.EAILockSource
    {
        Animation = 0,
        Logic = 1,
        Script = 2,
        Gameplay = 3,
        MAX = 4
    };

    enum class EAIRequestPriority : uint8_t //Enum AIModule.EAIRequestPriority
    {
        SoftScript = 0,
        Logic = 1,
        HardScript = 2,
        Reaction = 3,
        Ultimate = 4,
        MAX = 5
    };

    enum class EPawnActionEventType : uint8_t //Enum AIModule.EPawnActionEventType
    {
        Invalid = 0,
        FailedToStart = 1,
        InstantAbort = 2,
        FinishedAborting = 3,
        FinishedExecution = 4,
        Push = 5,
        EPawnActionEventType_MAX = 6
    };

    enum class EPawnActionResult : uint8_t //Enum AIModule.EPawnActionResult
    {
        NotStarted = 0,
        InProgress = 1,
        Success = 2,
        Failed = 3,
        Aborted = 4,
        EPawnActionResult_MAX = 5
    };

    enum class EPawnActionAbortState : uint8_t //Enum AIModule.EPawnActionAbortState
    {
        NeverStarted = 0,
        NotBeingAborted = 1,
        MarkPendingAbort = 2,
        LatentAbortInProgress = 3,
        AbortDone = 4,
        MAX = 5
    };

    enum class FAIDistanceType : uint8_t //Enum AIModule.FAIDistanceType
    {
        Distance3D = 0,
        Distance2D = 1,
        DistanceZ = 2,
        MAX = 3
    };

    enum class EAIOptionFlag : uint8_t //Enum AIModule.EAIOptionFlag
    {
        Default = 0,
        Enable = 1,
        Disable = 2,
        MAX = 3
    };

    enum class EBTFlowAbortMode : uint8_t //Enum AIModule.EBTFlowAbortMode
    {
        None = 0,
        LowerPriority = 1,
        Self = 2,
        Both = 3,
        EBTFlowAbortMode_MAX = 4
    };

    enum class EBTNodeResult : uint8_t //Enum AIModule.EBTNodeResult
    {
        Succeeded = 0,
        Failed = 1,
        Aborted = 2,
        InProgress = 3,
        EBTNodeResult_MAX = 4
    };

    enum class ETextKeyOperation : uint8_t //Enum AIModule.ETextKeyOperation
    {
        Equal = 0,
        NotEqual = 1,
        Contain = 2,
        NotContain = 3,
        ETextKeyOperation_MAX = 4
    };

    enum class EArithmeticKeyOperation : uint8_t //Enum AIModule.EArithmeticKeyOperation
    {
        Equal = 0,
        NotEqual = 1,
        Less = 2,
        LessOrEqual = 3,
        Greater = 4,
        GreaterOrEqual = 5,
        EArithmeticKeyOperation_MAX = 6
    };

    enum class EBasicKeyOperation : uint8_t //Enum AIModule.EBasicKeyOperation
    {
        Set = 0,
        NotSet = 1,
        EBasicKeyOperation_MAX = 2
    };

    enum class EBTParallelMode : uint8_t //Enum AIModule.EBTParallelMode
    {
        AbortBackground = 0,
        WaitForBackground = 1,
        EBTParallelMode_MAX = 2
    };

    enum class EBTDecoratorLogic : uint8_t //Enum AIModule.EBTDecoratorLogic
    {
        Invalid = 0,
        Test = 1,
        And = 2,
        Or = 3,
        Not = 4,
        EBTDecoratorLogic_MAX = 5
    };

    enum class EBTChildIndex : uint8_t //Enum AIModule.EBTChildIndex
    {
        FirstNode = 0,
        TaskNode = 1,
        EBTChildIndex_MAX = 2
    };

    enum class EBTBlackboardRestart : uint8_t //Enum AIModule.EBTBlackboardRestart
    {
        ValueChange = 0,
        ResultChange = 1,
        EBTBlackboardRestart_MAX = 2
    };

    enum class EBlackBoardEntryComparison : uint8_t //Enum AIModule.EBlackBoardEntryComparison
    {
        Equal = 0,
        NotEqual = 1,
        EBlackBoardEntryComparison_MAX = 2
    };

    enum class EPathExistanceQueryType : uint8_t //Enum AIModule.EPathExistanceQueryType
    {
        NavmeshRaycast2D = 0,
        HierarchicalQuery = 1,
        RegularPathFinding = 2,
        EPathExistanceQueryType_MAX = 3
    };

    enum class EPointOnCircleSpacingMethod : uint8_t //Enum AIModule.EPointOnCircleSpacingMethod
    {
        BySpaceBetween = 0,
        ByNumberOfPoints = 1,
        EPointOnCircleSpacingMethod_MAX = 2
    };

    enum class EEQSNormalizationType : uint8_t //Enum AIModule.EEQSNormalizationType
    {
        Absolute = 0,
        RelativeToScores = 1,
        EEQSNormalizationType_MAX = 2
    };

    enum class EEnvTestDistance : uint8_t //Enum AIModule.EEnvTestDistance
    {
        Distance3D = 0,
        Distance2D = 1,
        DistanceZ = 2,
        DistanceAbsoluteZ = 3,
        EEnvTestDistance_MAX = 4
    };

    enum class EEnvTestDot : uint8_t //Enum AIModule.EEnvTestDot
    {
        Dot3D = 0,
        Dot2D = 1,
        EEnvTestDot_MAX = 2
    };

    enum class EEnvTestPathfinding : uint8_t //Enum AIModule.EEnvTestPathfinding
    {
        PathExist = 0,
        PathCost = 1,
        PathLength = 2,
        EEnvTestPathfinding_MAX = 3
    };

    enum class EEnvQueryTestClamping : uint8_t //Enum AIModule.EEnvQueryTestClamping
    {
        None = 0,
        SpecifiedValue = 1,
        FilterThreshold = 2,
        EEnvQueryTestClamping_MAX = 3
    };

    enum class EEnvDirection : uint8_t //Enum AIModule.EEnvDirection
    {
        TwoPoints = 0,
        Rotation = 1,
        EEnvDirection_MAX = 2
    };

    enum class EEnvOverlapShape : uint8_t //Enum AIModule.EEnvOverlapShape
    {
        Box = 0,
        Sphere = 1,
        Capsule = 2,
        EEnvOverlapShape_MAX = 3
    };

    enum class EEnvTraceShape : uint8_t //Enum AIModule.EEnvTraceShape
    {
        Line = 0,
        Box = 1,
        Sphere = 2,
        Capsule = 3,
        EEnvTraceShape_MAX = 4
    };

    enum class EEnvQueryTrace : uint8_t //Enum AIModule.EEnvQueryTrace
    {
        None = 0,
        Navigation = 1,
        Geometry = 2,
        NavigationOverLedges = 3,
        EEnvQueryTrace_MAX = 4
    };

    enum class EAIParamType : uint8_t //Enum AIModule.EAIParamType
    {
        Float = 0,
        Int = 1,
        Bool = 2,
        MAX = 3
    };

    enum class EEnvQueryParam : uint8_t //Enum AIModule.EEnvQueryParam
    {
        Float = 0,
        Int = 1,
        Bool = 2,
        EEnvQueryParam_MAX = 3
    };

    enum class EEnvQueryRunMode : uint8_t //Enum AIModule.EEnvQueryRunMode
    {
        SingleResult = 0,
        RandomBest5Pct = 1,
        RandomBest25Pct = 2,
        AllMatching = 3,
        EEnvQueryRunMode_MAX = 4
    };

    enum class EEnvTestScoreOperator : uint8_t //Enum AIModule.EEnvTestScoreOperator
    {
        AverageScore = 0,
        MinScore = 1,
        MaxScore = 2,
        Multiply = 3,
        EEnvTestScoreOperator_MAX = 4
    };

    enum class EEnvTestFilterOperator : uint8_t //Enum AIModule.EEnvTestFilterOperator
    {
        AllPass = 0,
        AnyPass = 1,
        EEnvTestFilterOperator_MAX = 2
    };

    enum class EEnvTestCost : uint8_t //Enum AIModule.EEnvTestCost
    {
        Low = 0,
        Medium = 1,
        High = 2,
        EEnvTestCost_MAX = 3
    };

    enum class EEnvTestWeight : uint8_t //Enum AIModule.EEnvTestWeight
    {
        None = 0,
        Square = 1,
        Inverse = 2,
        Unused = 3,
        Constant = 4,
        Skip = 5,
        EEnvTestWeight_MAX = 6
    };

    enum class EEnvTestScoreEquation : uint8_t //Enum AIModule.EEnvTestScoreEquation
    {
        Linear = 0,
        Square = 1,
        InverseLinear = 2,
        SquareRoot = 3,
        Constant = 4,
        EEnvTestScoreEquation_MAX = 5
    };

    enum class EEnvTestFilterType : uint8_t //Enum AIModule.EEnvTestFilterType
    {
        Minimum = 0,
        Maximum = 1,
        Range = 2,
        Match = 3,
        EEnvTestFilterType_MAX = 4
    };

    enum class EEnvTestPurpose : uint8_t //Enum AIModule.EEnvTestPurpose
    {
        Filter = 0,
        Score = 1,
        FilterAndScore = 2,
        EEnvTestPurpose_MAX = 3
    };

    enum class EEnvQueryHightlightMode : uint8_t //Enum AIModule.EEnvQueryHightlightMode
    {
        All = 0,
        Best5Pct = 1,
        Best25Pct = 2,
        EEnvQueryHightlightMode_MAX = 3
    };

    enum class ETeamAttitude : uint8_t //Enum AIModule.ETeamAttitude
    {
        Friendly = 0,
        Neutral = 1,
        Hostile = 2,
        ETeamAttitude_MAX = 3
    };

    enum class EPathFollowingRequestResult : uint8_t //Enum AIModule.EPathFollowingRequestResult
    {
        Failed = 0,
        AlreadyAtGoal = 1,
        RequestSuccessful = 2,
        EPathFollowingRequestResult_MAX = 3
    };

    enum class EPathFollowingAction : uint8_t //Enum AIModule.EPathFollowingAction
    {
        Error = 0,
        NoMove = 1,
        DirectMove = 2,
        PartialPath = 3,
        PathToGoal = 4,
        EPathFollowingAction_MAX = 5
    };

    enum class EPathFollowingStatus : uint8_t //Enum AIModule.EPathFollowingStatus
    {
        Idle = 0,
        Waiting = 1,
        Paused = 2,
        Moving = 3,
        EPathFollowingStatus_MAX = 4
    };

    enum class EPawnActionFailHandling : uint8_t //Enum AIModule.EPawnActionFailHandling
    {
        RequireSuccess = 0,
        IgnoreFailure = 1,
        EPawnActionFailHandling_MAX = 2
    };

    enum class EPawnSubActionTriggeringPolicy : uint8_t //Enum AIModule.EPawnSubActionTriggeringPolicy
    {
        CopyBeforeTriggering = 0,
        ReuseInstances = 1,
        EPawnSubActionTriggeringPolicy_MAX = 2
    };

    enum class EPawnActionMoveMode : uint8_t //Enum AIModule.EPawnActionMoveMode
    {
        UsePathfinding = 0,
        StraightLine = 1,
        EPawnActionMoveMode_MAX = 2
    };

    enum class ERigVMParameterType : uint8_t //Enum RigVM.ERigVMParameterType
    {
        Input = 0,
        Output = 1,
        Invalid = 2,
        ERigVMParameterType_MAX = 3
    };

    enum class ERigVMOpCode : uint8_t //Enum RigVM.ERigVMOpCode
    {
        Execute_0_Operands = 0,
        Execute_1_Operands = 1,
        Execute_2_Operands = 2,
        Execute_3_Operands = 3,
        Execute_4_Operands = 4,
        Execute_5_Operands = 5,
        Execute_6_Operands = 6,
        Execute_7_Operands = 7,
        Execute_8_Operands = 8,
        Execute_9_Operands = 9,
        Execute_10_Operands = 10,
        Execute_11_Operands = 11,
        Execute_12_Operands = 12,
        Execute_13_Operands = 13,
        Execute_14_Operands = 14,
        Execute_15_Operands = 15,
        Execute_16_Operands = 16,
        Execute_17_Operands = 17,
        Execute_18_Operands = 18,
        Execute_19_Operands = 19,
        Execute_20_Operands = 20,
        Execute_21_Operands = 21,
        Execute_22_Operands = 22,
        Execute_23_Operands = 23,
        Execute_24_Operands = 24,
        Execute_25_Operands = 25,
        Execute_26_Operands = 26,
        Execute_27_Operands = 27,
        Execute_28_Operands = 28,
        Execute_29_Operands = 29,
        Execute_30_Operands = 30,
        Execute_31_Operands = 31,
        Execute_32_Operands = 32,
        Execute_33_Operands = 33,
        Execute_34_Operands = 34,
        Execute_35_Operands = 35,
        Execute_36_Operands = 36,
        Execute_37_Operands = 37,
        Execute_38_Operands = 38,
        Execute_39_Operands = 39,
        Execute_40_Operands = 40,
        Execute_41_Operands = 41,
        Execute_42_Operands = 42,
        Execute_43_Operands = 43,
        Execute_44_Operands = 44,
        Execute_45_Operands = 45,
        Execute_46_Operands = 46,
        Execute_47_Operands = 47,
        Execute_48_Operands = 48,
        Execute_49_Operands = 49,
        Execute_50_Operands = 50,
        Execute_51_Operands = 51,
        Execute_52_Operands = 52,
        Execute_53_Operands = 53,
        Execute_54_Operands = 54,
        Execute_55_Operands = 55,
        Execute_56_Operands = 56,
        Execute_57_Operands = 57,
        Execute_58_Operands = 58,
        Execute_59_Operands = 59,
        Execute_60_Operands = 60,
        Execute_61_Operands = 61,
        Execute_62_Operands = 62,
        Execute_63_Operands = 63,
        Execute_64_Operands = 64,
        Zero = 65,
        BoolFalse = 66,
        BoolTrue = 67,
        Copy = 68,
        Increment = 69,
        Decrement = 70,
        Equals = 71,
        NotEquals = 72,
        JumpAbsolute = 73,
        JumpForward = 74,
        JumpBackward = 75,
        JumpAbsoluteIf = 76,
        JumpForwardIf = 77,
        JumpBackwardIf = 78,
        ChangeType = 79,
        Exit = 80,
        BeginBlock = 81,
        EndBlock = 82,
        Invalid = 83,
        ERigVMOpCode_MAX = 84
    };

    enum class ERigVMPinDirection : uint8_t //Enum RigVM.ERigVMPinDirection
    {
        Input = 0,
        Output = 1,
        IO = 2,
        Visible = 3,
        Hidden = 4,
        Invalid = 5,
        ERigVMPinDirection_MAX = 6
    };

    enum class ERigVMRegisterType : uint8_t //Enum RigVM.ERigVMRegisterType
    {
        Plain = 0,
        String = 1,
        Name = 2,
        Struct = 3,
        Invalid = 4,
        ERigVMRegisterType_MAX = 5
    };

    enum class ERigVMMemoryType : uint8_t //Enum RigVM.ERigVMMemoryType
    {
        Work = 0,
        Literal = 1,
        External = 2,
        Invalid = 3,
        ERigVMMemoryType_MAX = 4
    };

    enum class EVectorVMOp : uint8_t //Enum VectorVM.EVectorVMOp
    {
        done = 0,
        add = 1,
        sub = 2,
        mul = 3,
        div = 4,
        mad = 5,
        lerp = 6,
        rcp = 7,
        rsq = 8,
        sqrt = 9,
        neg = 10,
        abs = 11,
        exp = 12,
        exp2 = 13,
        log = 14,
        log2 = 15,
        sin = 16,
        cos = 17,
        tan = 18,
        asin = 19,
        acos = 20,
        atan = 21,
        atan2 = 22,
        ceil = 23,
        floor = 24,
        fmod = 25,
        frac = 26,
        trunc = 27,
        clamp = 28,
        min = 29,
        max = 30,
        pow = 31,
        round = 32,
        sign = 33,
        step = 34,
        random = 35,
        noise = 36,
        cmplt = 37,
        cmple = 38,
        cmpgt = 39,
        cmpge = 40,
        cmpeq = 41,
        cmpneq = 42,
        select = 43,
        addi = 44,
        subi = 45,
        muli = 46,
        divi = 47,
        clampi = 48,
        mini = 49,
        maxi = 50,
        absi = 51,
        negi = 52,
        signi = 53,
        randomi = 54,
        cmplti = 55,
        cmplei = 56,
        cmpgti = 57,
        cmpgei = 58,
        cmpeqi = 59,
        cmpneqi = 60,
        bit_and = 61,
        bit_or = 62,
        bit_xor = 63,
        bit_not = 64,
        bit_lshift = 65,
        bit_rshift = 66,
        logic_and = 67,
        logic_or = 68,
        logic_xor = 69,
        logic_not = 70,
        f2i = 71,
        i2f = 72,
        f2b = 73,
        b2f = 74,
        i2b = 75,
        b2i = 76,
        inputdata_float = 77,
        inputdata_int32 = 78,
        inputdata_half = 79,
        inputdata_noadvance_float = 80,
        inputdata_noadvance_int32 = 81,
        inputdata_noadvance_half = 82,
        outputdata_float = 83,
        outputdata_int32 = 84,
        outputdata_half = 85,
        acquireindex = 86,
        external_func_call = 87,
        exec_index = 88,
        noise2D = 89,
        noise3D = 90,
        enter_stat_scope = 91,
        exit_stat_scope = 92,
        update_id = 93,
        acquire_id = 94,
        NumOpcodes = 95
    };

    enum class EVectorVMOperandLocation : uint8_t //Enum VectorVM.EVectorVMOperandLocation
    {
        Register = 0,
        Constant = 1,
        Num = 2,
        EVectorVMOperandLocation_MAX = 3
    };

    enum class EVectorVMBaseTypes : uint8_t //Enum VectorVM.EVectorVMBaseTypes
    {
        Float = 0,
        Int = 1,
        Bool = 2,
        Num = 3,
        EVectorVMBaseTypes_MAX = 4
    };

    enum class EDatasmithPropertyCategory : uint8_t //Enum DatasmithCore.EDatasmithPropertyCategory
    {
        Undefined = 0,
        Generic = 1,
        RelativeLocation = 2,
        RelativeRotation = 4,
        RelativeScale3D = 8,
        Visibility = 16,
        Material = 32,
        Color = 64,
        Option = 128,
        EDatasmithPropertyCategory_MAX = 129
    };

    enum class EDatasmithCompletionMode : uint8_t //Enum DatasmithCore.EDatasmithCompletionMode
    {
        KeepState = 0,
        RestoreState = 1,
        ProjectDefault = 2,
        EDatasmithCompletionMode_MAX = 3
    };

    enum class EDatasmithActorAttachmentRule : uint8_t //Enum DatasmithCore.EDatasmithActorAttachmentRule
    {
        KeepRelativeTransform = 0,
        KeepWorldTransform = 1,
        EDatasmithActorAttachmentRule_MAX = 2
    };

    enum class EDatasmithActorRemovalRule : uint8_t //Enum DatasmithCore.EDatasmithActorRemovalRule
    {
        RemoveChildren = 0,
        KeepChildrenAndKeepRelativeTransform = 1,
        EDatasmithActorRemovalRule_MAX = 2
    };

    enum class EDatasmithKeyValuePropertyType : uint8_t //Enum DatasmithCore.EDatasmithKeyValuePropertyType
    {
        String = 0,
        Color = 1,
        Float = 2,
        Bool = 3,
        Texture = 4,
        Vector = 5,
        Integer = 6,
        EDatasmithKeyValuePropertyType_MAX = 7
    };

    enum class EDatasmithColorSpace : uint8_t //Enum DatasmithCore.EDatasmithColorSpace
    {
        Default = 0,
        sRGB = 1,
        Linear = 2,
        EDatasmithColorSpace_MAX = 3
    };

    enum class EDatasmithTextureFormat : uint8_t //Enum DatasmithCore.EDatasmithTextureFormat
    {
        PNG = 0,
        JPEG = 1,
        EDatasmithTextureFormat_MAX = 2
    };

    enum class EDatasmithTextureAddress : uint8_t //Enum DatasmithCore.EDatasmithTextureAddress
    {
        Wrap = 0,
        Clamp = 1,
        Mirror = 2,
        EDatasmithTextureAddress_MAX = 3
    };

    enum class EDatasmithTextureFilter : uint8_t //Enum DatasmithCore.EDatasmithTextureFilter
    {
        Nearest = 0,
        Bilinear = 1,
        Trilinear = 2,
        Default = 3,
        EDatasmithTextureFilter_MAX = 4
    };

    enum class EDatasmithTextureMode : uint8_t //Enum DatasmithCore.EDatasmithTextureMode
    {
        Diffuse = 0,
        Specular = 1,
        Normal = 2,
        NormalGreenInv = 3,
        Displace = 4,
        Other = 5,
        Bump = 6,
        Ies = 7,
        EDatasmithTextureMode_MAX = 8
    };

    enum class EDatasmithLightShape : uint8_t //Enum DatasmithCore.EDatasmithLightShape
    {
        Rectangle = 0,
        Disc = 1,
        Sphere = 2,
        Cylinder = 3,
        None = 4,
        EDatasmithLightShape_MAX = 5
    };

    enum class EClusterConnectionTypeEnum : uint8_t //Enum ChaosSolverEngine.EClusterConnectionTypeEnum
    {
        Chaos_PointImplicit = 0,
        Chaos_DelaunayTriangulation = 1,
        Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
        Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
        Chaos_None = 4,
        Chaos_EClsuterCreationParameters_Max = 5,
        Chaos_MAX = 6
    };

    enum class EChaosBreakingSortMethod : uint8_t //Enum GeometryCollectionEngine.EChaosBreakingSortMethod
    {
        SortNone = 0,
        SortByHighestMass = 1,
        SortByHighestSpeed = 2,
        SortByNearestFirst = 3,
        Count = 4,
        EChaosBreakingSortMethod_MAX = 5
    };

    enum class EChaosCollisionSortMethod : uint8_t //Enum GeometryCollectionEngine.EChaosCollisionSortMethod
    {
        SortNone = 0,
        SortByHighestMass = 1,
        SortByHighestSpeed = 2,
        SortByHighestImpulse = 3,
        SortByNearestFirst = 4,
        Count = 5,
        EChaosCollisionSortMethod_MAX = 6
    };

    enum class EChaosTrailingSortMethod : uint8_t //Enum GeometryCollectionEngine.EChaosTrailingSortMethod
    {
        SortNone = 0,
        SortByHighestMass = 1,
        SortByHighestSpeed = 2,
        SortByNearestFirst = 3,
        Count = 4,
        EChaosTrailingSortMethod_MAX = 5
    };

    enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t //Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
    {
        HideNone = 0,
        HideWithCollision = 1,
        HideSelected = 2,
        HideWholeCollection = 3,
        HideAll = 4,
        EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
    };

    enum class ECollectionGroupEnum : uint8_t //Enum GeometryCollectionEngine.ECollectionGroupEnum
    {
        Chaos_Traansform = 0,
        Chaos_Max = 1
    };

    enum class ECollectionAttributeEnum : uint8_t //Enum GeometryCollectionEngine.ECollectionAttributeEnum
    {
        Chaos_Active = 0,
        Chaos_DynamicState = 1,
        Chaos_CollisionGroup = 2,
        Chaos_Max = 3
    };

    enum class EInputCaptureState : uint8_t //Enum InteractiveToolsFramework.EInputCaptureState
    {
        Begin = 1,
        Continue = 2,
        End = 3,
        Ignore = 4,
        EInputCaptureState_MAX = 5
    };

    enum class EInputCaptureRequestType : uint8_t //Enum InteractiveToolsFramework.EInputCaptureRequestType
    {
        Begin = 1,
        Ignore = 2,
        EInputCaptureRequestType_MAX = 3
    };

    enum class EInputCaptureSide : uint8_t //Enum InteractiveToolsFramework.EInputCaptureSide
    {
        None = 0,
        Left = 1,
        Right = 2,
        Both = 3,
        Any = 99,
        EInputCaptureSide_MAX = 100
    };

    enum class EInputDevices : uint32_t //Enum InteractiveToolsFramework.EInputDevices
    {
        None = 0,
        Keyboard = 1,
        Mouse = 2,
        Gamepad = 4,
        OculusTouch = 8,
        HTCViveWands = 16,
        AnySpatialDevice = 24,
        TabletFingers = 1024,
        EInputDevices_MAX = 1025
    };

    enum class ETransformGizmoSubElements : uint32_t //Enum InteractiveToolsFramework.ETransformGizmoSubElements
    {
        None = 0,
        TranslateAxisX = 2,
        TranslateAxisY = 4,
        TranslateAxisZ = 8,
        TranslateAllAxes = 14,
        TranslatePlaneXY = 16,
        TranslatePlaneXZ = 32,
        TranslatePlaneYZ = 64,
        TranslateAllPlanes = 112,
        RotateAxisX = 128,
        RotateAxisY = 256,
        RotateAxisZ = 512,
        RotateAllAxes = 896,
        ScaleAxisX = 1024,
        ScaleAxisY = 2048,
        ScaleAxisZ = 4096,
        ScaleAllAxes = 7168,
        ScalePlaneYZ = 8192,
        ScalePlaneXZ = 16384,
        ScalePlaneXY = 32768,
        ScaleAllPlanes = 57344,
        ScaleUniform = 65536,
        StandardTranslateRotate = 1022,
        TranslateRotateUniformScale = 66558,
        FullTranslateRotateScale = 131070,
        ETransformGizmoSubElements_MAX = 131071
    };

    enum class EToolChangeTrackingMode : uint8_t //Enum InteractiveToolsFramework.EToolChangeTrackingMode
    {
        NoChangeTracking = 1,
        UndoToExit = 2,
        FullUndoRedo = 3,
        EToolChangeTrackingMode_MAX = 4
    };

    enum class EToolSide : uint8_t //Enum InteractiveToolsFramework.EToolSide
    {
        Left = 1,
        Mouse = 1,
        Right = 2,
        EToolSide_MAX = 3
    };

    enum class EViewInteractionState : uint8_t //Enum InteractiveToolsFramework.EViewInteractionState
    {
        None = 0,
        Hovered = 1,
        Focused = 2,
        EViewInteractionState_MAX = 3
    };

    enum class ESelectedObjectsModificationType : uint8_t //Enum InteractiveToolsFramework.ESelectedObjectsModificationType
    {
        Replace = 0,
        Add = 1,
        Remove = 2,
        Clear = 3,
        ESelectedObjectsModificationType_MAX = 4
    };

    enum class EToolMessageLevel : uint8_t //Enum InteractiveToolsFramework.EToolMessageLevel
    {
        Internal = 0,
        UserMessage = 1,
        UserNotification = 2,
        UserWarning = 3,
        UserError = 4,
        EToolMessageLevel_MAX = 5
    };

    enum class EToolContextCoordinateSystem : uint8_t //Enum InteractiveToolsFramework.EToolContextCoordinateSystem
    {
        World = 0,
        Local = 1,
        EToolContextCoordinateSystem_MAX = 2
    };

    enum class EStandardToolContextMaterials : uint8_t //Enum InteractiveToolsFramework.EStandardToolContextMaterials
    {
        VertexColorMaterial = 1,
        EStandardToolContextMaterials_MAX = 2
    };

    enum class ESceneSnapQueryTargetType : uint8_t //Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
    {
        None = 0,
        MeshVertex = 1,
        MeshEdge = 2,
        Grid = 4,
        All = 7,
        ESceneSnapQueryTargetType_MAX = 8
    };

    enum class ESceneSnapQueryType : uint8_t //Enum InteractiveToolsFramework.ESceneSnapQueryType
    {
        Position = 1,
        Rotation = 2,
        ESceneSnapQueryType_MAX = 3
    };

    enum class ELiveLinkCameraProjectionMode : uint8_t //Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
    {
        Perspective = 0,
        Orthographic = 1,
        ELiveLinkCameraProjectionMode_MAX = 2
    };

    enum class ELiveLinkSourceMode : uint8_t //Enum LiveLinkInterface.ELiveLinkSourceMode
    {
        Latest = 0,
        EngineTime = 1,
        Timecode = 2,
        ELiveLinkSourceMode_MAX = 3
    };

    enum class Default__UserDefinedEnum : uint8_t //UserDefinedEnum Engine.Default__UserDefinedEnum
    {
    };

    enum class AutomationResultCode : uint8_t //UserDefinedEnum AutomationResultCode.AutomationResultCode
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        AutomationResultCode_MAX = 3
    };

    enum class ENUM_CharacterAimState : uint8_t //UserDefinedEnum ENUM_CharacterAimState.ENUM_CharacterAimState
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        ENUM_MAX = 2
    };

    enum class LightType : uint8_t //UserDefinedEnum LightType.LightType
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        LightType_MAX = 3
    };

    enum class NPC_States : uint8_t //UserDefinedEnum NPC_States.NPC_States
    {
        NewEnumerator0 = 0,
        NewEnumerator3 = 1,
        NewEnumerator4 = 2,
        NPC_MAX = 3
    };

    enum class AnimArchetypeEnum : uint8_t //UserDefinedEnum AnimArchetypeEnum.AnimArchetypeEnum
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        NewEnumerator4 = 4,
        NewEnumerator5 = 5,
        NewEnumerator6 = 6,
        NewEnumerator7 = 7,
        NewEnumerator8 = 8,
        NewEnumerator9 = 9,
        NewEnumerator10 = 10,
        NewEnumerator11 = 11,
        NewEnumerator12 = 12,
        NewEnumerator13 = 13,
        NewEnumerator14 = 14,
        NewEnumerator15 = 15,
        NewEnumerator16 = 16,
        NewEnumerator17 = 17,
        NewEnumerator18 = 18,
        NewEnumerator19 = 19,
        NewEnumerator20 = 20,
        AnimArchetypeEnum_MAX = 21
    };

    enum class AC_EscapeShipTerminal_Actor_ENUM : uint8_t //UserDefinedEnum AC_EscapeShipTerminal_Actor_ENUM.AC_EscapeShipTerminal_Actor_ENUM
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        AC_EscapeShipTerminal_Actor_MAX = 3
    };

    enum class En_ItemBtnLockedState : uint8_t //UserDefinedEnum En_ItemBtnLockedState.En_ItemBtnLockedState
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        En_MAX = 3
    };

    enum class EY_AttachmentItemState : uint8_t //UserDefinedEnum EY_AttachmentItemState.EY_AttachmentItemState
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        EY_MAX = 3
    };

    enum class En_FilterCategoryCollection : uint8_t //UserDefinedEnum En_FilterCategoryCollection.En_FilterCategoryCollection
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        NewEnumerator4 = 4,
        NewEnumerator5 = 5,
        NewEnumerator6 = 6,
        NewEnumerator7 = 7,
        NewEnumerator8 = 8,
        NewEnumerator9 = 9,
        NewEnumerator10 = 10,
        NewEnumerator11 = 11,
        NewEnumerator12 = 12,
        NewEnumerator13 = 13,
        NewEnumerator16 = 14,
        NewEnumerator17 = 15,
        NewEnumerator18 = 16,
        NewEnumerator19 = 17,
        NewEnumerator20 = 18,
        NewEnumerator21 = 19,
        NewEnumerator22 = 20,
        NewEnumerator23 = 21,
        NewEnumerator24 = 22,
        NewEnumerator25 = 23,
        NewEnumerator26 = 24,
        NewEnumerator27 = 25,
        NewEnumerator28 = 26,
        NewEnumerator29 = 27,
        NewEnumerator30 = 28,
        NewEnumerator31 = 29,
        NewEnumerator32 = 30,
        NewEnumerator33 = 31,
        NewEnumerator34 = 32,
        NewEnumerator35 = 33,
        NewEnumerator36 = 34,
        NewEnumerator37 = 35,
        NewEnumerator38 = 36,
        NewEnumerator39 = 37,
        NewEnumerator40 = 38,
        NewEnumerator41 = 39,
        En_MAX = 40
    };

    enum class MapAreaDifficulty_ENUM : uint8_t //UserDefinedEnum MapAreaDifficulty_ENUM.MapAreaDifficulty_ENUM
    {
        NewEnumerator5 = 0,
        NewEnumerator0 = 1,
        NewEnumerator1 = 2,
        NewEnumerator2 = 3,
        NewEnumerator3 = 4,
        NewEnumerator4 = 5,
        MapAreaDifficulty_MAX = 6
    };

    enum class EN_EffortTypes : uint8_t //UserDefinedEnum EN_EffortTypes.EN_EffortTypes
    {
        NewEnumerator11 = 0,
        NewEnumerator0 = 1,
        NewEnumerator1 = 2,
        NewEnumerator2 = 3,
        NewEnumerator3 = 4,
        NewEnumerator4 = 5,
        NewEnumerator5 = 6,
        NewEnumerator12 = 7,
        NewEnumerator6 = 8,
        NewEnumerator7 = 9,
        NewEnumerator8 = 10,
        NewEnumerator9 = 11,
        NewEnumerator10 = 12,
        NewEnumerator13 = 13,
        NewEnumerator14 = 14,
        NewEnumerator15 = 15,
        EN_MAX = 16
    };

    enum class AC_EscapeShip_State : uint8_t //UserDefinedEnum AC_EscapeShip_State.AC_EscapeShip_State
    {
        NewEnumerator4 = 0,
        NewEnumerator5 = 1,
        NewEnumerator0 = 2,
        NewEnumerator7 = 3,
        NewEnumerator1 = 4,
        NewEnumerator2 = 5,
        NewEnumerator3 = 6,
        NewEnumerator6 = 7,
        AC_EscapeShip_MAX = 8
    };

    enum class ScannerInterfaceStates : uint8_t //UserDefinedEnum ScannerInterfaceStates.ScannerInterfaceStates
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        ScannerInterfaceStates_MAX = 4
    };

    enum class BIEventDataUplink_Enum : uint8_t //UserDefinedEnum BIEventDataUplink_Enum.BIEventDataUplink_Enum
    {
        NewEnumerator3 = 0,
        NewEnumerator0 = 1,
        NewEnumerator1 = 2,
        NewEnumerator2 = 3,
        BIEventDataUplink_MAX = 4
    };

    enum class YBIHookPowerUpStep : uint8_t //UserDefinedEnum YBIHookPowerUpStep.YBIHookPowerUpStep
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        YBIHookPowerUpStep_MAX = 4
    };

    enum class UplinkState_Enum : uint8_t //UserDefinedEnum UplinkState_Enum.UplinkState_Enum
    {
        NewEnumerator0 = 0,
        NewEnumerator5 = 1,
        NewEnumerator1 = 2,
        NewEnumerator6 = 3,
        UplinkState_MAX = 4
    };

    enum class InteractableDoor_BehavEnum : uint8_t //UserDefinedEnum InteractableDoor_BehavEnum.InteractableDoor_BehavEnum
    {
        NewEnumerator2 = 0,
        NewEnumerator1 = 1,
        NewEnumerator0 = 2,
        InteractableDoor_MAX = 3
    };

    enum class SplineBranching : uint8_t //UserDefinedEnum SplineBranching.SplineBranching
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        SplineBranching_MAX = 4
    };

    enum class AI_Friendly_States : uint8_t //UserDefinedEnum AI_Friendly_States.AI_Friendly_States
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        NewEnumerator4 = 4,
        NewEnumerator5 = 5,
        NewEnumerator6 = 6,
        AI_Friendly_MAX = 7
    };

    enum class ContainerMesh_Enum : uint8_t //UserDefinedEnum ContainerMesh_Enum.ContainerMesh_Enum
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        ContainerMesh_MAX = 3
    };

    enum class DoorMesh_Enum : uint8_t //UserDefinedEnum DoorMesh_Enum.DoorMesh_Enum
    {
        NewEnumerator3 = 0,
        NewEnumerator4 = 1,
        NewEnumerator5 = 2,
        DoorMesh_MAX = 3
    };

    enum class LargeSign_BackDetail : uint8_t //UserDefinedEnum LargeSign_BackDetail.LargeSign_BackDetail
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        LargeSign_MAX = 3
    };

    enum class InteriorProps_ServerRacks : uint8_t //UserDefinedEnum InteriorProps_ServerRacks.InteriorProps_ServerRacks
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        InteriorProps_MAX = 4
    };

    enum class InteriorProps_CommsDesk_Details : uint8_t //UserDefinedEnum InteriorProps_CommsDesk_Details.InteriorProps_CommsDesk_Details
    {
        NewEnumerator2 = 0,
        NewEnumerator0 = 1,
        NewEnumerator1 = 2,
        InteriorProps_CommsDesk_MAX = 3
    };

    enum class InteriorProps_PowerUpScreens : uint8_t //UserDefinedEnum InteriorProps_PowerUpScreens.InteriorProps_PowerUpScreens
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        InteriorProps_MAX = 3
    };

    enum class DiggerVariations : uint8_t //UserDefinedEnum DiggerVariations.DiggerVariations
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        DiggerVariations_MAX = 4
    };

    enum class BatteryStatus : uint8_t //UserDefinedEnum BatteryStatus.BatteryStatus
    {
        NewEnumerator3 = 0,
        NewEnumerator2 = 1,
        NewEnumerator1 = 2,
        NewEnumerator4 = 3,
        NewEnumerator5 = 4,
        BatteryStatus_MAX = 5
    };


}