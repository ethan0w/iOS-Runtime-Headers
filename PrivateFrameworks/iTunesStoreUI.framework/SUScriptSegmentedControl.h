/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUStorePageViewController, NSArray, NSString, SUSegmentedControl, NSNumber;

@interface SUScriptSegmentedControl : SUScriptObject  {
    NSArray *_segments;
    int _style;
}

@property(retain) SUSegmentedControl * nativeSegmentedControl;
@property(readonly) int nativeSelectedIndex;
@property(copy) NSString * cancelButtonTitle;
@property(copy) NSString * moreListTitle;
@property int maximumNumberOfItems;
@property float maximumWidth;
@property(retain) id segments;
@property(retain) NSNumber * selectedIndex;
@property(readonly) NSNumber * selectedSegmentIndex;
@property(copy) id showsMoreListAutomatically;
@property(retain) NSString * style;
@property(copy) id tintColor;
@property int tintStyle;
@property(readonly) unsigned int controlStateDisabled;
@property(readonly) unsigned int controlStateHighlighted;
@property(readonly) unsigned int controlStateNormal;
@property(readonly) unsigned int controlStateSelected;
@property(readonly) NSNumber * noSegmentIndex;
@property(readonly) int tintStyleDark;
@property(readonly) int tintStyleDefault;
@property(readonly) SUSegmentedControl * activeSegmentedControl;
@property(readonly) NSArray * rawSegments;
@property(readonly) SUStorePageViewController * storePageViewController;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)rawSegments;
- (int)tintStyleDefault;
- (int)tintStyleDark;
- (id)noSegmentIndex;
- (unsigned int)controlStateSelected;
- (unsigned int)controlStateNormal;
- (unsigned int)controlStateHighlighted;
- (unsigned int)controlStateDisabled;
- (id)titleShadowColorForControlState:(unsigned int)arg1;
- (id)titleColorForControlState:(unsigned int)arg1;
- (void)showPopoverController:(id)arg1 fromSegmentIndex:(int)arg2 animated:(BOOL)arg3;
- (void)showMoreListAnimated:(BOOL)arg1;
- (void)setTitleShadowColor:(id)arg1 forControlState:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forControlState:(unsigned int)arg2;
- (id)makeSegmentWithTitle:(id)arg1 userInfo:(id)arg2;
- (void)hideMoreListAnimated:(BOOL)arg1;
- (id)showsMoreListAutomatically;
- (int)_sectionsStyleForString:(id)arg1;
- (void)setShowsMoreListAutomatically:(id)arg1;
- (void)_reloadSegmentedControl:(id)arg1 withSegments:(id)arg2;
- (void)_reloadViewControllerPageSectionGroup;
- (void)setMaximumNumberOfItems:(int)arg1;
- (void)_setRawSegments:(id)arg1;
- (id)storePageViewController;
- (int)maximumNumberOfItems;
- (void)_setColor:(id)arg1 forTitleTextAttribute:(id)arg2 controlState:(unsigned int)arg3;
- (id)_newPageSectionGroupWithSegments:(id)arg1;
- (id)activeSegmentedControl;
- (id)_newNativeSegmentedControl;
- (void)setSegments:(id)arg1;
- (id)_newSegmentsFromPageSectionGroup:(id)arg1;
- (void)setNativeSegmentedControl:(id)arg1;
- (id)cancelButtonTitle;
- (void)setCancelButtonTitle:(id)arg1;
- (id)segments;
- (int)nativeSelectedIndex;
- (id)newPageSectionGroup;
- (id)nativeSegmentedControl;
- (id)initWithPageSectionGroup:(id)arg1;
- (void)setTintStyle:(int)arg1;
- (int)tintStyle;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)moreListTitle;
- (void)setMoreListTitle:(id)arg1;
- (id)attributeKeys;
- (void)dealloc;
- (id)selectedSegmentIndex;
- (void)setSelectedIndex:(id)arg1;
- (id)selectedIndex;
- (float)maximumWidth;
- (void)setMaximumWidth:(float)arg1;
- (id)style;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)setStyle:(id)arg1;

@end
