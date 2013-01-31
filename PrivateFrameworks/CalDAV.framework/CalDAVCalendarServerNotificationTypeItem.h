/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem  {
    CoreDAVItemWithNoChildren *_inviteNotification;
    CoreDAVItemWithNoChildren *_inviteReply;
    CoreDAVItemWithNoChildren *_resourceChanged;
}

@property(retain) CoreDAVItemWithNoChildren * inviteNotification;
@property(retain) CoreDAVItemWithNoChildren * inviteReply;
@property(retain) CoreDAVItemWithNoChildren * resourceChanged;
@property(readonly) BOOL isInviteReply;
@property(readonly) BOOL isInviteNotification;
@property(readonly) BOOL isResourceChanged;


- (id)description;
- (void)dealloc;
- (id)copyParseRules;
- (BOOL)notificationNameMatches:(id)arg1;
- (id)resourceChanged;
- (id)inviteReply;
- (id)inviteNotification;
- (void)setResourceChanged:(id)arg1;
- (void)setInviteReply:(id)arg1;
- (void)setInviteNotification:(id)arg1;
- (BOOL)notificationNameIn:(id)arg1;
- (BOOL)isResourceChanged;
- (BOOL)isInviteReply;
- (BOOL)isInviteNotification;

@end
