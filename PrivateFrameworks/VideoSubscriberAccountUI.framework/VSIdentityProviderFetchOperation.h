/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSIdentityProviderFetchOperation : VSAsyncOperation {
    BOOL  _fetchFromStoreOnly;
    NSString * _identityProviderID;
    NSOperationQueue * _privateQueue;
    VSOptional * _result;
}

@property (nonatomic) BOOL fetchFromStoreOnly;
@property (nonatomic, copy) NSString *identityProviderID;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSOptional *result;

- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (BOOL)fetchFromStoreOnly;
- (id)identityProviderID;
- (id)init;
- (id)initWithIdentityProviderID:(id)arg1;
- (id)privateQueue;
- (id)result;
- (void)setFetchFromStoreOnly:(BOOL)arg1;
- (void)setIdentityProviderID:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setResult:(id)arg1;

@end
