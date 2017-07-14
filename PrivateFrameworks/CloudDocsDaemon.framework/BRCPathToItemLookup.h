/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPathToItemLookup : NSObject {
    struct { 
        unsigned int byFileID : 1; 
        unsigned int byDocumentID : 1; 
        unsigned int byPath : 1; 
        unsigned int parentID : 1; 
        unsigned int serverItem : 1; 
        unsigned int serverByPath : 1; 
        unsigned int packageItem : 1; 
    }  _fetched;
    BRCDocumentItem * _matchByDocumentID;
    BRCDocumentItem * _matchByDocumentIDGlobally;
    BRCLocalItem * _matchByFileID;
    BRCLocalItem * _matchByFileIDGlobally;
    BRCLocalItem * _matchByPath;
    BRCPackageItem * _packageItem;
    BRCItemID * _parentID;
    BRCRelativePath * _pathOfItem;
    BRCRelativePath * _relpathOfFSEvent;
    BRCServerItem * _serverByPath;
    BRCServerItem * _serverItem;
}

@property (nonatomic, retain) BRCDocumentItem *byDocumentID;
@property (readonly, retain) BRCDocumentItem *byDocumentIDGlobally;
@property (nonatomic, retain) BRCLocalItem *byFileID;
@property (readonly, retain) BRCLocalItem *byFileIDGlobally;
@property (nonatomic, readonly) BRCLocalItem *byPath;
@property (nonatomic, readonly) BRCItemID *parentID;
@property (nonatomic, readonly) BRCRelativePath *relpathOfFSEvent;
@property (nonatomic, readonly) BRCRelativePath *relpathOfItem;
@property (nonatomic, readonly) BRCServerItem *serverByPath;

+ (id)lookupForRelativePath:(id)arg1;

- (void).cxx_destruct;
- (id)_byPathWithLastPathComponent:(id)arg1;
- (BOOL)_fetchByDocumentID:(BOOL)arg1;
- (BOOL)_fetchByFileID:(BOOL)arg1;
- (BOOL)_fetchByPath;
- (id)byDocumentID;
- (id)byDocumentIDGlobally;
- (id)byFileID;
- (id)byFileIDGlobally;
- (id)byPath;
- (id)byPathWithLastPathComponent:(id)arg1;
- (id)description;
- (id)initWithRelativePath:(id)arg1;
- (id)parentID;
- (id)relpathOfFSEvent;
- (id)relpathOfItem;
- (id)serverByPath;
- (void)setByDocumentID:(id)arg1;
- (void)setByFileID:(id)arg1;

@end
