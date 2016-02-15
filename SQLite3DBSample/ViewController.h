//
//  ViewController.h
//  SQLite3DBSample
//
//  Created by dev on 12/24/15.
//  Copyright © 2015 dev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DBManager.h"
#import "EditInfoViewController.h"

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, EditInfoViewControllerDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tblPeople;

- (IBAction)addNewRecord:(id)sender;

@property (nonatomic, strong) DBManager *dbManager;

@property (nonatomic, strong) NSArray *arrPeopleInfo;

-(void)loadData;

@end

