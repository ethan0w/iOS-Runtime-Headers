/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface _TIMultilingualPreferences : NSObject <TIMultilingualPreferenceProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) TIInputMode *preferredSecondaryInputMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *userEnabledInputModes;

+ (id)inputModesForIdentifiers:(id)arg1;

- (id)preferredSecondaryInputMode;
- (id)userEnabledInputModes;

@end
