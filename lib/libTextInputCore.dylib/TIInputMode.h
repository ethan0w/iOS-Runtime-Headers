/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIInputMode : NSObject <NSCopying> {
    Class  _inputManagerClass;
    Class  _keyboardFeatureSpecializationClass;
    NSString * _languageWithRegion;
    NSLocale * _locale;
    Class  _multilingualInputManagerClass;
    NSString * _normalizedIdentifier;
    NSString * _variant;
}

@property (nonatomic, readonly) Class inputManagerClass;
@property (nonatomic, readonly) Class keyboardFeatureSpecializationClass;
@property (nonatomic, readonly) NSString *languageWithRegion;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) Class multilingualInputManagerClass;
@property (nonatomic, readonly) NSString *normalizedIdentifier;
@property (nonatomic, readonly) BOOL spaceAutocorrectionEnabled;
@property (nonatomic, readonly) BOOL supportsMultilingualKeyboard;
@property (nonatomic, readonly) NSString *variant;

+ (id)inputModeWithIdentifier:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithNormalizedIdentifier:(id)arg1;
- (Class)inputManagerClass;
- (BOOL)isEqual:(id)arg1;
- (Class)keyboardFeatureSpecializationClass;
- (id)languageWithRegion;
- (id)locale;
- (Class)multilingualInputManagerClass;
- (id)normalizedIdentifier;
- (BOOL)spaceAutocorrectionEnabled;
- (BOOL)supportsMultilingualKeyboard;
- (id)variant;

@end
