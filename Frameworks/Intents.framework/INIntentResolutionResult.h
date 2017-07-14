/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentResolutionResult : NSObject <INIntentResolutionResultDataProviding, INIntentResolutionResultExport> {
    NSArray * _alternatives;
    NSString * _conflictingParameterKeyPath;
    NSArray * _disambiguationItems;
    NSArray * _incompleteParameterKeyPaths;
    id  _incompleteValue;
    id  _itemToConfirm;
    NSArray * _neededParameterKeyPaths;
    int  _resolutionResultCode;
    id  _resolvedValue;
    unsigned int  _unsupportedReason;
}

@property (nonatomic, retain) NSArray *alternatives;
@property (nonatomic, retain) NSString *conflictingParameterKeyPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *disambiguationItems;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSArray *incompleteParameterKeyPaths;
@property (nonatomic, retain) id incompleteValue;
@property (nonatomic, retain) id itemToConfirm;
@property (nonatomic, retain) NSArray *neededParameterKeyPaths;
@property (nonatomic) int resolutionResultCode;
@property (nonatomic, retain) id resolvedValue;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int unsupportedReason;

+ (id)_dataForResolutionMethodUnimplemented;
+ (id)callerToResolve;
+ (id)needsValue;
+ (id)notRequired;
+ (id)resolutionResultConfirmationRequiredWithItemToConfirm:(id)arg1;
+ (id)resolutionResultDisambiguationWithItemsToDisambiguate:(id)arg1;
+ (id)resolutionResultNeedsValue;
+ (id)resolutionResultNeedsValueForParameters:(id)arg1;
+ (id)resolutionResultNotRequired;
+ (id)resolutionResultSuccessWithResolvedValue:(id)arg1;
+ (id)resolutionResultUnsupportedDueToConflictWithParameter:(id)arg1 alternateItems:(id)arg2;
+ (id)resolutionResultUnsupportedWithReason:(unsigned int)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned int)arg1 alternativeItems:(id)arg2;
+ (id)unsupported;
+ (id)unsupportedWithReason:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;
- (id)_dataForIntentSlotDescription:(id)arg1;
- (id)_initWithResultCode:(int)arg1;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_stringForResultCode:(int)arg1;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)alternatives;
- (id)conflictingParameterKeyPath;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationItems;
- (id)incompleteParameterKeyPaths;
- (id)incompleteValue;
- (id)itemToConfirm;
- (id)neededParameterKeyPaths;
- (int)resolutionResultCode;
- (id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2;
- (id)resolvedValue;
- (void)setAlternatives:(id)arg1;
- (void)setConflictingParameterKeyPath:(id)arg1;
- (void)setDisambiguationItems:(id)arg1;
- (void)setIncompleteParameterKeyPaths:(id)arg1;
- (void)setIncompleteValue:(id)arg1;
- (void)setItemToConfirm:(id)arg1;
- (void)setNeededParameterKeyPaths:(id)arg1;
- (void)setResolutionResultCode:(int)arg1;
- (void)setResolvedValue:(id)arg1;
- (void)setUnsupportedReason:(unsigned int)arg1;
- (unsigned int)unsupportedReason;

@end
