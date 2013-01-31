/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem, CalDAVCalendarServerChangesItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem  {
    CoreDAVItemWithNoChildren *_master;
    CoreDAVLeafItem *_recurrenceID;
    CalDAVCalendarServerChangesItem *_changes;
}

@property(retain) CoreDAVItemWithNoChildren * master;
@property(retain) CoreDAVLeafItem * recurrenceID;
@property(retain) CalDAVCalendarServerChangesItem * changes;
@property(readonly) BOOL isMaster;


- (id)master;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)changes;
- (id)recurrenceID;
- (void)setRecurrenceID:(id)arg1;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)setChanges:(id)arg1;
- (void)setMaster:(id)arg1;
- (BOOL)isMaster;

@end
