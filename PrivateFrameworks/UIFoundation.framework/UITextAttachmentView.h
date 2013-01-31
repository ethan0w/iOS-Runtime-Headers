/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSTextAttachment, UIImage;

@interface UITextAttachmentView : UIView <NSTextAttachmentCell> {
    UIImage *_image;
    NSTextAttachment *_attachment;
}

@property(retain) UIImage * image;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } drawingBounds;
@property NSTextAttachment * attachment;

+ (id)viewForImage:(id)arg1;
+ (id)viewForData:(id)arg1 ofType:(id)arg2;

- (id)attachment;
- (void)setAttachment:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })drawingBounds;
- (void)setDrawingBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithContentView:(id)arg1;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 characterIndex:(unsigned int)arg3 layoutManager:(id)arg4;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 characterIndex:(unsigned int)arg3;
- (struct CGPoint { float x1; float x2; })cellBaselineOffset;
- (struct CGSize { float x1; float x2; })cellSize;
- (void)dealloc;
- (id)image;
- (id)contentView;
- (void)setImage:(id)arg1;

@end
