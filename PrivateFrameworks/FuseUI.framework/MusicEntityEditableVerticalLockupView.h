/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityEditableVerticalLockupView : MusicEntityVerticalLockupView {
    UIView * _artworkEditingOverlayView;
    BOOL  _editing;
}

@property (nonatomic) <MusicEntityEditableVerticalLockupViewDelegate> *delegate;
@property (getter=isEditing, nonatomic) BOOL editing;

- (void).cxx_destruct;
- (void)_layoutEditingSubviews;
- (void)_layoutEditingSubviewsForEditing:(BOOL)arg1 editingViewsAlpha:(float)arg2;
- (BOOL)isEditing;
- (void)layoutSubviews;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;

@end
