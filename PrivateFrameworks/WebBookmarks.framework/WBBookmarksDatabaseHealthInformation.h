/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WBBookmarksDatabaseHealthInformation : NSObject {
    unsigned int  _allDuplicateBookmarksCount;
    unsigned int  _topLevelDuplicateBookmarksCount;
}

@property (nonatomic, readonly) unsigned int allDuplicateBookmarksCount;
@property (nonatomic, readonly) unsigned int topLevelDuplicateBookmarksCount;

- (unsigned int)allDuplicateBookmarksCount;
- (id)initWithTopLevelDuplicateBookmarksCount:(unsigned int)arg1 allDuplicateBookmarksCount:(unsigned int)arg2;
- (unsigned int)topLevelDuplicateBookmarksCount;

@end
