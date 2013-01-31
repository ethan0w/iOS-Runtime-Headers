/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray;

@interface SUSimpleTableDataSource : SUTableDataSource  {
    Class _cellConfigurationClass;
    NSArray *_objects;
}

@property(retain) Class cellConfigurationClass;
@property(retain) NSArray * objects;


- (void)setObjects:(id)arg1;
- (void)setCellConfigurationClass:(Class)arg1;
- (Class)cellConfigurationClass;
- (id)objectForIndexPath:(id)arg1;
- (void)reloadCellContexts;
- (float)cellHeightForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)dealloc;
- (int)numberOfSections;
- (int)numberOfRowsInSection:(int)arg1;
- (id)objects;

@end
