/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class UITextAttachmentView, NSData, NSString;

@interface NSTextAttachment : NSObject <NSCoding> {
    NSData *_data;
    NSString *_uti;
    UITextAttachmentView *_wrapperView;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } drawingBounds;
@property(retain) id image;


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })drawingBounds;
- (void)setDrawingBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_wrapperView;
- (void)_setWrapperView:(id)arg1;
- (id)initWithFileWrapper:(id)arg1;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (id)attachmentCell;
- (void)dealloc;
- (id)fileWrapper;
- (id)image;
- (void)setContentView:(id)arg1;
- (id)contentView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setImage:(id)arg1;

@end
