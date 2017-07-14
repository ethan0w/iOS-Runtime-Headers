/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBar : UIView <_UIShadowedView> {
    _UITabBarAppearanceStorage * _appearanceStorage;
    NSString * _backdropViewLayerGroupName;
    int  _barMetrics;
    int  _barOrientation;
    NSArray * _customizationItems;
    UIView * _customizeView;
    <UITabBarDelegate> * _delegate;
    BOOL  _hidesShadow;
    int  _imageStyle;
    float  _itemDimension;
    int  _itemPositioning;
    float  _itemSpacing;
    NSArray * _items;
    unsigned int  _preferredFocusHeading;
    BOOL  _scrollsItems;
    UITabBarItem * _selectedItem;
    BOOL  _showsHighlightedState;
    struct { 
        unsigned int wasEnabled : 1; 
        unsigned int customized : 1; 
        unsigned int downButtonSentAction : 1; 
        unsigned int isLocked : 1; 
        unsigned int barStyle : 3; 
        unsigned int barTranslucence : 3; 
        unsigned int backgroundNeedsUpdate : 1; 
        unsigned int hiddenAwaitingFocus : 1; 
        unsigned int focusedItemHighlightShouldBeVisible : 1; 
        unsigned int hasVibrantLabels : 1; 
        unsigned int blurDisabled : 1; 
        unsigned int disableBlurTinting : 1; 
        unsigned int pendingFocusAction : 1; 
    }  _tabBarFlags;
    int  _tabBarSizing;
    _UITabBarVisualProvider * _visualProvider;
}

@property (setter=_setAccessoryView:, nonatomic, retain) UIView *_accessoryView;
@property (setter=_setBackgroundNeedsUpdate:, nonatomic) BOOL _backgroundNeedsUpdate;
@property (setter=_setBarMetrics:, nonatomic) int _barMetrics;
@property (setter=_setBarOrientation:, nonatomic) int _barOrientation;
@property (setter=_setHidesShadow:, nonatomic) BOOL _hidesShadow;
@property (setter=_setImageStyle:, nonatomic) int _imageStyle;
@property (setter=_setInterTabButtonSpacing:, nonatomic) float _interTabButtonSpacing;
@property (setter=_setNextSelectionSlideDuration:, nonatomic) float _nextSelectionSlideDuration;
@property (setter=_setScrollsItems:, nonatomic) BOOL _scrollsItems;
@property (setter=_setShowsHighlightedState:, nonatomic) BOOL _showsHighlightedState;
@property (setter=_setTabBarSizing:, nonatomic) int _tabBarSizing;
@property (setter=_setTabButtonWidth:, nonatomic) float _tabButtonWidth;
@property (getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:, nonatomic, retain) NSString *backdropViewLayerGroupName;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic) int barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (getter=isCustomizing, nonatomic, readonly) BOOL customizing;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITabBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_focusedItemHighlightShouldBeVisible, setter=_setFocusedItemHightlightShouldBeVisible:, nonatomic) BOOL focusedItemHighlightShouldBeVisible;
@property (getter=_focusedTabBarItem, nonatomic, readonly) UITabBarItem *focusedTabBarItem;
@property (readonly) unsigned int hash;
@property (getter=_isHiddenAwaitingFocus, setter=_setHiddenAwaitingFocus:, nonatomic) BOOL hiddenAwaitingFocus;
@property (nonatomic) int itemPositioning;
@property (nonatomic) float itemSpacing;
@property (nonatomic) float itemWidth;
@property (nonatomic, copy) NSArray *items;
@property (getter=isLocked, nonatomic) BOOL locked;
@property (getter=_pendingFocusAction, setter=_setPendingFocusAction:, nonatomic) BOOL pendingFocusAction;
@property (getter=_preferredFocusHeading, setter=_setPreferredFocusHeading:, nonatomic) unsigned int preferredFocusHeading;
@property (nonatomic, retain) UIColor *selectedImageTintColor;
@property (nonatomic) UITabBarItem *selectedItem;
@property (nonatomic, retain) UIImage *selectionIndicatorImage;
@property (nonatomic, retain) UIImage *shadowImage;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (getter=isTranslucent, nonatomic) BOOL translucent;
@property (nonatomic, copy) UIColor *unselectedItemTintColor;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)_initializeForIdiom:(int)arg1;
+ (id)_unselectedTabTintColorForView:(id)arg1;
+ (id)_visualProviderForTabBar:(id)arg1;

