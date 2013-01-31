/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class ASTaskManager, NSHTTPURLResponse, NSURLRequest, NSError, NSMutableSet, ASParseContext, NSDate, DATaskManager, ASItem, NSString, NSURLConnection, NSTimer;

@interface ASTask : NSObject <DATask, NSURLConnectionDelegate> {
    BOOL _haveSwitchedCodePage;
    BOOL _haveParsedCommand;
    ASItem *_currentlyParsingItem;
    id _delegate;
    NSHTTPURLResponse *_response;
    ASParseContext *_parseContext;
    NSURLConnection *_connection;
    NSURLRequest *_request;
    NSMutableSet *_attemptedIdentities;
    BOOL _isFakingIt;
    BOOL _didSendRequest;
    BOOL _didFailWithError;
    BOOL _didCancel;
    BOOL _didReceiveResponse;
    BOOL _didReceiveData;
    BOOL _didFinishLoading;
    BOOL _didReset;
    BOOL _finished;
    BOOL _inDelegateCallout;
    BOOL _finishedByTimeoutEnforcer;
    int _interfaceBinding;
    void *_context;
    BOOL _isExclusive;
    int _numBadPasswordResponses;
    BOOL _askedToCancelWhileModal;
    BOOL _haveCheckedForTopLevelError;
    BOOL _handledTopLevelError;
    int _taskID;
    ASTaskManager *_taskManager;
    int _modalReason;
    int _modalPushCount;
    NSString *_lastKnownPolicyKey;
    NSError *_passwordNotificationError;
    NSString *_lastKnownPassword;
    NSDate *_dateConnectionWentOut;
    NSTimer *_timeoutEnforcer;
    BOOL _retry;
}

@property DATaskManager * taskManager;
@property id delegate;
@property void* context;
@property int interfaceBinding;
@property BOOL isExclusive;
@property(retain) ASItem * currentlyParsingItem;
@property BOOL askedToCancelWhileModal;
@property(retain) NSString * lastKnownPassword;
@property(retain) NSTimer * timeoutEnforcer;

+ (void)_restoreDefaultTaskTimeout;
+ (void)_setDefaultTaskTimeout:(double)arg1;

- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)reset;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)contentType;
- (id)timeoutEnforcer;
- (id)lastKnownPassword;
- (void)setAskedToCancelWhileModal:(BOOL)arg1;
- (void)setIsExclusive:(BOOL)arg1;
- (BOOL)isExclusive;
- (void)_initFakeParseContext;
- (void)taskManagerDidFailToUpdatePolicyKey;
- (BOOL)_handleCertificateError:(id)arg1;
- (BOOL)_handleRedirect:(id)arg1;
- (void)setLastKnownPassword:(id)arg1;
- (void)setInterfaceBinding:(int)arg1;
- (void)willProcessContext;
- (BOOL)isInCallOutToDelegate;
- (id)_applyAuthenticationChain:(struct __CFArray { }*)arg1 toRequest:(id)arg2;
- (void)_setHTTPParametersOnRequest:(id)arg1 outBodyStream:(id*)arg2 outBodyData:(id*)arg3;
- (BOOL)_isWBXML;
- (void)_failImmediately;
- (BOOL)askedToCancelWhileModal;
- (void)_popModal;
- (void)_handleBadPasswordResponse;
- (void)taskManagerDidUpdatePolicyKey;
- (void)taskManagerDidFindEASVersion;
- (void)_continuePerformTask;
- (void)_pushModalForReason:(int)arg1;
- (void)_timeoutEnforcerFired:(id)arg1;
- (void)tearDownResources;
- (void)setTimeoutEnforcer:(id)arg1;
- (id)requestBodyStreamOutKnownSize:(int*)arg1;
- (BOOL)shouldReportTimeInNetwork;
- (int)interfaceBinding;
- (id)httpMethod;
- (BOOL)checkForErrorInContext:(id)arg1;
- (void)reportStatusWithError:(id)arg1;
- (void)handleTopLevelErrorStatus:(id)arg1;
- (int)taskID;
- (int)numDownloadedElements;
- (id)parameterData;
- (int)connectionActionForResponse:(id)arg1;
- (void)setTaskManager:(id)arg1;
- (BOOL)shouldHoldPowerAssertion;
- (void)startModal;
- (void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;
- (void)performTask;
- (id)responseContentType;
- (BOOL)shouldLogIncomingData;
- (BOOL)requiresEASVersionInformaton;
- (BOOL)shouldStallAfterCannotFindHost;
- (BOOL)shouldHandlePasswordErrors;
- (BOOL)_shouldRedirectToHTTPForRequest:(id)arg1;
- (void)_addAuthToRequest:(id)arg1;
- (BOOL)_shouldSendAuthForRequest:(id)arg1;
- (BOOL)expectsWBXML;
- (id)_HTTPMethodForRequest:(id)arg1;
- (id)_policyKey;
- (id)_easVersion;
- (id)_url;
- (void)didProcessContext:(id)arg1;
- (BOOL)processContext:(id)arg1;
- (BOOL)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)requestBody;
- (int)commandCode;
- (void)didCallOutToDelegate;
- (void)willCallOutToDelegate;
- (BOOL)attemptRetryWithStatus:(int)arg1 error:(id)arg2;
- (int)taskStatusForExchangeStatus:(int)arg1;
- (int)taskStatusForError:(id)arg1;
- (void)setCurrentlyParsingItem:(id)arg1;
- (id)currentlyParsingItem;
- (id)taskManager;
- (id)command;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)setContext:(void*)arg1;
- (void*)context;
- (void)finishWithError:(id)arg1;
- (double)percentComplete;
- (double)timeoutInterval;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;

@end
