/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptSplitViewController, SUScriptNavigationItem, SUScriptPopOver, SUScriptSection, SUScriptNavigationController, NSString, SUScriptViewController, UIViewController, NSArray;

@interface SUScriptViewController : SUScriptObject  {
    NSArray *_scriptToolbarItems;
}

@property(readonly) SUScriptViewController * volumeViewController;
@property(retain) UIViewController * nativeViewController;
@property(retain) id backgroundColor;
@property(readonly) NSString * contextDictionary;
@property(retain) SUScriptViewController * inputAccessoryViewController;
@property(retain) NSString * modalPresentationStyle;
@property(readonly) SUScriptViewController * modalViewController;
@property(readonly) SUScriptNavigationController * navigationController;
@property(readonly) SUScriptNavigationItem * navigationItem;
@property(readonly) SUScriptPopOver * popOver;
@property(readonly) SUScriptViewController * presentingViewController;
@property(retain) SUScriptSection * section;
@property id showsLibraryButton;
@property(readonly) SUScriptSplitViewController * splitViewController;
@property(copy) id toolbarItems;
@property(retain) id topBackgroundColor;
@property(retain) SUScriptViewController * transientViewController;
@property id wantsFullScreenLayout;
@property(readonly) NSString * modalPresentationStyleNameFormSheet;
@property(readonly) NSString * modalPresentationStyleNameFullScreen;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)volumeViewController;
- (id)_parentViewControllerForVolumeViewController;
- (id)popOver;
- (void)presentVolumeViewController:(id)arg1 animated:(id)arg2;
- (void)dismissVolumeViewControllerAnimated:(id)arg1;
- (int)_transitionForString:(id)arg1;
- (id)newScriptColorWithValue:(id)arg1;
- (id)modalPresentationStyleNameFullScreen;
- (id)modalPresentationStyleNameFormSheet;
- (id)contextDictionary;
- (void)_presentModalViewController:(id)arg1 withTransition:(id)arg2;
- (void)_dismissModalViewControllerWithTransition:(id)arg1;
- (void)_dismissModalViewControllerAnimated:(BOOL)arg1;
- (id)newNativeViewController;
- (BOOL)equals:(id)arg1;
- (id)nativeViewController;
- (void)tearDownUserInterface;
- (void)runScrollTest:(id)arg1 withDelta:(float)arg2 forIterations:(int)arg3;
- (void)setNativeViewController:(id)arg1;
- (id)showsLibraryButton;
- (id)inputAccessoryViewController;
- (void)setShowsLibraryButton:(id)arg1;
- (void)setInputAccessoryViewController:(id)arg1;
- (void)setTopBackgroundColor:(id)arg1;
- (id)topBackgroundColor;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)dealloc;
- (void)setSection:(id)arg1;
- (void)setTransientViewController:(id)arg1;
- (id)transientViewController;
- (void)setToolbarItems:(id)arg1;
- (id)toolbarItems;
- (void)setToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (id)splitViewController;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)dismissModalViewControllerWithTransition:(id)arg1;
- (void)presentModalViewController:(id)arg1 withTransition:(id)arg2;
- (id)modalViewController;
- (void)setWantsFullScreenLayout:(id)arg1;
- (void)setModalPresentationStyle:(id)arg1;
- (id)navigationController;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (id)section;
- (id)navigationItem;
- (id)backgroundColor;
- (id)modalPresentationStyle;
- (id)wantsFullScreenLayout;
- (id)presentingViewController;
- (void)setBackgroundColor:(id)arg1;

@end
