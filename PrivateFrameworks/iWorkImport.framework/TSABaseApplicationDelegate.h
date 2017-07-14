/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSABaseApplicationDelegate : TSKApplicationDelegate {
    <TSADownloadDelegate> * _downloadDelegate;
    TSADocumentRoot * mDocumentRoot;
}

@property (nonatomic, readonly) NSArray *applicationTemplateVariants;
@property (nonatomic) TSADocumentRoot *documentRoot;
@property (nonatomic, retain) <TSADownloadDelegate> *downloadDelegate;
@property (nonatomic, readonly) NSArray *iWorkAuthorPrivateIDs;
@property (nonatomic, readonly) NSArray *importableDocumentTypes;
@property (nonatomic, readonly) NSString *nativeDocumentExtension;
@property (nonatomic, readonly) NSString *nativeDocumentType;
@property (nonatomic, readonly) NSString *nativeSFFDocumentType;
@property (nonatomic, readonly) NSArray *readableDocumentTypes;
@property (nonatomic, readonly) NSString *tangierEditingFormatDocumentType;
@property (nonatomic, readonly) NSString *templateDocumentExtension;
@property (nonatomic, readonly) NSString *templateDocumentType;
@property (nonatomic, readonly) NSString *templateSFFDocumentType;

+ (void)resetSharedConfigurations;
+ (id)sharedDelegate;

- (BOOL)URLIsValidForImportedHyperlink:(id)arg1;
- (id)applicationTemplateVariants;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale { }*)arg1;
- (void)clearIWorkAuthorColorIndex;
- (void)clearIWorkAuthorName;
- (void)clearIWorkAuthorPrivateID;
- (unsigned int)collaboratorColorIndexForDocumentShareID:(id)arg1;
- (id)collaboratorNameForDocumentShareID:(id)arg1;
- (id)collaboratorPersonIDForDocumentShareID:(id)arg1;
- (void)dealloc;
- (id)documentPreferenceKeyPrefix;
- (id)documentRoot;
- (Class)documentRootClass;
- (id)downloadDelegate;
- (id)existingNestedDocumentPathForPath:(id)arg1;
- (void)generateIWorkAuthorPrivateIDIfNecessary;
- (BOOL)hasIWorkAuthorName;
- (id)iCloudDocumentPreferenceKeyForDocumentShareID:(id)arg1 isMatchingKey:(BOOL*)arg2;
- (id)iCloudPreferenceKeys;
- (id)iCloudPreferencesForDocumentShareID:(id)arg1;
- (unsigned int)iWorkAuthorColorIndex;
- (id)iWorkAuthorName;
- (id)iWorkAuthorPrivateID;
- (id)iWorkAuthorPrivateIDs;
- (id)importableDocumentTypes;
- (id)init;
- (id)invalidURLSchemes;
- (BOOL)isICloudDocumentPreference:(id)arg1 validForKey:(id)arg2;
- (BOOL)isReadableDocumentType:(id)arg1;
- (BOOL)isValidIWorkAuthorColorIndex:(unsigned int)arg1;
- (float)maximumAspectRatioForPreviewImage;
- (float)mimimumAspectRatioForPreviewImage;
- (id)nativeDocumentExtension;
- (id)nativeDocumentType;
- (id)nativeSFFDocumentType;
- (BOOL)openURL:(id)arg1;
- (void)persistenceError:(id)arg1;
- (id)readableDocumentTypes;
- (void)registerDefaults;
- (void)registerICloudPreferences;
- (void)setDocumentRoot:(id)arg1;
- (void)setDownloadDelegate:(id)arg1;
- (void)setICloudPreferences:(id)arg1 forDocumentShareID:(id)arg2;
- (void)setIWorkAuthorColorIndex:(unsigned int)arg1;
- (void)setIWorkAuthorName:(id)arg1;
- (BOOL)shouldShowLogMenu;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentExtension;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (void)ubiquitousKeyValueStoreDidChange:(id)arg1;
- (id)validICloudPreferencesForPreferences:(id)arg1 invalidKeys:(id*)arg2;
- (void)wakeUpDownloadManager;

@end
