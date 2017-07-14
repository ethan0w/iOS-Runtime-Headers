/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKContactBalloonView : CKColoredBalloonView <CKContactBalloonViewProtocol> {
    UIImageView * _chevron;
    UIImageView * _contactImageView;
    CKMediaObject * _mediaObject;
    UILabel * _nameLabel;
    UILabel * _organizationLabel;
}

@property (nonatomic, retain) UIImageView *chevron;
@property (nonatomic, retain) UIImageView *contactImageView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UILabel *organizationLabel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (id)chevron;
- (void)configureForComposition:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;
- (id)contactImageView;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mediaObject;
- (id)nameLabel;
- (id)organizationLabel;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setChevron:(id)arg1;
- (void)setContactImageView:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setOrganizationLabel:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;

@end
