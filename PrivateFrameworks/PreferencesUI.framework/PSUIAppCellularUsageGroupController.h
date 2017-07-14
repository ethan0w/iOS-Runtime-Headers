/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAppCellularUsageGroupController : NSObject <PSSpecifierGroupController, PSUIWirelessDataOptionsDelegate, UsageFeedDelegate> {
    ACAccountStore * _accountStore;
    PSExpandableAppListGroupController * _appGroupController;
    BOOL  _cancelled;
    NSArray * _cellularDataSwitches;
    BOOL  _enabled;
    NSArray * _managedBundleIDs;
    NSNumber * _totalBytesUsed;
    NSNumber * _totalRoamingBytesUsed;
    AppWirelessDataUsageManager * _wirelessManager;
    WirelessDataUsageWorkspace * _workspace;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) PSExpandableAppListGroupController *appGroupController;
@property (getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic, readonly) BOOL hasManagedCellularData;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSArray *managedBundleIDs;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *totalBytesUsed;
@property (nonatomic, retain) NSNumber *totalRoamingBytesUsed;
@property (nonatomic, retain) AppWirelessDataUsageManager *wirelessManager;
@property (nonatomic, retain) WirelessDataUsageWorkspace *workspace;

+ (id)nameForSpecialCategory:(id)arg1;

- (void).cxx_destruct;
- (id)_appleAccount;
- (void)_createAppSpecifiersForVisibleApps:(id)arg1 hiddenApps:(id)arg2 unknownApps:(id)arg3 internalProcesses:(id)arg4 wifiAssist:(id)arg5;
- (void)_setUseCellularForCloudDrive:(id)arg1 forSpecifier:(id)arg2;
- (void)_updateTotalBytesUsed:(double)arg1 roamingBytesUsed:(double)arg2;
- (id)_useCellularForCloudDrive:(id)arg1;
- (id)accountStore;
- (id)appCellularDataEnabledForSpecifier:(id)arg1;
- (id)appGroupController;
- (void)calculateUsage;
- (void)cancel;
- (id)dataUsageForApplicationSpecifier:(id)arg1;
- (void)dealloc;
- (BOOL)hasManagedCellularData;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (BOOL)isCancelled;
- (BOOL)isEnabled;
- (id)isReliableNetworkFallbackEnabled:(id)arg1;
- (id)managedBundleIDs;
- (id)managedCellularDataBundleIdentifiers;
- (void)setAccountStore:(id)arg1;
- (void)setAppCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setAppGroupController:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setManagedBundleIDs:(id)arg1;
- (void)setReliableNetworkFallbackIsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setSwitchesEnabled:(BOOL)arg1;
- (void)setTotalBytesUsed:(id)arg1;
- (void)setTotalRoamingBytesUsed:(id)arg1;
- (void)setWirelessManager:(id)arg1;
- (void)setWorkspace:(id)arg1;
- (BOOL)shouldShowCloudDrive;
- (BOOL)shouldShowWifiAssist;
- (id)specifierForApp:(id)arg1 enabled:(BOOL)arg2;
- (id)specifierForSpecialCategory:(id)arg1 bytesUsed:(id)arg2;
- (id)specifiers;
- (id)totalBytesUsed;
- (id)totalRoamingBytesUsed;
- (id)wirelessManager;
- (id)workspace;

@end