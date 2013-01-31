/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, GKMultiplayerCollectionViewLayout, UICollectionViewLayoutAttributes;

@interface GKMultiplayerCollectionViewLayout : UICollectionViewLayout <NSCopying> {
    struct CGSize { 
        float width; 
        float height; 
    } _buttonGap;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _insets;
    UICollectionViewLayoutAttributes *_backgroundAttributes;
    NSArray *_layoutData;
    float _infoHeight;
    float _titleOffset;
    BOOL _shouldShowInfoLabel;
    UICollectionViewLayoutAttributes *_participantRangeAttributes;
    struct CGSize { 
        float width; 
        float height; 
    } _buttonSize;
    float _infoOffset;
    float _participantsOffset;
    float _viewWidth;
    struct CGSize { 
        float width; 
        float height; 
    } _participantGap;
    GKMultiplayerCollectionViewLayout *_oldLayout;
    struct CGSize { 
        float width; 
        float height; 
    } _participantSize;
    UICollectionViewLayoutAttributes *_inviteButtonAttributes;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _backgroundInsets;
    float _buttonOrStatusOffset;
    BOOL _shouldShowNearbySwitch;
    UICollectionViewLayoutAttributes *_playNowButtonAttributes;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    UICollectionViewLayoutAttributes *_statusAttributes;
    int _status;
    UICollectionViewLayoutAttributes *_nearbySwitchAttributes;
    float _nearbyOffset;
    struct CGSize { 
        float width; 
        float height; 
    } _statusSize;
    UICollectionViewLayoutAttributes *_infoAttributes;
    float _nearbyHeight;
}

@property int status;
@property(retain) UICollectionViewLayoutAttributes * backgroundAttributes;
@property(retain) UICollectionViewLayoutAttributes * participantRangeAttributes;
@property(retain) UICollectionViewLayoutAttributes * inviteButtonAttributes;
@property(retain) UICollectionViewLayoutAttributes * playNowButtonAttributes;
@property(retain) UICollectionViewLayoutAttributes * statusAttributes;
@property(retain) UICollectionViewLayoutAttributes * nearbySwitchAttributes;
@property(retain) UICollectionViewLayoutAttributes * infoAttributes;
@property(retain) NSArray * layoutData;
@property(retain) GKMultiplayerCollectionViewLayout * oldLayout;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } insets;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } backgroundInsets;
@property float titleOffset;
@property float participantsOffset;
@property struct CGSize { float x1; float x2; } participantGap;
@property struct CGSize { float x1; float x2; } participantSize;
@property float buttonOrStatusOffset;
@property struct CGSize { float x1; float x2; } buttonSize;
@property struct CGSize { float x1; float x2; } buttonGap;
@property struct CGSize { float x1; float x2; } statusSize;
@property BOOL shouldShowNearbySwitch;
@property float nearbyOffset;
@property float nearbyHeight;
@property BOOL shouldShowInfoLabel;
@property float infoOffset;
@property float infoHeight;
@property struct CGSize { float x1; float x2; } contentSize;
@property float viewWidth;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)prepareLayout;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)setTitleOffset:(float)arg1;
- (float)titleOffset;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)setNearbyHeight:(float)arg1;
- (float)nearbyHeight;
- (void)setStatusSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })statusSize;
- (void)setNearbyOffset:(float)arg1;
- (float)nearbyOffset;
- (void)setShouldShowNearbySwitch:(BOOL)arg1;
- (void)setButtonOrStatusOffset:(float)arg1;
- (float)buttonOrStatusOffset;
- (void)setParticipantSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })participantSize;
- (void)setParticipantGap:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })participantGap;
- (void)setViewWidth:(float)arg1;
- (float)viewWidth;
- (void)setParticipantsOffset:(float)arg1;
- (float)participantsOffset;
- (void)setInfoOffset:(float)arg1;
- (float)infoOffset;
- (void)setButtonSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })buttonSize;
- (void)setShouldShowInfoLabel:(BOOL)arg1;
- (BOOL)shouldShowInfoLabel;
- (void)setInfoHeight:(float)arg1;
- (float)infoHeight;
- (void)setInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })insets;
- (void)setButtonGap:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })buttonGap;
- (id)oldLayout;
- (void)setOldLayout:(id)arg1;
- (int)numberOfColumnForWidth:(float)arg1;
- (void)prepareMetrics;
- (void)setInfoAttributes:(id)arg1;
- (id)infoAttributes;
- (void)setNearbySwitchAttributes:(id)arg1;
- (id)nearbySwitchAttributes;
- (void)setStatusAttributes:(id)arg1;
- (id)statusAttributes;
- (void)setPlayNowButtonAttributes:(id)arg1;
- (id)playNowButtonAttributes;
- (void)setInviteButtonAttributes:(id)arg1;
- (id)inviteButtonAttributes;
- (void)setParticipantRangeAttributes:(id)arg1;
- (id)participantRangeAttributes;
- (void)setBackgroundAttributes:(id)arg1;
- (id)backgroundAttributes;
- (void)setLayoutData:(id)arg1;
- (id)layoutData;
- (BOOL)shouldShowNearbySwitch;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })backgroundInsets;
- (void)setBackgroundInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end
