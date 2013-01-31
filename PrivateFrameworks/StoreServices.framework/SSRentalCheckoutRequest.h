/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSArray;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {
    NSNumber *_accountIdentifier;
    long long _downloadIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
}

@property(readonly) NSArray * sinfs;
@property(readonly) NSNumber * accountIdentifier;
@property(readonly) NSNumber * rentalKeyIdentifier;
@property(readonly) long long downloadIdentifier;


- (id)accountIdentifier;
- (id)initWithSinfs:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)rentalKeyIdentifier;
- (void)startWithCompletionBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)downloadIdentifier;
- (id)initWithDownloadIdentifier:(long long)arg1;
- (id)sinfs;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (void)startWithConnectionResponseBlock:(id)arg1;

@end
