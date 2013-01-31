/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSCharacterSet, AXLanguageManager, NSLocale, NSString, AXLangMap;

@interface AXDialectMap : NSObject  {
    AXLangMap *_langMap;
    NSString *_voiceName;
    NSLocale *_locale;
    NSString *_specificLanguageID;
    NSCharacterSet *_speakableCharacters;
}

@property(readonly) NSString * languageNameInCurrentLocale;
@property(readonly) NSString * languageNameInNativeLocale;
@property(readonly) NSString * languageNameAndLocaleInCurrentLocale;
@property(readonly) NSString * languageNameAndLocaleInNativeLocale;
@property AXLangMap * langMap;
@property(retain) NSLocale * locale;
@property(copy) NSString * specificLanguageID;
@property(readonly) NSString * regionID;
@property(copy) NSString * voiceName;
@property(retain) NSCharacterSet * speakableCharacters;
@property(readonly) AXLanguageManager * langManager;


- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (id)regionID;
- (id)langMap;
- (BOOL)canSpeakString:(id)arg1;
- (BOOL)canSpeakLongCharacter:(unsigned long)arg1;
- (id)languageNameInNativeLocale;
- (id)languageNameInCurrentLocale;
- (id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 speakableCharacters:(id)arg4;
- (BOOL)canSpeakCharacter:(unsigned short)arg1;
- (id)speakableCharacters;
- (id)langManager;
- (id)languageNameAndLocaleInNativeLocale;
- (id)languageNameAndLocaleInCurrentLocale;
- (id)voiceName;
- (void)setLangMap:(id)arg1;
- (id)specificLanguageID;
- (void)setSpecificLanguageID:(id)arg1;
- (void)setSpeakableCharacters:(id)arg1;
- (void)setVoiceName:(id)arg1;
- (id)basicDescription;
- (id)locale;
- (void)setLocale:(id)arg1;

@end
