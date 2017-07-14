/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationStateMachine : NSObject <PKContinuityPaymentCoordinatorDelegate> {
    <PKAggregateDictionaryProtocol> * _aggregateDictionary;
    BOOL  _awaitingClientCallbackReply;
    BOOL  _awaitingWebServiceResponse;
    NSMutableArray * _callbackQueue;
    PKContinuityPaymentCoordinator * _continuityPaymentCoordinator;
    PKContinuityPaymentService * _continuityPaymentService;
    <PKPaymentAuthorizationStateMachineDelegate> * _delegate;
    BOOL  _hasReceivedRemoteDeviceUpdate;
    unsigned int  _hostApplicationState;
    NSString * _instanceIdentifier;
    PKPaymentAuthorizationDataModel * _model;
    PKPaymentService * _paymentService;
    PKPaymentWebService * _paymentWebService;
    unsigned int  _prepareTransactionDetailsCounter;
    unsigned int  _state;
    double  _updatePaymentDeviceTimeout;
}

@property (nonatomic, retain) <PKAggregateDictionaryProtocol> *aggregateDictionary;
@property (nonatomic) BOOL awaitingClientCallbackReply;
@property (nonatomic) BOOL awaitingWebServiceResponse;
@property (nonatomic, retain) NSMutableArray *callbackQueue;
@property (nonatomic, retain) PKContinuityPaymentCoordinator *continuityPaymentCoordinator;
@property (nonatomic, retain) PKContinuityPaymentService *continuityPaymentService;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasReceivedRemoteDeviceUpdate;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int hostApplicationState;
@property (nonatomic, retain) NSString *instanceIdentifier;
@property (nonatomic, retain) PKPaymentAuthorizationDataModel *model;
@property (nonatomic, retain) PKPaymentService *paymentService;
@property (nonatomic, retain) PKPaymentWebService *paymentWebService;
@property (nonatomic) unsigned int prepareTransactionDetailsCounter;
@property (setter=_setState:, nonatomic) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic) double updatePaymentDeviceTimeout;
@property (nonatomic, readonly) BOOL useSecureElement;

