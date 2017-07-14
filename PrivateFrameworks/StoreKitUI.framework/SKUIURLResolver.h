/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIURLResolver : NSObject <SKUIPassbookLoaderDelegate> {
    SKUIClientContext * _clientContext;
    <SKUIURLResolverDelegate> * _delegate;
    <UINavigationControllerDelegate> * _navigationControllerDelegate;
    NSOperationQueue * _operationQueue;
    SKUIPassbookLoader * _passbookLoader;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIURLResolverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <UINavigationControllerDelegate> *navigationControllerDelegate;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (readonly) Class superclass;

+ (id)tabIdentifierForURL:(id)arg1;

- (void).cxx_destruct;
- (void)_addPassbookPassWithURL:(id)arg1;
- (void)_handleSafariScriptDataUpdate:(id)arg1;
- (id)_newHTMLViewControllerWithSection:(id)arg1;
- (void)_performLookupWithURL:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_resolveURLRequest:(id)arg1 withOriginURL:(id)arg2;
- (void)_selectTabWithIdentifier:(id)arg1;
- (void)_sendDidFinishWithResult:(BOOL)arg1;
- (void)_showAccountViewControllerWithURL:(id)arg1;
- (void)_showBagURLWithURL:(id)arg1;
- (void)_showDonationViewControllerWithURL:(id)arg1;
- (void)_showGiftViewControllerWithURL:(id)arg1;
- (void)_showPlaceholderViewController;
- (void)_showRedeemViewControllerWithURL:(id)arg1;
- (void)_showSearchWithURL:(id)arg1;
- (void)_showViewControllerWithResponse:(id)arg1 fromOperation:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithClientContext:(id)arg1;
- (id)navigationControllerDelegate;
- (id)operationQueue;
- (void)passbookLoaderDidFinish:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)resolveURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavigationControllerDelegate:(id)arg1;
- (void)setOperationQueue:(id)arg1;

@end
