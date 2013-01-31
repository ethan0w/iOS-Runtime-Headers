/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSDateComponents;

@interface EKReminder : EKCalendarItem  {
}

@property(copy) NSDateComponents * startDateComponents;
@property(copy) NSDateComponents * dueDateComponents;
@property(getter=isCompleted) BOOL completed;
@property(copy) NSDate * completionDate;
@property int priority;

+ (id)reminderWithEventStore:(id)arg1;
+ (void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2;

- (id)description;
- (void)dealloc;
- (void)setPriority:(int)arg1;
- (int)priority;
- (void)setTimeZone:(id)arg1;
- (void)setCompletionDate:(id)arg1;
- (id)completionDate;
- (BOOL)isCompleted;
- (id)bestDisplayAlarm;
- (void)clearParentID;
- (void)setDueDateComponents:(id)arg1;
- (id)parentID;
- (void)setStartDateComponents:(id)arg1;
- (id)startDateComponents;
- (id)dueDate;
- (id)reminderIdentifier;
- (id)dueDateComponents;
- (void)_sendModifiedNote;
- (id)externalURI;
- (void)setDisplayOrder:(unsigned int)arg1;
- (unsigned int)displayOrder;
- (id)_persistentReminder;
- (void)setCompleted:(BOOL)arg1;
- (BOOL)validate:(id*)arg1;
- (BOOL)commit:(id*)arg1;
- (id)initWithPersistentObject:(id)arg1;

@end
