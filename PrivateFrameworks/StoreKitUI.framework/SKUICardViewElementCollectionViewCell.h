/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICardViewElementCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIAdvertisingSelectable, SKUIAdvertisingSelectionForardingTargetAction, SKUIPerspectiveView, SKUIViewElementView> {
    UIView * _adCardBackgroundView;
    SKUISizeValue * _artworkBoundingSize;
    NSHashTable * _artworkRelatedChildViewElementViews;
    <SKUIPerspectiveView> * _backgroundViewWithParallax;
    SKUIBackgroundImageWrapperForHorizontalLockup * _backgroundWrapper;
    SKUICardViewElement * _cardElement;
    CALayer * _compactAdCardHairlineLayer;
    BOOL  _hasBottomAlignedItems;
    NSMapTable * _imageViewToImageResourceCacheKey;
    BOOL  _isActivityCard;
    SKUICardLayout * _layout;
    SKUIViewElement * _productImageElement;
    UIView * _programmedCardBackgroundView;
    NSMapTable * _viewElements;
}

@property (nonatomic, retain) UIView *adCardBackgroundView;
@property (nonatomic, copy) SKUISizeValue *artworkBoundingSize;
@property (nonatomic, retain) CALayer *compactAdCardHairlineLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *impressionIdentifier;
@property (nonatomic, readonly) NSString *lineItem;
@property (readonly) Class superclass;

+ (float)_defaultWidthForLockupWithContext:(id)arg1;
+ (struct CGSize { float x1; float x2; })artworkBoundingSizeWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (float)maximumPerspectiveHeightForSize:(struct CGSize { float x1; float x2; })arg1;
+ (struct CGSize { float x1; float x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (float)_dividerHeight:(id)arg1;
- (void)_imageTapAction:(id)arg1;
- (void)_performDefaultActionForViewElement:(id)arg1;
- (id)adCardBackgroundView;
- (void)applyLayoutAttributes:(id)arg1;
- (id)artworkBoundingSize;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)compactAdCardHairlineLayer;
- (id)impressionIdentifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)lineItem;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void)setAdCardBackgroundView:(id)arg1;
- (void)setArtworkBoundingSize:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCompactAdCardHairlineLayer:(id)arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setVanishingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)skuiadvertising_advertSelectionEventShouldBeForwarded:(id)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
