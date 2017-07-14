/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTSessionExistsConnection : NSObject <ASTConnection> {
    <ASTConnectionStatusDelegate> * _delegate;
    id /* block */  _didReceiveResponse;
    int  _networkDisconnectedRetryCount;
    NSURLRequest * _request;
    BOOL  _retryOnNetworkDisconnected;
    unsigned int  _rootOfTrust;
    NSArray * _serialNumbers;
    int  _state;
    NSString * _ticket;
    double  _timeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASTConnectionStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didReceiveResponse;
@property (readonly) unsigned int hash;
@property (nonatomic) int networkDisconnectedRetryCount;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic) BOOL retryOnNetworkDisconnected;
@property (nonatomic, readonly) unsigned int rootOfTrust;
@property (nonatomic, retain) NSArray *serialNumbers;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *ticket;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (id)delegate;
- (id /* block */)didReceiveResponse;
- (id)generateRequest;
- (id)initWithSerialNumbers:(id)arg1 ticket:(id)arg2 timeout:(double)arg3;
- (int)networkDisconnectedRetryCount;
- (id)request;
- (BOOL)retryOnNetworkDisconnected;
- (unsigned int)rootOfTrust;
- (id)serialNumbers;
- (void)setDelegate:(id)arg1;
- (void)setDidReceiveResponse:(id /* block */)arg1;
- (void)setNetworkDisconnectedRetryCount:(int)arg1;
- (void)setRequest:(id)arg1;
- (void)setRetryOnNetworkDisconnected:(BOOL)arg1;
- (void)setSerialNumbers:(id)arg1;
- (void)setState:(int)arg1;
- (void)setTicket:(id)arg1;
- (void)setTimeout:(double)arg1;
- (int)state;
- (id)ticket;
- (double)timeout;

@end
