/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailProposedTimeCell : EKEventDetailCell {
    EKCalendarEventInvitationNotificationAttendee * _attendee;
    EKEventDetailsHighlightControl * _control;
    EKEvent * _event;
}

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (BOOL)hasCustomLayout;
- (id)initWithEvent:(id)arg1 andAttendee:(id)arg2;
- (BOOL)shouldDisplayForEvent;
- (BOOL)update;

@end
