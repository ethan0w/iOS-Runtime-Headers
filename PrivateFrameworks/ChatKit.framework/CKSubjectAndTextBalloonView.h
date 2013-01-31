/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIView<CKTextBalloonContentView>, UIView, NSAttributedString;

@interface CKSubjectAndTextBalloonView : CKTextBalloonView  {
    int _subjectAlignment;
    NSAttributedString *_attributedSubject;
    UIView<CKTextBalloonContentView> *_subjectView;
    UIView *_dividerLineView;
    struct CGSize { 
        float width; 
        float height; 
    } _subjectSize;
}

@property(copy) NSAttributedString * attributedSubject;
@property(retain) UIView<CKTextBalloonContentView> * subjectView;
@property int subjectAlignment;
@property(retain) UIView * dividerLineView;
@property struct CGSize { float x1; float x2; } subjectSize;


- (id)description;
- (void)dealloc;
- (void)copyToPasteboard;
- (void)setAttributedSubject:(id)arg1;
- (void)setSubjectView:(id)arg1;
- (void)setSubjectAlignment:(int)arg1;
- (void)updateSubjectAndTextViews;
- (void)setSubjectSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDividerLineView:(id)arg1;
- (struct CGSize { float x1; float x2; })subjectSize;
- (id)dividerLineView;
- (id)subjectView;
- (id)attributedSubject;
- (int)subjectAlignment;
- (void)updateSubjectViewToClass:(Class)arg1;
- (void)updateTextShadow;
- (void)updateFontSize;
- (void)prepareForReuse;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
