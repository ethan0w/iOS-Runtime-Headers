/* Generated by RuntimeBrowser.
 */

@protocol INIntentResolutionResultExport <NSObject, JSExport>

@required

+ (id)resolutionResultConfirmationRequiredWithItemToConfirm:(NSObject *)arg1;
+ (id)resolutionResultDisambiguationWithItemsToDisambiguate:(NSArray *)arg1;
+ (id)resolutionResultNeedsValue;
+ (id)resolutionResultNotRequired;
+ (id)resolutionResultSuccessWithResolvedValue:(NSObject *)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned int)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned int)arg1 alternativeItems:(NSArray *)arg2;
+ (id)unsupportedWithReason:(unsigned int)arg1;

- (NSData *)_dataForIntentSlotDescription:(INIntentSlotDescription *)arg1;
- (NSArray *)alternatives;
- (NSString *)conflictingParameterKeyPath;
- (NSArray *)disambiguationItems;
- (NSArray *)incompleteParameterKeyPaths;
- (NSObject *)incompleteValue;
- (id)init;
- (NSObject *)itemToConfirm;
- (NSArray *)neededParameterKeyPaths;
- (NSObject *)resolvedValue;
- (void)setAlternatives:(NSArray *)arg1;
- (void)setConflictingParameterKeyPath:(NSString *)arg1;
- (void)setDisambiguationItems:(NSArray *)arg1;
- (void)setIncompleteParameterKeyPaths:(NSArray *)arg1;
- (void)setIncompleteValue:(NSObject *)arg1;
- (void)setItemToConfirm:(NSObject *)arg1;
- (void)setNeededParameterKeyPaths:(NSArray *)arg1;
- (void)setResolvedValue:(NSObject *)arg1;
- (void)setUnsupportedReason:(unsigned int)arg1;
- (unsigned int)unsupportedReason;

@end
