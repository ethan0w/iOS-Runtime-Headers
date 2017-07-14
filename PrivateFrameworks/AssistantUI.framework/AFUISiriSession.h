/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriSession : NSObject <AFAssistantUIService, AFSpeechDelegate, AFUISiriSession, AFUISpeechSynthesisLocalDelegate, AFUIStateMachineDelegate> {
    AFConnection * _connection;
    id /* block */  _continuePendingRequest;
    BOOL  _currentRequestDidPresent;
    NSObject<OS_dispatch_group> * _currentSpeechRequestGroup;
    <AFUISiriSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    BOOL  _eyesFree;
    BOOL  _isProcessingAcousticIdRequest;
    <AFUISiriSessionLocalDataSource> * _localDataSource;
    <AFUISiriSessionLocalDelegate> * _localDelegate;
    BOOL  _sendContextBeforeContinuingSpeechRequest;
    NSMutableSet * _speechRequestGroupGraveyard;
    AFUISpeechSynthesis * _speechSynthesis;
    AFUIStateMachine * _stateMachine;
}

@property (getter=_connection, nonatomic, readonly) AFConnection *connection;
@property (getter=_currentSpeechRequestGroup, setter=_setCurrentSpeechRequestGroup:, nonatomic, retain) NSObject<OS_dispatch_group> *currentSpeechRequestGroup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <AFUISiriSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEyesFree, nonatomic) BOOL eyesFree;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isProcessingAcousticIdRequest;
@property (nonatomic) <AFUISiriSessionLocalDataSource> *localDataSource;
@property (nonatomic) <AFUISiriSessionLocalDelegate> *localDelegate;
@property (readonly) Class superclass;

+ (unsigned int)availabilityState;
+ (void)beginMonitoringSiriAvailability;
+ (id)effectiveCoreLocationBundle;

