/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, NSAttributedString;

@interface CKTextMessagePart : CKMessagePart  {
    NSAttributedString *_text;
    NSString *_contentLocation;
}

@property(copy) NSString * contentLocation;


- (BOOL)isDisplayable;
- (int)type;
- (id)description;
- (void)dealloc;
- (void)copyToPasteboard;
- (id)contentLocation;
- (id)detachedCopy;
- (id)initWithText:(id)arg1;
- (id)text;
- (void)setContentLocation:(id)arg1;

@end
