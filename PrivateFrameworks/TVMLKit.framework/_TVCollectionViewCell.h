/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVCollectionViewCell : UICollectionViewCell <TVAuxiliaryViewSelecting> {
    BOOL  _allowsFocus;
    BOOL  _pressIsAnimating;
    UIView<TVAuxiliaryViewSelecting> * _selectingView;
    BOOL  _unpressOnEndAnimating;
}

@property (nonatomic) BOOL allowsFocus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) UIView<TVAuxiliaryViewSelecting> *selectingView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearPressState;
- (id)_preferredConfigurationForFocusAnimation:(int)arg1 inContext:(id)arg2;
- (id)_selectingView;
- (void)_showPressState;
- (BOOL)allowsFocus;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)selectingView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })selectionMarginsForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAllowsFocus:(BOOL)arg1;
- (void)setSelectingView:(id)arg1;

@end
