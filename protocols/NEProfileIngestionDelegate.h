/* Generated by RuntimeBrowser.
 */

@protocol NEProfileIngestionDelegate

@required

+ (NSString *)getServiceIDForPayload:(NSDictionary *)arg1;
+ (void)profileMigrationComplete;

- (NSArray *)copyManagedConfigurationIDs;
- (BOOL)createConfigurationFromPayload:(id <NEProfilePayloadBaseDelegate>)arg1 payloadType:(NSString *)arg2;
- (BOOL)enableAlwaysOnVpn;
- (void)enableDefaultService;
- (NEConfiguration *)findConfigurationByConfigurationID:(NSString *)arg1;
- (NEConfiguration *)findConfigurationByName:(NSString *)arg1;
- (NEConfiguration *)findConfigurationByPayloadUUID:(NSString *)arg1;
- (NSArray *)getCertificatesForConfigurationWithIdentifier:(NSString *)arg1;
- (NEConfiguration *)ingestedConfiguration;
- (id)initWithNameAndType:(NSString *)arg1 payloadType:(NSString *)arg2;
- (BOOL)isInstalled:(NSString *)arg1;
- (BOOL)loadConfigurationsForceReloadFromDisk;
- (BOOL)lockConfigurations;
- (BOOL)removeConfiguration:(NEConfiguration *)arg1;
- (BOOL)removeConfigurationWithIdentifier:(NSString *)arg1;
- (BOOL)removeIngestedConfiguration;
- (BOOL)saveIngestedConfiguration;
- (NEConfiguration *)setAsideConfigurationName:(NSString *)arg1 unsetAside:(BOOL)arg2;
- (void)unlockConfigurations;
- (BOOL)updateAppLayerVPNMappingRules:(NSDictionary *)arg1;
- (BOOL)updateDefaultAfterAddingConfiguration;
- (BOOL)updateDefaultAfterDeletingConfiguration;
- (BOOL)updateManagedAppRules:(NSArray *)arg1;

@end
