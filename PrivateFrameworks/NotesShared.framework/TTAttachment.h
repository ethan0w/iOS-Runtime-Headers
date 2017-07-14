/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface TTAttachment : NSObject <TTAttachment> {
    NSString * _attachmentIdentifier;
    NSString * _attachmentUTI;
}

@property (nonatomic, retain) NSString *attachmentIdentifier;
@property (nonatomic, retain) NSString *attachmentUTI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)isAttachment:(id)arg1 equalToModelComparable:(id)arg2;

- (void).cxx_destruct;
- (id)attachmentIdentifier;
- (id)attachmentUTI;
- (BOOL)isEqualToModelComparable:(id)arg1;
- (void)setAttachmentIdentifier:(id)arg1;
- (void)setAttachmentUTI:(id)arg1;

@end