- (void).cxx_destruct;
- (id)_connection;
- (void)_continuePendingSpeechRequest;
- (id)_currentSpeechRequestGroup;
- (void)_didChangeDialogPhase:(id)arg1;
- (void)_discardCurrentSpeechGroup;
- (void)_handleRequestUpdateViewsCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleUnlockDeviceCommand:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)_hasActiveRequest;
- (void)_outputVoiceDidChange:(id)arg1;
- (void)_performAceCommand:(id)arg1 forRequestUpdateViewsCommand:(id)arg2 afterDelay:(double)arg3;
- (void)_performBlockWithDelegate:(id /* block */)arg1;
- (void)_performTransitionForEvent:(int)arg1;
- (id)_preparedSpeechRequestWithRequestOptions:(id)arg1;
- (void)_requestContextWithCompletion:(id /* block */)arg1;
- (void)_requestDidFinishWithError:(id)arg1;
- (void)_requestWillStart;
- (void)_setCurrentSpeechRequestGroup:(id)arg1;
- (void)_siriNetworkAvailabilityDidChange:(id)arg1;
- (void)_startContinuityRequestWithInfo:(id)arg1;
- (void)_startDirectActionRequestWithString:(id)arg1 appID:(id)arg2 withContext:(id)arg3;
- (void)_startRequestWithBlock:(id /* block */)arg1;
- (void)_startRequestWithFinalOptions:(id)arg1;
- (void)_startRequestWithInfo:(id)arg1;
- (void)_startRequestWithText:(id)arg1;
- (void)_startSpeechPronunciationRequestWithContext:(id)arg1 options:(id)arg2;
- (void)_startSpeechRequestWithOptions:(id)arg1;
- (void)_startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (int)_state;
- (id)_stateMachine;
- (void)_voiceOverStatusDidChange:(id)arg1;
- (void)assistantConnection:(id)arg1 didChangeAudioSessionID:(unsigned int)arg2;
- (void)assistantConnection:(id)arg1 didFinishAcousticIDRequestWithSuccess:(BOOL)arg2;
- (void)assistantConnection:(id)arg1 openURL:(id)arg2 completion:(id /* block */)arg3;
- (void)assistantConnection:(id)arg1 receivedCommand:(id)arg2 completion:(id /* block */)arg3;
- (void)assistantConnection:(id)arg1 recognitionUpdateWithPhrases:(id)arg2 utterances:(id)arg3 refId:(id)arg4;
- (void)assistantConnection:(id)arg1 recognizedAdditionalSpeechInterpretation:(id)arg2 refId:(id)arg3;
- (void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3;
- (void)assistantConnection:(id)arg1 shouldSpeak:(BOOL)arg2;
- (void)assistantConnection:(id)arg1 speechRecognized:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecognizedPartialResult:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecordingDidChangeAVRecordRoute:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)assistantConnection:(id)arg1 startUIRequestWithText:(id)arg2 completion:(id /* block */)arg3;
- (void)assistantConnection:(id)arg1 wantsToCacheImage:(id)arg2;
- (void)assistantConnectionDidChangeAudioRecordingPower:(id)arg1;
- (void)assistantConnectionDidDetectMusic:(id)arg1;
- (void)assistantConnectionDismissAssistant:(id)arg1;
- (void)assistantConnectionRequestFinished:(id)arg1;
- (void)assistantConnectionRequestWillStart:(id)arg1;
- (void)assistantConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)assistantConnectionSpeechRecordingDidDetectStartpoint:(id)arg1;
- (void)assistantConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)assistantConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)assistantConnectionWillStartAcousticIDRequest:(id)arg1;
- (void)cancelSpeechRequest;
- (void)clearContext;
- (void)dealloc;
- (id)delegate;
- (void)end;
- (void)forceAudioSessionActive;
- (void)forceAudioSessionInactive;
- (id)initWithConnection:(id)arg1 delegateQueue:(id)arg2;
- (BOOL)isEyesFree;
- (BOOL)isListening;
- (BOOL)isPreventingActivationGesture;
- (BOOL)isProcessingAcousticIdRequest;
- (id)localDataSource;
- (id)localDelegate;
- (void)performAceCommand:(id)arg1;
- (void)performAceCommand:(id)arg1 conflictHandler:(id /* block */)arg2;
- (void)performAceCommands:(id)arg1;
- (void)preheat;
- (void)recordMetricsContext:(id)arg1 forDisambiguatedAppWIthBundleIdentifier:(id)arg2;
- (void)recordRequestMetricEvent:(id)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(id)arg1;
- (float)recordingPowerLevel;
- (void)requestDidPresentViewForErrorCommand:(id)arg1;
- (void)requestDidPresentViewForUICommand:(id)arg1;
- (void)resetContextTypes:(int)arg1;
- (void)resultDidChangeForAceCommand:(id)arg1;
- (void)resultDidChangeForAceCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)rollbackClearContext;
- (id /* block */)safeWrapResponseCompletion:(id /* block */)arg1;
- (void)sendReplyCommand:(id)arg1;
- (void)setAlertContext;
- (void)setApplicationContext;
- (void)setDelegate:(id)arg1;
- (void)setEyesFree:(BOOL)arg1;
- (void)setIsStark:(BOOL)arg1;
- (void)setLocalDataSource:(id)arg1;
- (void)setLocalDelegate:(id)arg1;
- (void)setLockState:(unsigned int)arg1;
- (id)speechSynthesis;
- (BOOL)speechSynthesisConnectionIsRecording:(id)arg1;
- (void)speechSynthesisWillStartSpeaking:(id)arg1;
- (void)startCorrectedRequestWithText:(id)arg1 correctionIdentifier:(id)arg2 userSelectionResults:(id)arg3;
- (void)startRequestWithOptions:(id)arg1;
- (id)stateMachine:(id)arg1 descriptionForEvent:(int)arg2;
- (void)stateMachine:(id)arg1 didTransitionFromState:(int)arg2 forEvent:(int)arg3;
- (void)stopCurrentRecordingForSpeechSynthesis:(id)arg1;
- (void)stopRecordingSpeech;
- (void)stopRequestWithOptions:(id)arg1;
- (void)telephonyRequestCompleted;
- (id)underlyingConnection;
- (void)updateRequestOptions:(id)arg1;

@end
