/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL, UIImage;

@interface UIActivityItemURLRep : NSObject  {
    int _attachmentURLType;
    NSURL *_URL;
    UIImage *_thumbnail;
}

@property(retain) NSURL * URL;
@property(retain) UIImage * thumbnail;
@property int attachmentURLType;


- (id)URL;
- (void)dealloc;
- (id)thumbnail;
- (void)setAttachmentURLType:(int)arg1;
- (int)attachmentURLType;
- (void)setThumbnail:(id)arg1;
- (void)setURL:(id)arg1;
- (BOOL)isFileURL;
- (id)scheme;

@end