- (void).cxx_destruct;
- (void)_accessibilityButtonShapesEnabledDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (id)_accessoryView;
- (void)_adjustButtonSelection:(id)arg1;
- (id)_appearanceStorage;
- (float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (id)_backdropViewLayerGroupName;
- (BOOL)_backgroundNeedsUpdate;
- (id)_backgroundView;
- (int)_barMetrics;
- (int)_barOrientation;
- (BOOL)_blurEnabled;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (void)_configureItems:(id)arg1;
- (void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 swapping:(BOOL)arg3;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_customizeDoneButtonAction:(id)arg1;
- (void)_customizeWithAvailableItems:(id)arg1;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)_disableBlurTinting;
- (void)_dismissCustomizeSheet:(BOOL)arg1;
- (id)_dividerImageForLeftButtonState:(unsigned int)arg1 rightButtonState:(unsigned int)arg2;
- (void)_doCommonTabBarInit;
- (int)_effectiveBarOrientation;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChange;
- (id)_effectiveUnselectedTabTintColorConsideringView:(id)arg1;
- (id)_effectiveUnselectedTintColor;
- (void)_ensureUnfocusedItemsAreNotSelected;
- (BOOL)_focusedItemHighlightShouldBeVisible;
- (id)_focusedTabBarItem;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;
- (BOOL)_hidesShadow;
- (int)_imageStyle;
- (float)_interTabButtonSpacing;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_isEligibleForFocus;
- (BOOL)_isHiddenAwaitingFocus;
- (BOOL)_isTranslucent;
- (void)_makeCurrentButtonFirstResponder;
- (float)_nextSelectionSlideDuration;
- (BOOL)_pendingFocusAction;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionAllItems;
- (unsigned int)_preferredFocusHeading;
- (float)_scaleFactorForItems:(id)arg1 spacing:(float)arg2 dimension:(float)arg3 maxWidth:(float)arg4;
- (BOOL)_scrollsItems;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setAccessoryView:(id)arg1;
- (void)_setBackdropViewLayerGroupName:(id)arg1;
- (void)_setBackgroundImage:(id)arg1;
- (void)_setBackgroundNeedsUpdate:(BOOL)arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setBarMetrics:(int)arg1;
- (void)_setBarOrientation:(int)arg1;
- (void)_setBlurEnabled:(BOOL)arg1;
- (void)_setDisableBlurTinting:(BOOL)arg1;
- (void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned int)arg2 rightButtonState:(unsigned int)arg3;
- (void)_setFocusedItemHightlightShouldBeVisible:(BOOL)arg1;
- (void)_setHiddenAwaitingFocus:(BOOL)arg1;
- (void)_setHidesShadow:(BOOL)arg1;
- (void)_setImageStyle:(int)arg1;
- (void)_setInterTabButtonSpacing:(float)arg1;
- (void)_setLabelFont:(id)arg1;
- (void)_setLabelShadowColor:(id)arg1;
- (void)_setLabelShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)_setLabelTextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)_setNextSelectionSlideDuration:(float)arg1;
- (void)_setPendingFocusAction:(BOOL)arg1;
- (void)_setPreferredFocusHeading:(unsigned int)arg1;
- (void)_setScrollsItems:(BOOL)arg1;
- (void)_setSelectionIndicatorImage:(id)arg1;
- (void)_setShadowAlpha:(float)arg1;
- (void)_setShowsHighlightedState:(BOOL)arg1;
- (void)_setTabBarSizing:(int)arg1;
- (void)_setTabButtonWidth:(float)arg1;
- (void)_setVibrantLabels:(BOOL)arg1;
- (void)_setVisualAltitude:(float)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { float x1; float x2; })arg1;
- (float)_shadowAlpha;
- (id)_shadowView;
- (BOOL)_showsHighlightedState;
- (BOOL)_subclassImplementsDrawRect;
- (void)_tabBarFinishedAnimating;
- (int)_tabBarSizing;
- (float)_tabButtonWidth;
- (float)_totalDimensionForItems:(id)arg1 spacing:(float)arg2 dimension:(float)arg3 scaleFactor:(float)arg4;
- (void)_updateTabBarItemView:(id)arg1;
- (void)_updateTintedImages:(id)arg1 selected:(BOOL)arg2;
- (BOOL)_vibrantLabels;
- (void)addConstraint:(id)arg1;
- (id)backgroundImage;
- (int)barStyle;
- (id)barTintColor;
- (void)beginCustomizingItems:(id)arg1;
- (BOOL)canBecomeFocused;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)dismissCustomizeSheet:(BOOL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)endCustomizingAnimated:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isCustomizing;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isLocked;
- (BOOL)isTranslucent;
- (int)itemPositioning;
- (float)itemSpacing;
- (float)itemWidth;
- (id)items;
- (void)layoutSubviews;
- (id)preferredFocusedItem;
- (void)removeConstraint:(id)arg1;
- (id)selectedImageTintColor;
- (id)selectedItem;
- (id)selectionIndicatorImage;
- (void)setBackgroundImage:(id)arg1;
- (void)setBarStyle:(int)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setItemPositioning:(int)arg1;
- (void)setItemSpacing:(float)arg1;
- (void)setItemWidth:(float)arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)setLocked:(BOOL)arg1;
- (void)setSelectedImageTintColor:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)setSelectionIndicatorImage:(id)arg1;
- (void)setSemanticContentAttribute:(int)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)setUnselectedItemTintColor:(id)arg1;
- (id)shadowImage;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unselectedItemTintColor;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void)pu_animateBarTransitionWithContext:(id)arg1;

@end
