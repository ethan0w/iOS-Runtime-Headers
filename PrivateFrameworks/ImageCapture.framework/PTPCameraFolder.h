/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString;

@interface PTPCameraFolder : ICCameraFolder  {
    void *_ptpCameraFolderProperties;
    NSString *_path;
}

@property(readonly) unsigned int type;
@property(readonly) unsigned long storageID;
@property(readonly) unsigned long objHandle;
@property(copy) id info;
@property(retain) NSString * path;


- (id)path;
- (unsigned int)type;
- (id)description;
- (void)dealloc;
- (void)refreshInfo;
- (BOOL)hasDCIMParent;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned int)arg4 storageID:(unsigned long)arg5 objectHandle:(unsigned long)arg6;
- (id)folderForObjectHandleCreatingIfNeeded:(unsigned long)arg1 addUsedObjectIDs:(id)arg2 numFoldersCreated:(int*)arg3;
- (unsigned long)storageID;
- (id)folderForObjectHandle:(unsigned long)arg1;
- (id)itemForObjectHandle:(unsigned long)arg1;
- (unsigned long)objHandle;
- (BOOL)deleteItemFromCamera:(id)arg1;
- (void)enumerateContent;
- (void)setPath:(id)arg1;
- (id)info;
- (void)finalize;
- (void)setInfo:(id)arg1;

@end
