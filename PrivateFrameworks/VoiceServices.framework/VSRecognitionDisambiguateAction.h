/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSMutableDictionary;

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction  {
    NSString *_repeatedSpokenFeedbackString;
    NSString *_sequenceTag;
    NSMutableDictionary *_knownValues;
    NSMutableDictionary *_knownPhoneticValues;
    NSMutableDictionary *_ambiguousValues;
    NSMutableDictionary *_ambiguousPhoneticValues;
    void *_context;
}


- (id)_actionForEmptyResults;
- (struct __VSRecognition { }*)_createRecognitionInstanceWithCallbacks:(struct { int (*x1)(); int (*x2)(); int (*x3)(); }*)arg1 info:(void*)arg2;
- (id)_keywords;
- (void)setAmbiguousValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;
- (id)ambiguousValuesForClassIdentifier:(id)arg1;
- (void)setKnownValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;
- (id)knownValuesForClassIdentifier:(id)arg1;
- (void)setKnownValue:(id)arg1 phoneticValue:(id)arg2 forClassIdentifier:(id)arg3;
- (id)knownValueForClassIdentifier:(id)arg1;
- (void)setSequenceTag:(id)arg1;
- (id)sequenceTag;
- (id)repeatedSpokenFeedbackString;
- (void)setRepeatedSpokenFeedbackString:(id)arg1;
- (struct __VSRecognitionDisambiguationContext { }*)_disambiguationContext;
- (BOOL)_keywordIndexChanged;
- (int)completionType;
- (void)dealloc;
- (void)setKeywords:(id)arg1;

@end
