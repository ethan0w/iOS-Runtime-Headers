/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class ICSDateValue, NSMutableSet;

@interface CalDAVCalendarServerResourceChangedItem : CoreDAVItem  {
    NSMutableSet *_created;
    NSMutableSet *_updated;
    NSMutableSet *_deleted;
    NSMutableSet *_collectionChanges;
    NSMutableSet *_collectionUpdates;
    ICSDateValue *_dtstamp;
}

@property(retain) NSMutableSet * created;
@property(retain) NSMutableSet * updated;
@property(retain) NSMutableSet * deleted;
@property(retain) NSMutableSet * collectionChanges;
@property(retain) NSMutableSet * collectionUpdates;
@property(retain) ICSDateValue * dtstamp;


- (void)dealloc;
- (id)init;
- (void)setDeleted:(id)arg1;
- (id)deleted;
- (id)collectionUpdates;
- (id)collectionChanges;
- (id)updated;
- (id)copyParseRules;
- (void)setDtstampItem:(id)arg1;
- (void)addCollectionUpdates:(id)arg1;
- (void)addCollectionChanges:(id)arg1;
- (void)addDeleted:(id)arg1;
- (void)addUpdated:(id)arg1;
- (void)addCreated:(id)arg1;
- (void)setCollectionUpdates:(id)arg1;
- (void)setCollectionChanges:(id)arg1;
- (void)setUpdated:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setDtstamp:(id)arg1;
- (id)created;
- (id)dtstamp;

@end
