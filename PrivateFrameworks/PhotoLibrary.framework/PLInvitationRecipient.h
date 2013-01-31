/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, MFComposeRecipient;

@interface PLInvitationRecipient : NSObject  {
    MFComposeRecipient *_mfRecipient;
    NSString *_emailAddress;
    NSString *_firstName;
    NSString *_lastName;
}

@property(readonly) NSString * emailAddress;
@property(readonly) NSString * firstName;
@property(readonly) NSString * lastName;


- (void)dealloc;
- (id)initWithRecipient:(id)arg1;
- (id)emailAddress;
- (id)displayName;
- (id)lastName;
- (id)firstName;

@end
