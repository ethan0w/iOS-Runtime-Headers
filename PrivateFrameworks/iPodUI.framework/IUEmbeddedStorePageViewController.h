/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SSURLRequestProperties, SUStorePageViewController;

@interface IUEmbeddedStorePageViewController : SUViewController  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _contentBoundsHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadHandler;

    SSURLRequestProperties *_requestProperties;
    SUStorePageViewController *_storePageViewController;
}

@property(readonly) SSURLRequestProperties * requestProperties;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentBounds;
@property(copy) id contentBoundsHandler;
@property(copy) id loadHandler;


- (void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2;
- (id)requestProperties;
- (void)_documentBoundsChangeNotification:(id)arg1;
- (id)viewControllerFactory;
- (void)setLoadHandler:(id)arg1;
- (id)loadHandler;
- (void)setContentBoundsHandler:(id)arg1;
- (id)contentBoundsHandler;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)loadView;
- (id)initWithRequestProperties:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;

@end
