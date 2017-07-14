/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageLayoutNotifier : NSObject <TPPageControllerLayoutObserver> {
    TPPageController * _pageController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithPageController:(id)arg1;
- (void)pageController:(id)arg1 didLayoutPageAtIndex:(unsigned int)arg2 sectionIndex:(unsigned int)arg3 syncing:(BOOL)arg4;
- (void)teardown;

@end
