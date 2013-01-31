/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventOccurrenceListItem;

@interface CalendarOccurrenceCell : UITableViewCell  {
    EKEventOccurrenceListItem *_view;
}


- (BOOL)showDisclosure;
- (unsigned int)isCancelled;
- (void)dealloc;
- (id)init;
- (id)_scriptingInfo;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)initWithEvent:(id)arg1 showColors:(BOOL)arg2;
- (unsigned int)designator;
- (void)setIsAllDay:(BOOL)arg1;
- (void)setIsEndDate:(BOOL)arg1;
- (void)setDisplayDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (void)updateWithEvent:(id)arg1 showColors:(BOOL)arg2;
- (unsigned int)isAllDay;

@end
