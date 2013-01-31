/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIButton, MPMediaDownloadObserver, MPDownloadProgressIndicator, IUMediaTableCellContentView, IUTableCellConfiguration;

@interface IUMediaTableCell : UITableViewCell  {
    UIButton *_downloadButton;
    MPMediaDownloadObserver *_downloadObserver;
    MPDownloadProgressIndicator *_downloadProgressIndicator;
    IUMediaTableCellContentView *_mediaContentView;
    UIButton *_purchaseActionButton;
    int _visibleSelectionStyle;
    UIButton *_otgPlusButton;
    int _mediaDisclosureStyle;
    BOOL _canShowPurchasableMediaSubviews;
    int _mediaEditingDisclosureStyle;
    id _mediaCellTarget;
    SEL _mediaCellAccessoryAction;
}

@property BOOL canShowPurchasableMediaSubviews;
@property(retain) IUTableCellConfiguration * configuration;
@property BOOL useSubviewLayout;
@property BOOL drawInAlternateStyle;
@property BOOL drawAsDisabled;
@property BOOL transparentSelectionHighlightStyle;
@property int mediaDisclosureStyle;
@property int mediaEditingDisclosureStyle;
@property id mediaCellTarget;
@property SEL mediaCellAccessoryAction;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } artworkFrame;
@property BOOL hideArtwork;


- (void)setDrawAsDisabled:(BOOL)arg1;
- (BOOL)drawAsDisabled;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (int)mediaEditingDisclosureStyle;
- (BOOL)canShowPurchasableMediaSubviews;
- (int)mediaDisclosureStyle;
- (void)setMediaCellAccessoryAction:(SEL)arg1;
- (void)setMediaCellTarget:(id)arg1;
- (void)setTransparentSelectionHighlightStyle:(BOOL)arg1;
- (BOOL)transparentSelectionHighlightStyle;
- (void)setMediaEditingDisclosureStyle:(int)arg1;
- (void)setMediaDisclosureStyle:(int)arg1;
- (void)setCanShowPurchasableMediaSubviews:(BOOL)arg1;
- (void)_downloadButtonAction:(id)arg1;
- (void)_purchaseButtonPressed:(id)arg1;
- (id)mediaCellTarget;
- (SEL)mediaCellAccessoryAction;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })artworkFrame;
- (void)setDrawInAlternateStyle:(BOOL)arg1;
- (void)setDrawInAlternateStyle:(BOOL)arg1 forceRedraw:(BOOL)arg2;
- (BOOL)drawInAlternateStyle;
- (void)setUseSubviewLayout:(BOOL)arg1;
- (id)_otgPlusButton;
- (void)setConfigurationNeedsDisplay;
- (void)setAccessoryView:(id)arg1 reloadConfiguration:(BOOL)arg2;
- (void)_updatePurchasableMediaSubviewsWithReload:(BOOL)arg1;
- (void)_updateMediaContentViewFrame;
- (void)_drawBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (BOOL)useSubviewLayout;
- (void)_clearPurchaseActionConfigurationButton;
- (void)_fixupDebugBackgroundColors;
- (id)_mediaContentView;
- (void)setHideArtwork:(BOOL)arg1;
- (BOOL)hideArtwork;
- (void)_purchasableMediaDidChangeNotification:(id)arg1;
- (void)_canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)setAccessoryView:(id)arg1;
- (void)_didCreateContentView;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)setSelectionStyle:(int)arg1;
- (void)setShowingDeleteConfirmation:(BOOL)arg1;
- (id)_contentString;
- (void)prepareForReuse;
- (void)_updateHighlightColors;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)scriptingInfoWithChildren;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_cancelButtonAction:(id)arg1;

@end
