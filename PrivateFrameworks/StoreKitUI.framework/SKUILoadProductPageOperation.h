/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILoadProductPageOperation : NSOperation {
    SKUIClientContext * _clientContext;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    long long  _itemID;
    SSMetricsPageEvent * _metricsPageEvent;
    id /* block */  _outputBlock;
    NSURLRequest * _urlRequest;
}

@property (readonly) SSMetricsPageEvent *metricsPageEvent;
@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (id)_initSKUILoadProductPageOperation;
- (id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2;
- (id)initWithProductPageURLRequest:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (id)metricsPageEvent;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;

@end
