/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
 */

@interface _SSBDatabaseStatus : NSObject {
    struct DatabaseStatus { 
        struct vector<SafeBrowsing::DatabaseStatus::Database, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database> > { 
            struct Database {} *__begin_; 
            struct Database {} *__end_; 
            struct __compressed_pair<SafeBrowsing::DatabaseStatus::Database *, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database> > { 
                struct Database {} *__first_; 
            } __end_cap_; 
        } m_databases; 
    }  _databaseStatus;
}

@property (nonatomic, readonly) unsigned int databaseCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)databaseCount;
- (unsigned int)hashCountOfDatabaseAtIndex:(unsigned int)arg1;
- (id)initWithDatabaseStatus:(struct DatabaseStatus { struct vector<SafeBrowsing::DatabaseStatus::Database, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database> > { struct Database {} *x_1_1_1; struct Database {} *x_1_1_2; struct __compressed_pair<SafeBrowsing::DatabaseStatus::Database *, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database> > { struct Database {} *x_3_2_1; } x_1_1_3; } x1; })arg1;
- (id)lastUpdateTimeOfDatabaseAtIndex:(unsigned int)arg1;
- (id)nameOfDatabaseAtIndex:(unsigned int)arg1;
- (id)nextPollingTimeOfDatabaseAtIndex:(unsigned int)arg1;
- (unsigned long long)sizeOfDatabaseAtIndex:(unsigned int)arg1;

@end