- (void).cxx_destruct;
- (void)_advanceToNextState;
- (void)_applyBillingInformationToPayment:(id)arg1;
- (void)_applyShippingInformationToPayment:(id)arg1;
- (void)_applyShippingMethodToPayment:(id)arg1;
- (void)_applyWebServiceConfiguration;
- (id)_createNewRemotePaymentRequest;
- (id)_dequeuePendingCallbackParam;
- (void)_deviceUpdateDidTimeout;
- (void)_dispatchNextCallbackParam;
- (void)_enqeueDidAuthorizePurchaseWithParam:(id)arg1;
- (void)_enqueueCallbackOfKind:(int)arg1 withObject:(id)arg2;
- (void)_enqueueDidAuthorizePaymentWithPayment:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithRemotePayment:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithToken:(id)arg1;
- (void)_enqueueDidRequestMerchantSession;
- (void)_enqueueDidSelectPaymentPass:(id)arg1;
- (void)_enqueueDidSelectRemotePaymentInstrument:(id)arg1;
- (void)_enqueueDidSelectShippingContact:(id)arg1;
- (void)_enqueueInitialCallbacks;
- (void)_handleStateMachineWillStartNotification:(id)arg1;
- (void)_performAuthorizationWithParam:(id)arg1;
- (void)_performCancelRemotePaymentRequest;
- (void)_performDidAuthorizeCallbackWithParam:(id)arg1;
- (void)_performNonceRequestWithParam:(id)arg1;
- (void)_performPrepareTransactionDetailsRequestWithParam:(id)arg1;
- (void)_performRedeemRequestWithParam:(id)arg1;
- (void)_performRewrapRequestWithParam:(id)arg1;
- (void)_performSendClientUpdateWithShippingMethods:(id)arg1 paymentSummaryItems:(id)arg2 paymentApplication:(id)arg3 status:(int)arg4;
- (void)_performSendPaymentStatus:(int)arg1;
- (void)_performSendRemotePaymentRequest;
- (void)_performUpdatePaymentDevices;
- (void)_postStateMachineWillStartNotification;
- (void)_registerForNotifications;
- (void)_removeWebServiceConfiguration;
- (void)_sendDidTransitionFromState:(unsigned int)arg1 toState:(unsigned int)arg2 withParam:(id)arg3;
- (void)_setState:(unsigned int)arg1;
- (void)_setState:(unsigned int)arg1 param:(id)arg2;
- (void)_simulatePayment;
- (void)_start;
- (void)_startPayment;
- (void)_startRemoteDeviceUpdate;
- (id)_transactionWithPaymentToken:(id)arg1;
- (id)_transactionWithPurchase:(id)arg1 transactionIdentifier:(id)arg2;
- (void)_unregisterForNotifications;
- (void)_updateModelWithShippingMethods:(id)arg1 paymentSummaryItems:(id)arg2;
- (id)aggregateDictionary;
- (BOOL)awaitingClientCallbackReply;
- (BOOL)awaitingWebServiceResponse;
- (id)callbackQueue;
- (id)continuityPaymentCoordinator;
- (void)continuityPaymentCoordinator:(id)arg1 didReceivePayment:(id)arg2;
- (void)continuityPaymentCoordinator:(id)arg1 didReceiveUpdatedPaymentDevices:(id)arg2;
- (void)continuityPaymentCoordinator:(id)arg1 didTimeoutTotalWithPaymentDevices:(id)arg2;
- (void)continuityPaymentCoordinatorDidReceiveCancellation:(id)arg1;
- (void)continuityPaymentCoordinatorDidTimeoutUpdatePaymentDevices:(id)arg1;
- (id)continuityPaymentService;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didAuthenticateWithCredential:(id)arg1;
- (void)didBecomeActive:(BOOL)arg1;
- (void)didCancel;
- (void)didEncounterError:(id)arg1;
- (void)didEncounterFatalError:(id)arg1;
- (void)didReceiveMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)didReceivePaymentAuthorizationStatus:(int)arg1;
- (void)didReceivePaymentMethodCompleteWithSummaryItems:(id)arg1;
- (void)didReceiveShippingContactCompleteWithStatus:(int)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)didReceiveShippingMethodCompleteWithStatus:(int)arg1 paymentSummaryItems:(id)arg2;
- (void)didRequestMerchantSession;
- (void)didResignActive:(BOOL)arg1;
- (void)didResolveError;
- (void)didSelectPaymentPass:(id)arg1;
- (void)didSelectRemotePaymentInstrument:(id)arg1;
- (void)didSelectShippingContact:(id)arg1;
- (void)didSelectShippingMethod:(id)arg1;
- (BOOL)hasPendingCallbacks;
- (BOOL)hasReceivedRemoteDeviceUpdate;
- (unsigned int)hostApplicationState;
- (id)init;
- (id)instanceIdentifier;
- (id)model;
- (id)paymentService;
- (id)paymentWebService;
- (void)prepare;
- (unsigned int)prepareTransactionDetailsCounter;
- (void)setAggregateDictionary:(id)arg1;
- (void)setAwaitingClientCallbackReply:(BOOL)arg1;
- (void)setAwaitingWebServiceResponse:(BOOL)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setContinuityPaymentCoordinator:(id)arg1;
- (void)setContinuityPaymentService:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasReceivedRemoteDeviceUpdate:(BOOL)arg1;
- (void)setHostApplicationState:(unsigned int)arg1;
- (void)setInstanceIdentifier:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPaymentService:(id)arg1;
- (void)setPaymentWebService:(id)arg1;
- (void)setPrepareTransactionDetailsCounter:(unsigned int)arg1;
- (void)setUpdatePaymentDeviceTimeout:(double)arg1;
- (void)start;
- (unsigned int)state;
- (double)updatePaymentDeviceTimeout;
- (BOOL)useSecureElement;

@end
