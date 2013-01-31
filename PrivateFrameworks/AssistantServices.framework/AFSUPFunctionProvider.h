/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSDateFormatter;

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser <AFSpeakableNamespaceProvider> {
    NSDateFormatter *_ourFormatter;
    BOOL _useSpeechMode;
}

+ (BOOL)_shouldAutomaticallyProvideFunctions;

- (void).cxx_destruct;
- (id)init;
- (id)_callFunction:(id)arg1 withArguments:(id)arg2;
- (id)_lowercaseString:(id)arg1;
- (id)_deviceModel;
- (id)_tempInWeatherUnits:(id)arg1;
- (id)_currentWeekday:(id)arg1;
- (id)_currentLongDate:(id)arg1;
- (id)_currentShortDate:(id)arg1;
- (id)_currentTime:(id)arg1;
- (id)_dateFormattedWithFormatter:(id)arg1 arguments:(id)arg2;
- (id)stringForExpression:(id)arg1;
- (void)useSpeechMode:(BOOL)arg1;

@end
