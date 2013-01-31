/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFPreferences : NSObject  {
    BOOL _shouldSynchronizePrivateDomain;
}

+ (id)sharedPreferences;

- (void)dealloc;
- (id)init;
- (BOOL)fileLoggingIsEnabled;
- (void)setFileLoggingIsEnabled:(BOOL)arg1;
- (id)languagesMissingBirthCertificates;
- (void)setShouldShowReadyForLanguageCode:(id)arg1;
- (void)didShowReadyForLanguageCode:(id)arg1;
- (BOOL)shouldShowReadyForLanguageCode:(id)arg1;
- (void)setDisableAssistantWhilePasscodeLocked:(BOOL)arg1;
- (BOOL)disableAssistantWhilePasscodeLocked;
- (void)setHandsFreeMode:(int)arg1;
- (int)handsFreeMode;
- (void)setDebugButtonIsEnabled:(BOOL)arg1;
- (BOOL)debugButtonIsEnabled;
- (void)setValue:(id)arg1 forSessionContextKey:(id)arg2;
- (id)valueForSessionContextPreferenceKey:(id)arg1;
- (void)setDictationIsEnabled:(BOOL)arg1;
- (void)setAssistantIsEnabled:(BOOL)arg1;
- (void)_setDictationIsEnabledLocal:(BOOL)arg1;
- (void)_setAssistantIsEnabledLocal:(BOOL)arg1;
- (void)_preferencesDidChangeExternally;
- (id)whitelistedLanguages;
- (void)setBirthCertificateData:(id)arg1 forLanguageCode:(id)arg2;
- (void)_synchronizeSessionContext;
- (id)birthCertificateDataForLanguageCode:(id)arg1;
- (BOOL)assistantIsEnabled;
- (BOOL)dictationIsEnabled;
- (void)synchronize;

@end
