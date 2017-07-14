/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIChartsDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUIResourceLoaderDelegate> {
    SKUIChartColumnsView * _chartsView;
    NSMutableArray * _columnViewControllers;
    SKUIResourceLoader * _resourceLoader;
    SKUIChartsTemplateViewElement * _templateElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_chartInsets;
- (id)_columnViewControllers;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;
- (id)_resourceLoader;
- (int)_visibleColumnCountForWidth:(float)arg1;
- (id)contentScrollView;
- (void)documentDidUpdate:(id)arg1;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (void)loadView;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(int)arg2;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { float x1; float x2; })arg2;
- (void)skui_viewWillAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
